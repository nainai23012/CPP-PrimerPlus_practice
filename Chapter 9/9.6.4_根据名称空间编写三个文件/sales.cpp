// sales.cpp
#include "sales.h"
namespace SALES
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::setprecision;

//    const int QUARTERS = 4;
//    struct Sales
//    {
//        double sales[QUARTERS];
//        double average;
//        double max;
//        double min;
//    };
    void setSales(Sales & s, const double ar[], int n)
    {
    	double total=0;
    	double max=ar[0];
    	double min=ar[0];
    	for(int i=0;i<n;++i)
    	{
    		s.sales[i] = ar[i];
    		if(max<ar[i]) max = ar[i];
    		if(min>ar[i]) min = ar[i];
    		total += ar[i];
		}
		s.max = max;
		s.min = min;
		s.average = total/n;
	}
    
    void setSales(Sales & s)
    {
    	double total=0;
    	cout<<"请输入4组价格：";
    	for(int i=0;i<QUARTERS;++i)
    	{
    		cin>>s.sales[i];
    		if(i==0)
    		{
    			s.max = s.sales[0];
				s.min = s.sales[0];
			}
    		else
			{
				if(s.max<s.sales[i]) s.max = s.sales[i];
				if(s.min>s.sales[i]) s.min = s.sales[i];	
			}
    		total += s.sales[i];
    		cin.get();
		}
		s.average = total/QUARTERS;
		 
	}
    void showSales(const Sales & s)
	{
		cout<<"sales: "<<endl;
		for(int i=0;i<QUARTERS;++i)
		{
			cout<<s.sales[i]<<" ";
		}
//		cout<<setprecision(3)<<"\naverage: "<<s.average<<endl;
		cout<<"\naverage: "<<s.average<<endl;
		cout<<"max: "<<s.max<<endl;
		cout<<"min: "<<s.min<<endl;
	}   
}





