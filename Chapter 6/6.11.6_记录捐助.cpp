/*********************************************************************
    程序名: 6． 编写一个程序， 记录捐助给“维护合法权利团体”的资金。 该程
		序要求用户输入捐献者数目， 然后要求用户输入每一个捐献者的姓名和
		款项。 这些信息被储存在一个动态分配的结构数组中。 每个结构有两个
		成员： 用来储存姓名的字符数组（或string对象） 和用来存储款项的
		double成员。 读取所有的数据后， 程序将显示所有捐款超过10000的捐
		款者的姓名及其捐款数额。 该列表前应包含一个标题， 指出下面的捐款
		者是重要捐款人（Grand Patrons） 。 然后， 程序将列出其他的捐款者，
		该列表要以Patrons开头。 如果某种类别没有捐款者， 则程序将打印单
		词“none”。 该程序只显示这两种类别， 而不进行排序。
    版权:
    作者: 大野狼 
    日期: 2022/4/15-星期五 17:35:59
    说明:
*********************************************************************/
#include <iostream>
#include <string>
struct donation{
	std::string name;
	double money;
};
int main(void) {
	using namespace std;
	int num;  // 捐助人数
	cout<<"请输入捐助者的人数：";
	cin>>num;
	cin.get();
	// 分配了空间
	donation *strdon = new donation[num];   //全部捐款人 
	donation *strdonl = new donation[num];  //重要捐款人 
	donation *strdons = new donation[num];  //一般捐款人 
//	donation strdon[num];  //创建结构体数组
//	donation strdonl[num];  //>10000  Grand Patrons
//	donation strdons[num];  //Patrons
	int l=0,s=0;
	// 分批写入数据 
	for(int i=0;i<num;++i)
	{
		cout<<"请输入第"<<i+1<<"个人员的信息\n姓名：";
		getline(cin,strdon[i].name);
		cout<<"捐助额：";
		cin>> strdon[i].money;
		cin.get();
		if(strdon[i].money>10000)
		{
			strdonl[l].money = strdon[i].money;
			strdonl[l].name	= strdon[i].name;
			++l;
		}
		else
		{
			strdons[s].money = strdon[i].money;
			strdons[s].name	= strdon[i].name;
			++s;
		}
	}
	// 输出信息 
	cout<<"\n重要捐款人（Grand Patrons）\n";
	if(l>0)
	{
		for(int i=0;i<l;++i)
		cout<<strdonl[i].name<<" : "<<strdonl[i].money<<endl;
	}
	else
		cout<<"none\n";
		
	cout<<"\n其他捐款人（Patrons）\n";
	if(s>0)
	{
		for(int i=0;i<s;++i)
		cout<<strdons[i].name<<" : "<<strdons[i].money<<endl;
	}
	else
		cout<<"none\n";
	// 释放空间
	delete [] strdon; 
	delete [] strdonl; 
	delete [] strdons; 
	return 0;
}

