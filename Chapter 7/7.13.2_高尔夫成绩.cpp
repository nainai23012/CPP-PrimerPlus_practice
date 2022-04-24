/*********************************************************************
    程序名: 2． 编写一个程序， 要求用户输入最多10个高尔夫成绩， 并将其存
	储在一个数组中。 程序允许用户提早结束输入(负数结束)， 并在一行上显示所有成
	绩， 然后报告平均成绩。 请使用3个数组处理函数来分别进行输入、 显
	示和计算平均成绩。
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 11:09:20
    说明:
*********************************************************************/
#include <iostream>
using namespace std;
void in_data(double arr[],unsigned int * count);  // 输入 
void show_data(const double arr[],const unsigned int count);  //输出 
void calc_data(const double arr[],const unsigned int count);   //计算 
const int SIZE =10;

int main(void) {
	double score[SIZE];
	unsigned int count=0;  //计数 
	cout<<"请输入10个高尔夫成绩，以空格分隔。不足10个以 'q' 结束录入 ：\n";
	in_data(score,&count); //输入 
	show_data(score,count); //显示 
	calc_data(score,count); //计算平均并输出 
	return 0;
}
void in_data(double arr[],unsigned int * count) //输入
{ 
	while((*count)<10 && cin>>arr[*count])
	{
		(*count)++;
	}
//	for(int i=0;i<SIZE;++i)
//	{
//		cin>>arr[i];
//		if(arr[i]<0)
//			break;  //输入负数提早结束录入 
//		++count;
//	}
//	return count;
}
void show_data(const double arr[],const unsigned int count)  //输出 
{
	for(int i=0;i<count;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void calc_data(const double arr[],const unsigned int count)   //计算平均成绩
{
	double total=0;
	for(int i=0;i<count;++i)
		total += arr[i];
	
	cout<<"平均成绩为： "<<total/count<<endl;
} 


