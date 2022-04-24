/*********************************************************************
    程序名:3． 编写一个函数， 它接受一个指向string对象的引用作为参数， 并
	将该string对象的内容转换为大写， 为此可使用表6.4描述的函数toupper(
	)。 然后编写一个程序， 它通过使用一个循环让您能够用不同的输入来
	测试这个函数， 该程序的运行情况如下：
    版权:
    作者: 大野狼
    日期: 2022/4/23-星期六 15:51:18
    说明:
*********************************************************************/
#include <iostream>
#include <string>
using namespace std;
void upper(const string & str1); 
int main(void) {
	cout<<"请输入一段小写的字符串(q退出)：\n";
	string str1;
	getline(cin,str1);
	while(str1!="q")
	{
		upper(str1);
		cout<<"\n再次输入字符串：\n"; 
		getline(cin,str1);
	}
	cout<<"收工！"<<endl; 
	return 0;
}

void upper(const string & str1){
	int count = str1.size();
	char ch;
	for(int i=0;i<count;++i)
	{
		ch = (str1[i]>='a' && str1[i]<='z')? str1[i]-32:str1[i];
		cout<<ch; 
	}
}
