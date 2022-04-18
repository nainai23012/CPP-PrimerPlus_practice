/*********************************************************************
    程序名: 9． 编写一个满足前一个练习中描述的程序， 但使用string对象而不
	是字符数组。 请在程序中包含头文件string， 并使用关系运算符来进行
	比较测试。
    版权:
    作者: 大野狼
    日期: 2022/4/14-星期四 13:41:08
    说明:
*********************************************************************/
#include <iostream>
//#include <cstring> 
int main(void) {
	using namespace std;
	unsigned int n_word=0,nulspace = 0;
//    char input[128];
    string input;
    cout<<"输入一段话，统计用户输入了多少个单词	（到done为止） "<<endl;
    while (cin >> input)
    {
//        if (strcmp(input, "done"))
        if (input!="done")
        {
            n_word++;
        }
        else
            break;
    }
    cout << "你输入了 " << n_word << " 个单词." << endl;
	return 0;
}
