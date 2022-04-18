/*********************************************************************
    程序名: 2． 编写一个程序， 最多将10个donation值读入到一个double数组中
		（如果您愿意， 也可使用模板类array） 。 程序遇到非数字输入时将结束
		输入， 并报告这些数字的平均值以及数组中有多少个数字大于平均值。
    版权:
    作者: 大野狼
    日期: 2022/4/15-星期五 13:33:23
    说明:
*********************************************************************/
#include <iostream>
#include <array> 
#include <cstdlib>          // support for exit()
int main(void) {
	using namespace std;
	const unsigned int SIZE = 10; //最大容量 
	double total=0,avg=0;  //合计 平均值 
	unsigned int count=0,lagNum=0;  //计数 
//	double donation[SIZE];  //方法1 数组容器
	array<double, SIZE> donation;  //方法2 array模板容器 
	cout<<"请依次输入10个数值，以空格或回车分隔（输入非数字时将结束输入）:\n";
	while(count<SIZE && (cin>>donation[count]))  //小于最大值，并且输入有效 
	{
		total += donation[count];
		++count; 
	}
	if(count>0) 
		avg = total/count;
	else
		cout<<"没有有效的数据输入！",exit(EXIT_FAILURE); 
	//判断大于平均值的数量
	for(int i=0;i<count;++i)
		(donation[i] > avg)?lagNum++:1==1; 
	cout<<"共计："<<count<<" 个数据。\n总计: "<<total<<" 平均值为： "<<avg;
	cout<<"\n其中有 "<<lagNum<<" 个数据大于平均值。";
	return 0;
}

