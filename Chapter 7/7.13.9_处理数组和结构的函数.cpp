/*********************************************************************
    程序名: 9． 这个练习让您编写处理数组和结构的函数。 下面是程序的框
架， 请提供其中描述的函数， 以完成该程序。
    版权:
    作者: 大野狼
    日期: 2022/4/20-星期三 10:50:21
    说明:
*********************************************************************/
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// 两个参数，一个数组起始元素的指针，一个容量 ，并返回实际学生的数量 
int getinfo(student pa[], int n)
{
	int i=0;
	for(;i<n;++i)
	{
		cout << "输入学生的信息 #" << i+1 << endl;
        cout << "输入全名 (空白行退出！): ";
		cin.getline(pa[i].fullname,SLEN);
//		if(pa[i].fullname == '\n') break;
		cout << "输入爱好 : ";
		cin.getline(pa[i].hobby,SLEN);
		cout << "输入年龄 : ";
		cin>>pa[i].ooplevel;
		cin.get();
//		while (cin.get() != '\n')
//        	continue;
	}
	return i;
}

// 一个参数 显示学生目录 
void display1(student st)
{
	cout<<"display1(ptr_stu[i]);\n";
	cout<<st.fullname<<" "<<st.hobby<<" "<<st.ooplevel<<endl;
}
void display2(const student *st)
{
	cout<<"display2(&ptr_stu[i]);\n";
	cout<<st->fullname<<" "<<st->hobby<<" "<<st->ooplevel<<endl;
}
void display3(const student pa[], int n)
{
	cout<<"display3(ptr_stu, entered);\n";
	for(int i=0;i<n;++i)
		cout<<pa[i].fullname<<" "<<pa[i].hobby<<" "<<pa[i].ooplevel<<endl;
}
void p7_9(void)
{
    cout << "输入学生的数量: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
//
    delete[] ptr_stu;
    cout << "Done.\n";
    return;
}
int main(void) {
	p7_9();
	return 0;
}
