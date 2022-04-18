/*********************************************************************
    程序名: 5． 在Neutronia王国， 货币单位是tvarp， 收入所得税的计算方式如下：
5000 tvarps： 不收税
5001～15000 tvarps： 10%
15001～35000 tvarps： 15%
35000 tvarps以上： 20%
例如， 收入为38000 tvarps时， 所得税为5000 0.00 + 10000 0.10 +
20000 0.15 + 3000 0.20， 即4600 tvarps。 请编写一个程序， 使用循环来
要求用户输入收入， 并报告所得税。 当用户输入负数或非数字时， 循环将结束。
    版权:
    作者: 大野狼
    日期: 2022/4/15-星期五 15:45:17
    说明:
*********************************************************************/
#include <iostream>
using namespace std;
double calc(double inc);  //收入 返回税收 
int main(void) {
	double income,tax;  //收入  税收
	cout<<"请输入您的收入：(输入负数或非数字时退出)：";
	while((cin>>income) && (income >= 0))
	{
		tax = calc(income);
		cout<<"您的收入为："<<income<<"\n需要交税："<<tax<<endl;
		cout<<"再次输入您的收入："; 
	}
	return 0;
}

double calc(double inc)
{
	double result = 0.0;
	if(inc <= 5000)
		result = 0.0;
	else if(inc > 5000 && inc <= 15000)
		result = (inc-5000) * 0.1;
	else if(inc > 15000 && inc <= 35000)
		result = 10000 * 0.1 + (inc-15000) * 0.15;
	else if(inc > 35000)
		result = 10000 * 0.1 + 20000 * 0.15 + (inc-35000) * 0.2;
	else
		result = 0.00;
	return result;
}

