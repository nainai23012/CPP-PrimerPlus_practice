/*********************************************************************
    程序名: 8． 编写一个程序， 它打开一个文件文件， 逐个字符地读取该文
		件， 直到到达文件末尾， 然后指出该文件中包含多少个字符。
    版权:
    作者: 大野狼
    日期: 2022/4/16-星期六 10:52:36
    说明:
*********************************************************************/
#include <iostream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
const int SIZE = 60;
int main()
{
    using namespace std;
//    cout << "Enter name of data file: ";
//    char filename[SIZE];
//    cin.getline(filename, SIZE);
	char filename[] = "sometext.txt";
    ifstream inFile;        // 建立输出对象 

    inFile.open(filename);  // 建立连接 
    if (!inFile.is_open())  // 判断是否路径有效 
    {
        cout << "无法打开文件： " << filename << endl;
        cout << "程序终止！\n";
        exit(EXIT_FAILURE);
    }
	char str;  //跳过非打印字符   每个字符 
//	char str[SIZE];  //跳过非打印字符  每个单词 
    int count = 0;          // 记数

    inFile >> str;        // 获取第一个元素 
    while (inFile.good())   // while input good and not at EOF
                            //当输入良好且不在EOF时
    {
        ++count;            // 自增
        inFile >> str;    // 获取下一个元素 
    }
    if (inFile.eof())
        cout << "已到达文件结尾.\n";
    else if (inFile.fail())
        cout << "输入因数据不匹配而终止.\n";
    else
        cout << "输入因未知原因终止.\n";
    cout<<"*****************************\n";
    if (count == 0)
        cout << "没有数据处理.\n";
    else
    {
        cout << "共计读取字符: " << count << endl;
    }
    inFile.close();         // 关闭文件对象 
    return 0;
}
