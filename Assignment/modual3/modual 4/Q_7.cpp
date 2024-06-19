//Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.
#include <iostream>
using namespace std;
class calc
{
	public:
		calc (int a,int b)
		{
			cout<<"\nadd:"<<a+b;
			cout<<"\nsun:"<<a-b;
			cout<<"\nmul:"<<a*b;
			cout<<"\ndiv:"<<a/b;
		}
};
main()
{
	calc c(34,25);
}


