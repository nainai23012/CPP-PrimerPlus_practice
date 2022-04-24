/*********************************************************************
    程序名: 3． 下面是一个结构声明：
a． 编写一个函数， 按值传递box结构， 并显示每个成员的值。
b． 编写一个函数， 传递box结构的地址， 并将volume成员设置为其他三维长度的乘积。
c． 编写一个使用这两个函数的简单程序
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 14:26:04
    说明:
*********************************************************************/
#include <iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_struct(box a);  //显示成员值 
void address_struct(box * a);  //传结构体地址 

int main(void) {
	box a={"纸盒子",10,20,30}; 
	show_struct(a);   //问题 a 
	address_struct(&a); //问题 b
	show_struct(a);   //问题 a 
	return 0;
}
void address_struct(box * a)  //传结构体地址 
{
	a->volume = a->height * a->width * a->length;
}
void show_struct(box a)  //显示成员值 
{
	cout<<a.maker<<endl; 
	cout<<a.height<<endl; 
	cout<<a.width<<endl; 
	cout<<a.length<<endl; 
	cout<<a.volume<<endl; 
}
