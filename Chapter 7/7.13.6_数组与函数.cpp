/*********************************************************************
    程序名: 6． 编写一个程序， 它使用下列函数：
	Fill_array( )将一个double数组的名称和长度作为参数。 它提示用户
	输入double值， 并将这些值存储到数组中。 当数组被填满或用户输入了
	非数字时， 输入将停止， 并返回实际输入了多少个数字。
	Show_array( )将一个double数组的名称和长度作为参数， 并显示该
	数组的内容。
	Reverse-array( )将一个double数组的名称和长度作为参数， 并将存
	储在数组中的值的顺序反转。
	程序将使用这些函数来填充数组， 然后显示数组； 反转数组， 然后
	显示数组； 反转数组中除第一个和最后一个元素之外的所有元素， 然后
	显示数组。
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 17:23:34
    说明:
*********************************************************************/
#include <iostream>
using namespace std;
const int MAX=10;
int Fill_array(double arr[],int size);
int Show_array(double arr[],int size);
int Reverse_array(double arr[],int size);

int main(void) {
	double arr[MAX];
	int count;
	cout<<"输入数字：";
	count = Fill_array(arr,MAX);  //输入 
	cout<<"共计输入了："<<count<<" 个数字！\n"; 
	Show_array(arr,count);  //显示 
	Reverse_array(arr,count);  //反转 
	Show_array(arr,count);
	return 0;
}

int Fill_array(double arr[],int size)
{
	int i=0;
	while( i<size && cin>>arr[i])
	{
		++i;
	}
	return i;
}

int Show_array(double arr[],int size)
{
	for(int i=0;i<size;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int Reverse_array(double arr[],int size)
{
	double temp;
	for(int i=0;i<size/2;++i)
	{
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
}





