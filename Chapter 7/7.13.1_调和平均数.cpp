/*********************************************************************
    程序名: 7.13 编程练习
	1． 编写一个程序， 不断要求用户输入两个数， 直到其中的一个为
	0。 对于每两个数， 程序将使用一个函数来计算它们的调和平均数， 并
	将结果返回给main( )， 而后者将报告结果。 调和平均数指的是倒数平均
	值的倒数， 计算公式如下：
	调和平均数=2.0 * x * y / (x + y)
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 10:44:53
    说明:
*********************************************************************/
#include <iostream>
double harm(int a,int b); 
int main(void) {
	using namespace std;
	char ch; 
	int a,b;
	double harmonic_mean;  //调和平均数
	cout<<"请输入两个数，以空格分隔：";
	while((cin>>a>>b) && 0!=a && 0!=b)
	{
		harmonic_mean = harm(a,b);
		cout<<"调和平均数 = "<<harmonic_mean<<endl;
		cout<<"请输入两个数，以空格分隔：";
	}

	return 0;
}
double harm(int a,int b)
{
	double result = 0;
	result = 2*(a*b)/(a+b);
	return result;
}

