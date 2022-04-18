/*********************************************************************
    程序名: 7． 设计一个名为car的结构， 用它存储下述有关汽车的信息： 生产
			商（存储在字符数组或string对象中的字符串） 、 生产年份（整数） 。
			编写一个程序， 向用户询问有多少辆汽车。 随后， 程序使用new来创建
			一个由相应数量的car结构组成的动态数组。 接下来， 程序提示用户输
			入每辆车的生产商（可能由多个单词组成） 和年份信息。 请注意， 这需
			要特别小心， 因为它将交替读取数值和字符串（参见第4章） 。 最后，
			程序将显示每个结构的内容。 该程序的运行情况如下：
    版权:
    作者: 大野狼
    日期: 2022/4/13-星期三 16:18:08
    说明:
*********************************************************************/
#include <iostream>
#include <string>
using namespace std;

struct car{
	string brand;
	int year;
};
int main(void) {
	int num;
	cout<<"输入汽车的数量：";
	cin>>num;
	cin.get(); 
	struct car * pcar = new struct car[num];
	for(int i=0;i<num;++i)
	{	
		cout<<"请输入第"<<i+1<<"个汽车的品牌：";
		getline(cin,pcar[i].brand);
		cout<<"请输入第"<<i+1<<"个汽车的年份：";
		cin>>pcar[i].year;
//		cin.get(); 
	}
	cout<<"一共有"<<num<<"个汽车品牌"<<endl;
	for(int i=0;i<num;++i)
	{	
		cout<<"第"<<i+1<<"个汽车的品牌："<<pcar[i].brand<<endl;
		cout<<"第"<<i+1<<"个汽车的年份："<<pcar[i].year<<endl;
	}
	delete [] pcar;
	return 0;
}

