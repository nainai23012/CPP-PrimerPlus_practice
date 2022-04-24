/*********************************************************************
    程序名:2． CandyBar结构包含3个成员。 第一个成员存储candy bar的品牌名
称； 第二个成员存储candy bar的重量（可能有小数） ； 第三个成员存储
candy bar的热量（整数） 。 请编写一个程序， 它使用一个这样的函数，
即将CandyBar的引用、 char指针、 double和int作为参数， 并用最后3个值
设置相应的结构成员。 最后3个参数的默认值分别为“Millennium
Munch”、 2.85和350。 另外， 该程序还包含一个以CandyBar的引用为参
数， 并显示结构内容的函数。 请尽可能使用const。
    版权:
    作者: 大野狼
    日期: 2022/4/23-星期六 14:48:34
    说明:
*********************************************************************/
#include <iostream>
//#include <string>
#include <cstring>
using namespace std;
const int Size=80;

struct CandyBar{
//	string brand;
	char brand[Size]; //品牌 
	float weight; //重量 
	int count;  //数量 
};

void fill(CandyBar & c1,char * ch="Millennium Munch",double d1=2.85,int n1=350); 
void print(const CandyBar & c1); 

int main(void) {
	CandyBar cand[5];
	fill(cand[0],"娃哈哈",0.856,25);
	fill(cand[1],"金箍棒",13500,1);
	fill(cand[2]);
	cout<<"\n*****************\n"<<endl;
	print(cand[0]);
	print(cand[1]);
	print(cand[2]);
	return 0;
}

void fill(CandyBar & c1,char * ch,double d1,int n1)
{
	strcpy(c1.brand,ch);
	c1.weight = d1;
	c1.count = n1;
//	cout<<"brand:";
//	cin.getline(c1.brand,Size);
//	cout<<"weight:";
//	cin>>c1.weight;
//	cin.get();
//	cout<<"count:";
//	cin>>c1.count;
//	cin.get();
}
void print(const CandyBar & c1)
{
	cout<<"brand: "<<c1.brand<<endl;
	cout<<"weight: "<<c1.weight<<endl;
	cout<<"count: "<<c1.count<<endl;
}

