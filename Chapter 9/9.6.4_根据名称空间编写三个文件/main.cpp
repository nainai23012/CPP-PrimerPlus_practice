#include <iostream> 
#include "sales.h"
int main(void)
{
	SALES::Sales sales1={0};
	SALES::Sales sales2;
	double ar[] = {12.51, 18.9, 15.8, 16.6};
	SALES::setSales(sales1, ar, 4);
	SALES::showSales(sales1);
	SALES::setSales(sales2);
	SALES::showSales(sales2);
	return 0;
}
