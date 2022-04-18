/*********************************************************************
    程序名: 4． Daphne以10%的单利投资了100美元。 也就是说， 每一年的利润
		都是投资额的10%， 即每年10美元：
		利息 = 0.10×原始存款
		而Cleo以5%的复利投资了100美元。 也就是说， 利息是当前存款
		（包括获得的利息） 的5%， ：
		利息 = 0.05×当前存款
		Cleo在第一年投资100美元的盈利是5%—得到了105美元。 下一年
		的盈利是105美元的5%—即5.25美元， 依此类推。 请编写一个程序， 计
		算多少年后， Cleo的投资价值才能超过Daphne的投资价值， 并显示此时
		两个人的投资价值。
    版权:
    作者: 大野狼
    日期: 2022/4/13-星期三 15:33:39
    说明:
*********************************************************************/
#include <iostream>
int main(void) {
	using namespace std;
	const int initi = 100;
	int year=0;
	float dl=0.1,fl=0.05;
	float dmoney=initi,cmoney=initi;
	while(cmoney<=dmoney)
	{
		dmoney += initi*dl;
		cmoney *= (1+fl);
		++year;
	}
	cout<<"year = "<<year<<"\ndmoney = "<<dmoney<<"\ncmoney = "<<cmoney<<endl;
	return 0;
}

