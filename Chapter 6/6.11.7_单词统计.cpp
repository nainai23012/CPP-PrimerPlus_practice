/*********************************************************************
    程序名: 7． 编写一个程序， 它每次读取一个单词， 直到用户只输入q。 然
	后， 该程序指出有多少个单词以元音打头， 有多少个单词以辅音打头，
	还有多少个单词不属于这两类。 为此， 方法之一是， 使用isalpha( )来区
	分以字母和其他字符打头的单词， 然后对于通过了isalpha( )测试的单
	词， 使用if或switch语句来确定哪些以元音打头。 该程序的运行情况如
	下：
    版权:
    作者: 大野狼
    日期: 2022/4/16-星期六 10:00:02
    说明:
*********************************************************************/
#include <iostream>
#include <cstring> 
int main(void) {
	using namespace std;
	unsigned int y_word=0,f_word=0,n_word=0;  // 元音 辅音 其他 单词的数量 
    char input[128];
    cout<<"输入一段话，统计用户输入了多少个单词	（到q|Q为止） "<<endl;
    while (cin >> input)
    {
        if (!(strcmp(input, "q")) || !(strcmp(input, "Q")))
        {
            break;
        }
        else
        {
        	char temp = input[0];
        	if(isalpha(temp)) //如果首字符是字母则运行 
        	{
        		switch(temp)
	        	{
	        		case 'a':
	        		case 'e':
	        		case 'i':
	        		case 'o':
	        		case 'u':
	        		case 'A':
	        		case 'E':
	        		case 'I':
	        		case 'O':
	        		case 'U':
	        			++y_word;break;  //元音单词 
	       			default:
	        			++f_word;
				} 
			}
			else  //非字母开头单词统计 
			{
				++n_word;
			} 

		}		
    }
    cout << "元音 辅音 其他单词的数量分别是： " << y_word << " ； " << f_word << " ； " <<n_word << endl;
	return 0;
}
