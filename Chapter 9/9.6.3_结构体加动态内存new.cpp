/*********************************************************************
    程序名:3． 下面是一个结构声明：
	编写一个程序， 使用定位new运算符将一个包含两个这种结构的数
	组放在一个缓冲区中。 然后， 给结构的成员赋值（对于char数组， 使用
	函数strcpy( )） ， 并使用一个循环来显示内容。 一种方法是像程序清单
	9.10那样将一个静态数组用作缓冲区； 另一种方法是使用常规new运算
	符来分配缓冲区。
    版权:
    作者: 大野狼
    日期: 2022/4/26-星期二 17:16:02
    说明:
*********************************************************************/
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
const int SIZE=2;

struct chaff
{
	char dross[20];
	int slag;
};

void set_chaff(chaff * pch);
void show_chaff(const chaff * pch);

int main(void) {
	
//	chaff arr1[SIZE];
	chaff * pch = new chaff[SIZE];
	cout<<"请依次输入信息："<<endl;
	set_chaff(pch);
	cout<<"\n\n\n显示所有信息："<<endl;
	show_chaff(pch);
	delete [] pch;

	return 0;
}

//void set_chaff(chaff & g)
void set_chaff(chaff * pch)
{
	char temp[20];
	char next;
	for(int i=0;i<SIZE;++i)
	{
		cin.getline(temp,20);
//		strcpy(pch[i].dross,temp);
		strncpy(pch[i].dross,temp,20);
//		while (cin.get(next) && next != '\n')
//			;
		cin>>pch[i].slag;
		cin.get();
	}
}
void show_chaff(const chaff * pch)
{
	for(int i=0;i<SIZE;++i)
	{
		cout<<pch[i].dross<<" : "<<pch[i].slag<<endl;
	}
	
}


