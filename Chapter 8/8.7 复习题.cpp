/*********************************************************************
    程序名:8.7 复习题
    版权:
    作者: 大野狼
    日期: 2022/4/23-星期六 10:41:35
    说明:
*********************************************************************/
#include <iostream>
int main(void) {
	using namespace std;
	return 0;
}

8.7 复习题
1． 哪种函数适合定义为内联函数？
	答：反复利用，短代码，非递归。 

2． 假设song( )函数的原型如下：
	void song(const char * name, int times); 
a． 如何修改原型， 使times的默认值为1？
	void song(const char * name, int times=1); 
b． 函数定义需要做哪些修改？                
	答;无需修改 
c． 能否为name提供默认值“O. My Papa”？
	void song(int times, const char * name="O. My Papa"); 

3． 编写iquote( )的重载版本——显示其用双引号括起的参数。 编写
3个版本： 一个用于int参数， 一个用于double参数， 另一个用于string参
数。
	iquote(int x);
	iquote(double x);
	iquote(string x);
	
4． 下面是一个结构模板：
	struct box{
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};
a． 请编写一个函数， 它将box结构的引用作为形参， 并显示每个成
员的值。
	void fun1(const box & box1)
	{
		cout<<box1.maker<<endl;
		cout<<box1.height<<endl;
		cout<<box1.width<<endl;
		cout<<box1.length<<endl;
		cout<<box1.volume<<endl;
	}
b． 请编写一个函数， 它将box结构的引用作为形参， 并将volume成
员设置为其他3边的乘积。
		void fun2(box & box1)
	{
		box1.volume = box1.height * box1.width * box1.length
	}
	
5． 为让函数fill()和show()使用引用参数， 需要对程序清单7.15做哪
些修改？
void fill(std::array<double, Seasons> * pa);  //原函数 
void fill(std::array<double, Seasons> & pa);  //改为引用 


void show(std::array<double, Seasons> da); //原函数 
void show(const std::array<double, Seasons> & da); //改为引用 

6． 指出下面每个目标是否可以使用默认参数或函数重载完成， 或
者这两种方法都无法完成， 并提供合适的原型。
a． mass(density, volume)返回密度为density、 体积为volume的物体
的质量， 而mass(denstity)返回密度为density、 体积为1.0立方米的物体的
质量。 这些值的类型都为double。
	double mass(double density,double volume=1.0):
	 
b． repeat(10, “I'm OK”)将指定的字符串显示10次， 而repeat(“But
you're kind of stupid”)将指定的字符串显示5次。
	void repeat(int n , const char * ar);
	void repeat(const char * ar , int n=5);
	
c． average(3, 6)返回两个int参数的平均值（int类型） ， 而
average(3.0, 6.0)返回两个double值的平均值（double类型） 。
	int average(int x,int y);
	double average(double x,double y);

d． mangle(“I'm glad to meet you”)根据是将值赋给char变量还是char*
变量， 分别返回字符I和指向字符串“I'm mad to gleet you”的指针。
	答：不能 特征值相同。
	 
7． 编写返回两个参数中较大值的函数模板。
	template <typename T>
	T lage(const T x,const T y)
	{
		return x>y?x:y;
	}
	
8． 给定复习题6的模板和复习题4的box结构， 提供一个模板具体
化， 它接受两个box参数， 并返回体积较大的一个。
	template<>box max(box b1,box b2)
	{
		return b1.volume>b2.volume?b1:b2;
	 } 

9． 在下述代码（假定这些代码是一个完整程序的一部分） 中，
v1、 v2、 v3、 v4和v5分别是哪种类型？
	int g(int x);
	...
	float m=5.5f;
	float & rm = m;
	defltype(m) v1=m;  float
	defltype(rm) v2=m;  float &
	defltype((m)) v3=m;  float &
	defltype(g(100)) v4;  int
	defltype(2.0 * m) v5;  double  2.0为double类型 








 
