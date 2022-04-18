/*********************************************************************
    程序名: 完成编程练习6， 但从文件中读取所需的信息。 该文件的第一项
	应为捐款人数， 余下的内容应为成对的行。 在每一对中， 第一行为捐款
	人姓名， 第二行为捐款数额。 即该文件类似于下面：
    版权:
    作者: 大野狼
    日期: 2022/4/16-星期六 13:33:14
    说明:
*********************************************************************/
#include <iostream>
#include <string>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
struct donation{
	std::string name;
	double money;
};

int main(void) {
	using namespace std;
	int num;  // 捐助人数
	string FileName = "contributions.txt" ;
	ifstream inFile;
	inFile.open(FileName.c_str());
    inFile >> num;  // 读取第一行 人数 
    inFile.get();
	donation *strdon = new donation[num];   //全部捐款人 
	donation *strdonl = new donation[num];  //重要捐款人 
	donation *strdons = new donation[num];  //一般捐款人 
//	donation strdon[num];  //创建结构体数组
//	donation strdonl[num];  //>10000  Grand Patrons
//	donation strdons[num];  //Patrons
	int l=0,s=0;
	// 分批读取数据 
	for(int i=0;i<num;++i)
	{
//		cout<<"请输入第"<<i+1<<"个人员的信息\n姓名：";
		getline(inFile,strdon[i].name);
//		cout<<"捐助额：";
		inFile>> strdon[i].money;
		inFile.get();
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
