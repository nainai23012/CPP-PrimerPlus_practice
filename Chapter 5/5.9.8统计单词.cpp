/*********************************************************************
    程序名: 8． 编写一个程序， 它使用一个char数组和循环来每次读取一个单
	词， 直到用户输入done为止。 随后， 该程序指出用户输入了多少个单词
	（不包括done在内） 。 下面是该程序的运行情况：您应在程序中包含头文件cstring， 
	并使用函数strcmp( )来进行比较
	测试。
    版权:
    作者: 大野狼
    日期: 2022/4/13-星期三 17:02:56
    说明:
*********************************************************************/
#include <iostream>
#include <cstring> 
int main(void) {
	using namespace std;
	unsigned int n_word=0,nulspace = 0;
    char input[128];
    cout<<"输入一段话，统计用户输入了多少个单词	（到done为止） "<<endl;
    while (cin >> input)
    {
        if (strcmp(input, "done"))
        {
            n_word++;
        }
        else
            break;
    }
    cout << "你输入了 " << n_word << " 个单词." << endl;
	return 0;
}

