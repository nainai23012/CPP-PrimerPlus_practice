/*********************************************************************
    程序名: 2． 使用array对象（而不是数组） 和long double（而不是long long）
			重新编写程序清单5.4， 并计算100!的值。
    版权:
    作者: 大野狼
    日期: 2022/4/13-星期三 14:26:45
    说明:
*********************************************************************/
#include <iostream>
#include <array>
const int ArSize = 101;      // example of external declaration
int main()
{
	using namespace std; 
//    long long factorials[ArSize];
    array<long double,ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
	// std::cin.get();
    return 0;
}
