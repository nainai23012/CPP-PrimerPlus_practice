/*********************************************************************
    程序名: 10． 设计一个名为calculate( )的函数， 它接受两个double值和一个指
向函数的指针， 而被指向的函数接受两个double参数， 并返回一个
double值。 calculate( )函数的类型也是double， 并返回被指向的函数使用
calculate( )的两个double参数计算得到的值。 例如， 假设add( )函数的定
义如下：
    版权:
    作者: 大野狼
    日期: 2022/4/20-星期三 15:18:43
    说明:
*********************************************************************/
#include <iostream>
double add(double x, double y);
double mul(double x, double y);
double calculate(double x,double y,double (*pad)(double x, double y));

int main(void) {
	using namespace std;
	double a,b;
	cout<<"请输入两个数字，以空格分隔："; 
	while(cin>>a>>b)
	{
		cout<<"a,b,add = "<<calculate(a,b,add)<<endl;
		cout<<"a,b,mul = "<<calculate(a,b,mul)<<endl;
		cout<<"继续输入两个数："; 
	}
	return 0;
}

double calculate(double x,double y,double (*pad)(double x, double y))
{
	return pad(x,y);
}
double add(double x, double y)
{
    return x + y;
}
double mul(double x, double y)
{
    return x * y;
}
