7.12 复习题
1． 使用函数的3个步骤是什么？
	函数原型 函数定义 函数调用。
	
2． 请创建与下面的描述匹配的函数原型。
a． igor( )没有参数， 且没有返回值。
	void igor(void);
b． tofu( )接受一个int参数， 并返回一个float。
	float tofu(int value);
c． mpg( )接受两个double参数， 并返回一个double。
	double mpg(double value1,double value2);
d． summation( )将long数组名和数组长度作为参数， 并返回一个long值。
	long summation(long arr[],int size);
e． doctor( )接受一个字符串参数（不能修改该字符串） ， 并返回一个double值。
	double doctor(const char *str];
f． ofcourse( )将boss结构作为参数， 不返回值。
	void ofcourse(boss mpg);
g． plot( )将map结构的指针作为参数， 并返回一个字符串。
	char * plot(map * mpg);

3． 编写一个接受3个参数的函数：int数组名、数组长度和一个int值，
并将数组的所有元素都设置为该int值。
	void fun(int arr[],int size, int value)
	{
		for(int i=0;i<size;++i)
			arr[i]=value;
	}

4． 编写一个接受3个参数的函数： 指向数组区间中第一个元素的指
针、 指向数组区间最后一个元素后面的指针以及一个int值， 并将数组中
的每个元素都设置为该int值。
	void fun(int * begin,int * end,int value);
		for(int a=begin;a!=end;++a)
			*a = value // 与答案不一致
5． 编写将double数组名和数组长度作为参数， 并返回该数组中最大值的函数。该函数不应修改数组的内容。	
	double fun(const double arr[], int size)
	{
		double = max;
		max = arr[0];
		for(int i=1;i<size;++i)
			(arr[i]>max)?(max = arr[i]):;
	}
6． 为什么不对类型为基本类型的函数参数使用const限定符？
	将const限定符用于指针，以防止指向的原始数据被修改。 程序传递基本类型（如int或double）时，它将按值传递， 以便函数使用副本。 这样， 原始数据将得到保护。

7． C++程序可使用哪3种C-风格字符串格式？
	char * str ; char str[] ; "somestrs" ;string str;  
8． 编写一个函数， 其原型如下：
	int replace(char *str, char c1, char c2);
该函数将字符串中所有的c1都替换为c2， 并返回替换次数。
	int replace(char *str, char c1, char c2)
	{
		int count=0;
		char ch;
		while(*str)
		{
		if(*str == C1){			
			*str = c2;
			++count;}
		++str;
		}
		return count;
	}
	
9． 表达式*"pizza"的含义是什么？ "taco" [2]呢？
	由于C++将“pizza”解释为其第一个元素的地址， 因此使用*运算
符将得到第一个元素的值， 即字符p。 由于C++将“taco”解释为第一个元
素的地址， 因此它将“taco”[2]解释为第二个元素的值， 即字符c。 换句话
来说， 字符串常量的行为与数组名相同。
	
10． C++允许按值传递结构， 也允许传递结构的地址。 如果glitz是
一个结构变量， 如何按值传递它？ 如何传递它的地址？ 这两种方法有何
利弊？
	fun(glitz);  void fun(glitz gmp);  //按值传递它， 只要传递结构名glitz即可
	fun(&glitz);  void fun(glitz * gmp);
	
11． 函数judge( )的返回类型为int， 它将这样一个函数的地址作为参
数： 将const char指针作为参数， 并返回一个int值。 请编写judge( )函数
的原型。
	int fun(const char* ); //int *pf(const char* )
	答： int judge(int *pf(const char* ));
	
12． 假设有如下结构声明：
	struct applicant{
		char name[30];
		int credit_ratings[3];
	};
a． 编写一个函数， 它将application结构作为参数， 并显示该结构的
内容。
	void fun(applicant mpg)
	{
		cout<<mpg.name<<endl;
		for(int i=0;i<3;++i)
			cout<<mpg.credit_ratings[i];
		cout<<endl;
	}
	
b． 编写一个函数， 它将application结构的地址作为参数， 并显示该
参数指向的结构的内容。
	void fun(applicant *mpg)
	{
		cout<<mpg->name<<endl;
		for(int i;i<3;++i)
			cout<<mpg->credit_ratings[i];
		cout<<endl;
	}

13． 假设函数f1()和f2()的原型如下：
	void f1(applicant *a);
	const char *f2(const applicant *a1, const applicant *a2);
请将p1和p2分别声明为指向f1和f2的指针； 将ap声明为一个数组，
它包含5个类型与p1相同的指针； 将pa声明为一个指针， 它指向的数组
包含10个类型与p2相同的指针。 使用typedef来帮助完成这项工作。
	typedef void (*p_f1)(applicant *a);
	p_f1 p1 = f1;
	typedef const char *(*p_f2)(const applicant * , const applicant * );
	p_f2 p2 = f2;
	
	p_f1 ap[5];  //包含指针的数组
	p_f2 (*pa)[10];  // 包含10个类型与p2相同的指针
	
	
	
	
	