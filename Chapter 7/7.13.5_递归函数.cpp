/*********************************************************************
    程序名: 5． 定义一个递归函数， 接受一个整数参数， 并返回该参数的阶
	乘。 前面讲过， 3的阶乘写作3!， 等于3*2!， 依此类推； 而0!被定义为
	1。 通用的计算公式是， 如果n大于零， 则n!=n*（n?1） !。 在程序中对
	该函数进行测试， 程序使用循环让用户输入不同的值， 程序将报告这些
	值的阶乘。
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 14:59:18
    说明:
*********************************************************************/
#include <iostream>
double jiecheng(int a);  //计算阶乘并返回 
int main(void) {
	using namespace std;
	int a;
	double aa=0;
	cout<<"输入一个正整数，程序会计算这个数的阶乘:";
	while(cin>>a && a>=0) 
	{
		aa = jiecheng(a);
		cout<<a<<" 的阶乘 = "<<aa<<endl; 
		cout<<"退出输入'Q',或继续输入一个数：";
	}
	return 0;
}

double jiecheng(int a)
{
	double result;
	if(a<=1)
		result = 1;
	else
	{
		result = jiecheng(a-1) * a;
	}
	return result;
}

