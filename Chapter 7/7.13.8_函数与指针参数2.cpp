/*********************************************************************
    程序名: 8． 在不使用array类的情况下完成程序清单7.15所做的工作。 编写
		两个这样的版本：
			a． 使用const char *数组存储表示季度名称的字符串， 并使用double
		数组存储开支。
			b． 使用const char *数组存储表示季度名称的字符串， 并使用一个
		结构， 该结构只有一个成员——一个用于存储开支的double数组。 这种
		设计与使用array类的基本设计类似。
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 18:31:25
    说明:
*********************************************************************/
//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
//const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct cost{
	double expenses[Seasons];
};

//void fill(std::array<double, Seasons> * pa);
//void show(std::array<double, Seasons> da);
//void fill(double arr[]);
//void show(double arr[]);
void fill(struct cost * ptr);  //结构体法  b题  
void show(struct cost * ptr);
int main()
{
//    std::array<double, 4> expenses;  //array 方法 
//    double expenses[Seasons];  //数组方法  a题 
//    fill(expenses);
//    show(expenses);

	cost * pexpenses = new cost;  //结构体法  b题  
    fill(pexpenses);  //结构体法  b题  
    show(pexpenses);
    // std::cin.get();
    // std::cin.get();
    delete pexpenses;
    return 0;
}

//void fill(std::array<double, Seasons> * pa)
//void fill(double arr[])
void fill(struct cost * ptr)  //结构体法  b题  
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> ptr->expenses[i];
    }
}

//void show(std::array<double, Seasons> da)
//void show(double arr[])
void show(struct cost * ptr)  //结构体法  b题  
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
//        std::cout << Snames[i] << ": $" << arr[i] << '\n';
//        total += arr[i];
        std::cout << Snames[i] << ": $" << ptr->expenses[i] << '\n';
        total += ptr->expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}

