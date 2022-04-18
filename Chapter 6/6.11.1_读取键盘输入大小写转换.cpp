/*********************************************************************
    程序名: 6.11 编程练习
			1． 编写一个程序， 读取键盘输入， 直到遇到@符号为止， 并回显
			输入（数字除外） ， 同时将大写字符转换为小写， 将小写字符转换为大
			写（别忘了cctype函数系列） 。
    版权:
    作者: 大野狼
    日期: 2022/4/15-星期五 10:43:04
    说明:
*********************************************************************/
#include <iostream>
#include <cctype>
//const int Size 100;
int main(void) {
	using namespace std;
	char str1;
	while((str1=cin.get())!='@')
	{
		if(isdigit(str1))
			continue;
		else if(isupper(str1))
			cout<<char(tolower(str1));
		else if(islower(str1))
			cout<<char(toupper(str1));
	}
	return 0; 
}

