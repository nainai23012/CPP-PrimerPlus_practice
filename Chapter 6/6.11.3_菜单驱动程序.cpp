/*********************************************************************
    程序名: 3． 编写一个菜单驱动程序的雏形。 该程序显示一个提供4个选项的
		菜单——每个选项用一个字母标记。 如果用户使用有效选项之外的字母
		进行响应， 程序将提示用户输入一个有效的字母， 直到用户这样做为
		止。 然后， 该程序使用一条switch语句， 
		根据用户的选择执行一个简单操作。 该程序的运行情况如下：
    版权:
    作者: 大野狼
    日期: 2022/4/15-星期五 14:44:39
    说明:
*********************************************************************/
#include <iostream>
#include <cstdlib> // exit()
int main(void) {
	using namespace std;
	char choice;  //选项 
	bool flag = true;
	cout<<"请选择菜单\n";
	cout<<"****** 菜单 ******\n";
	cout<<"A:奥迪        B:奔驰     \n";
	cout<<"C:长城        D:大众     \n";
	cout<<"Q:退出                   \n";
	while(flag && cin>>choice)
	{
		switch(choice)
		{
		case 'a':
		case 'A':
            cout << "奥迪就是传说中的‘灯厂’" << endl;
            break;	
		case 'b':
		case 'B':
            cout << "奔驰是汽车的鼻祖" << endl;
            break;
		case 'c':
		case 'C':
            cout << "长城价廉物美" << endl;
            break;
		case 'd':
		case 'D':
            cout << "大众是德国品牌." << endl;
            break;
		case 'q':
		case 'Q':
			cout << "欢迎下次再来查询！" << endl;
            flag = false;
            break;
//            exit(EXIT_FAILURE);
        default:
            cout << "输入有误，请重新输入!" << endl;
            cin.clear();     // reset input
            while (cin.get() != '\n')
                continue; 
		}
	}
	
	return 0;
}

