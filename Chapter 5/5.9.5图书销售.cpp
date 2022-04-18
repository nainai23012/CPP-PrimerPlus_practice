/*********************************************************************
    程序名: 5． 假设要销售《C++ For Fools》 一书。 请编写一个程序， 输入全
		年中每个月的销售量（图书数量， 而不是销售额） 。 程序通过循环， 使
		用初始化为月份字符串的char *数组（或string对象数组） 逐月进行提
		示， 并将输入的数据储存在一个int数组中。 然后， 程序计算数组中各元
		素的总数， 并报告这一年的销售情况
    版权:
    作者: 大野狼
    日期: 2022/4/13-星期三 15:48:17
    说明:
*********************************************************************/
#include <iostream>
int main(void) {
	using namespace std;
	const int month=12;
	int sale[month];
	int total=0;
	for(int n=0;n<month;++n)
	{
		cout<<"请输入"<<n+1<<"月的销售量:";
//		sale[n] = cin.get();
		cin>>sale[n];
//		cin.get(); 
		total += sale[n];
	}
	cout<<"\n共计销售图书："<<total<<endl; 
	for(int n = 0;n<month;++n)
		cout<<n<<" : "<<sale[n]<<endl;
	return 0;
}

