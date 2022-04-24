/*********************************************************************
    程序名:5． 编写模板函数max5( )， 它将一个包含5个T类型元素的数组作为
	参数， 并返回数组中最大的元素（由于长度固定， 因此可以在循环中使
	用硬编码， 而不必通过参数来传递） 。 在一个程序中使用该函数， 将T
	替换为一个包含5个int值的数组和一个包含5个dowble值的数组， 以测试
	该函数。
    版权:
    作者: 大野狼
    日期: 2022/4/24-星期日 10:46:26
    说明:
*********************************************************************/
#include <iostream>
using namespace std;
template<typename T>
void max5(T arr[],int n);
int main(void) {
	int arr[5]={5,6,8,99,4};
	double arr2[5]={5.1,666.1,8.2,99.0,1.4};
	
	max5(arr,5);
	max5(arr2,5);
	
	return 0;
}


template<typename T>
void max5(T arr[],int n)
{	
	T max=arr[0];
	for(int i=1;i<n;++i)
		(max<arr[i])?(max=arr[i]):1;
	cout<<max<<endl;
}

