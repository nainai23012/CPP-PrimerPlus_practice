/*********************************************************************
    程序名: 4． 许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩
	法的变体。 在这些玩法中， 玩家从一组被称为域号码（field number） 的
	号码中选择几个。 例如， 可以从域号码1～47中选择5个号码； 还可以从
	第二个区间（如1～27） 选择一个号码（称为特选号码） 。 要赢得头
	奖， 必须正确猜中所有的号码。 中头奖的几率是选中所有域号码的几率
	与选中特选号码几率的乘积。 例如， 在这个例子中， 中头奖的几率是从
	47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的
	几率的乘积。 请修改程序清单7.4， 以计算中得这种彩票头奖的几率。
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 14:40:53
    说明:
*********************************************************************/
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2);
int main()
{
    using namespace std;
    double total1, choices1;
    double total2, choices2;
    cout << "在游戏卡上输入选择的总数，然后允许拾取的数量：\n 如47选5+27选1 则输入: 47 5 27 1\n";
    while ((cin >> total1 >> choices1>> total2 >> choices2) && choices1 <= total1
			&& choices2 <= total2)
    {
        cout << "您的获奖几率为： ";
        cout << probability(total1, choices1, total2, choices2);      // compute the odds
        cout << " 分之一.\n";
        cout << "下一组两个数字为： (q to quit): ";
    }
    cout << "bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2)
{
    long double result1 = 1.0;  // here come some local variables
    long double result2 = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers1, p = picks1; p > 0; n--, p--)
        result1 = result1 * n / p ;     
	for (n = numbers2, p = picks2; p > 0; n--, p--)
        result2 = result2 * n / p ; 
    return result1 * result2;
}
