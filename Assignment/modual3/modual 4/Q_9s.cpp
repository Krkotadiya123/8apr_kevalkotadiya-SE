//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Displaydata(Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer
{
	
};
class batsman:public cricketer
{
	public:
	int run,bestperformance,totalmatches;
	float averagerun;
	void getdata()
	{
		cout<<"enter total run:";
		cin>>run;
		cout<<"enter bestperformance:";
		cin>>bestperformance;
		cout<<"enter total matches:";
		cin>>totalmatches;
		
	}
	 
	 void calculateaveragerun()
	 {
	 	averagerun=run/totalmatches;
	 	
	 }
	 void Displaydata()
	 {
	 	cout<<"total run:"<<run<<"\n";
	 	cout<<"averagerun"<<averagerun<<"\n";
	 	cout<<"bestperformance"<<bestperformance<<"\n";
	 	
	 }
	
	
};
main()
{
	batsman bm;
	bm.getdata();
	bm.calculateaveragerun();
	bm.Displaydata();
}
