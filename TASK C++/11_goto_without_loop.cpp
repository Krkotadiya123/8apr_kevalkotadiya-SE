#include<iostream>
using namespace std;
main()
{
	int i=1;
	loop:
	cout<<"\n"<<i;
	i++;
	
	if(i<=10){
		goto loop;
	}
}
