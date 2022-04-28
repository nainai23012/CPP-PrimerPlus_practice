/*********************************************************************
    程序名:9.6 编程练习  
		golf.cpp 
		1． 下面是一个头文件：
		根据这个头文件， 创建一个多文件程序。 其中的一个文件名为
	golf.cpp， 它提供了与头文件中的原型匹配的函数定义； 另一个文件应
	包含main( )， 并演示原型化函数的所有特性。 例如， 包含一个让用户输
	入的循环， 并使用输入的数据来填充一个由golf结构组成的数组， 数组
	被填满或用户将高尔夫选手的姓名设置为空字符串时， 循环将结束。
	main( )函数只使用头文件中原型化的函数来访问golf结构。
    版权:
    作者: 大野狼
    日期: 2022/4/26-星期二 15:56:42
    说明:
*********************************************************************/
#include <iostream>
int main(void)
{
    golf g[10];
    int n = 0;
    cout << "依次输入信息: " << endl;

    while ((n < 10) && (setgolf(g[n])))
    {
        n++;
        cout << "下一位r: " << endl;
    }

    cout << "查看所有高尔夫选手的信息: " << endl;
    for (int i = 0; i < n; i++)
    {
        showgolf(g[i]);
    }

}

void setgolf(golf & g,const char * name, int hc)
{
	strcpy(g.fullname,name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cin.getline(fullname,40);
	if (strcmp(g.fullname, "") == 0)
		return 0;
	std::cin>>g.handicap;
	std::cin.get();
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout<<g.fullname;
	std::cout<<g.handicap;
}
