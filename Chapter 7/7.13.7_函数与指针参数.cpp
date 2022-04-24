/*********************************************************************
    程序名: 7． 修改程序清单7.7中的3个数组处理函数， 使之使用两个指针参
	数来表示区间。 fill_array( )函数不返回实际读取了多少个数字， 
	而是返回一个指针， 该指针指向最后被填充的位置； 其他的函数可以将该
	指针作为第二个参数， 以标识数据结尾。
    版权:
    作者: 大野狼
    日期: 2022/4/19-星期二 17:59:26
    说明:
*********************************************************************/
#include <iostream>
const int Max = 5;

// function prototypes
//int fill_array(double ar[], int limit);
//int fill_array(double *begin, double *end);
//void show_array(const double ar[], int n);  // don't change data
//void revalue(double r, double ar[], int n);
double * fill_array(double *begin, double *end);  //返回 最后元素的指针 
void show_array(double *begin, double *end);
void revalue(double *begin, double *end,double r);

int main()
{
    using namespace std;
    double properties[Max];
	double *pend;
//    int size = fill_array(properties, properties + Max);
//    int size = fill_array(properties, &properties[Max]+1);
//    show_array(properties, size);
    pend = fill_array(properties, properties + Max);
    show_array(properties, pend);
    if ((pend-properties) > 0)
    {
        cout << "输入一个系数 : ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "无效数据输入，请重新运行程序: ";
        }
//      revalue(factor, properties, size);
//      show_array(properties, size);
//		show_array(properties, properties + size);
        revalue(properties, pend,factor);
		show_array(properties, pend);
    }
    cout << "完成.\n";
    // cin.get();
    // cin.get();
    return 0;
}

//int fill_array(double ar[], int limit)
//int fill_array(double *begin, double *end)
double * fill_array(double *begin, double *end)
{
    using namespace std;
    double temp;
    int count=0;
    double * ptr = nullptr;
    for(ptr = begin; ptr < end; ptr++)
    {
        cout << "输入值 #" << (count + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "无效数据输入，请重新运行程序.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        *ptr = temp;
        ++count;
    }
    return ptr;
}

// the following function can use, but not alter,
// the array whose address is ar
//void show_array(const double ar[], int n)
void show_array(double *begin, double *end)
{
    using namespace std;
    int i=0;
    for(double * ptr  = begin; ptr < end; ptr++,i++)
//    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *ptr << endl;
    }
}

// multiplies each element of ar[] by r
//void revalue(double r, double ar[], int n)
void revalue(double *begin, double *end,double r)
{
//    for (int i = 0; i < n; i++)
    for(double * ptr  = begin; ptr < end; ptr++)
        (*ptr) *= r;
//        ar[i] *= r;
}
