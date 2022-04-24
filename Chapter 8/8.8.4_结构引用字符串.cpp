/*********************************************************************
    程序名:4． 下面是一个程序框架：
	请提供其中描述的函数和原型， 从而完成该程序。 注意， 应有两个
	show( )函数， 每个都使用默认参数。 请尽可能使用cosnt参数。 set( )使用
	new分配足够的空间来存储指定的字符串。 这里使用的技术与设计和实
	现类时使用的相似。 （可能还必须修改头文件的名称， 删除using编译指
	令， 这取决于所用的编译器。 ）
    版权:
    作者: 大野狼
    日期: 2022/4/23-星期六 16:58:55
    说明:
*********************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct stringy {
    char *str;
    int ct;
};
void set(struct stringy &in_stringy, char * in_string); 
void show(const struct stringy &in_stringy, int print_times = 1);
void show(const char * str, int print_times = 1);

int main(void) {
	
	stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    int i = 1+2; 
    cout<<"************"<<beany.str<<endl;
//    delete [] beany.str;
//    cout<<"************"<<beany.str<<endl;
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
	return 0;
}



void set(struct stringy &in_stringy, char * in_string)
{
    int string_length = strlen(in_string);
    in_stringy.str = new char(string_length + 1);
    strcpy(in_stringy.str, in_string);
    in_stringy.ct = string_length;
}
void show(const struct stringy &in_stringy, int print_times)
{
    for (int i = 0; i < print_times; i++)
    {
        cout << "member string of struct stringy: " << in_stringy.str << endl;
    }
}
void show(const char * str, int print_times)
{
    for (int i = 0; i < print_times; i++)
    {
        cout << "Print char string: " << str << endl;
    }
}

