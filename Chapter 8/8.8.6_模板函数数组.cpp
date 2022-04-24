/*********************************************************************
    程序名:6． 编写模板函数maxn( )， 它将由一个T类型元素组成的数组和一
	个表示数组元素数目的整数作为参数， 并返回数组中最大的元素。 在程
	序对它进行测试， 该程序使用一个包含6个int元素的数组和一个包含4个
	double元素的数组来调用该函数。 程序还包含一个具体化， 它将char指
	针数组和数组中的指针数量作为参数， 并返回最长的字符串的地址。 如
	果有多个这样的字符串， 则返回其中第一个字符串的地址。 使用由5个
	字符串指针组成的数组来测试该具体化。
    版权:
    作者: 大野狼
    日期: 2022/4/24-星期日 11:20:15
    说明:
*********************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
template<typename T>
void max5(T arr[],int n);
template <> void max5(char *arr[],int n);
int main(void) {
	int arr[6]={5,6,8,99,4,45};
	double arr2[4]={5.1, 666.1, 8.2, 99.0};
	char * arr3[5]={"yangggg","xin","yangggg","john","ha"};
	 
	max5(arr,6);
	max5(arr2,4);
	max5(arr3,5);
	
	return 0;
}


template <> void max5(char *arr[],int n)
{
	int count=strlen(arr[0]);
	int index=1;
	for(int i = 0;i<n;++i)
		(count<strlen(arr[i]))?count=strlen(arr[i]),index=i+1:1;
	cout<<index<<endl;
}

template<typename T>
void max5(T arr[],int n)
{	
//	cout<<sizeof(arr)/sizeof(arr[0])<<endl;
	T max=arr[0];
	for(int i=1;i<n;++i)
		(max<arr[i])?(max=arr[i]):1;
	cout<<max<<endl;
}
