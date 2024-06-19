//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the marks
//obtained in two subjects and class result contains the total marks obtained in
//the test. The class result can inherit the details of the marks obtained in the
//test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		
		void getstudent(){
	
		cout<<"enter age :";
		cin>>rollno;
	
		}
};
class test:public student
{
	public:
	string s1,s2;
	
		void gettest()
		{
			cout<<"enter  subject1 mark:";
			cin>>s1;
				cout<<"enter  subject2 mark:";	
			cin>>s2;
			
			
			
		}
};
class result:public test
{
	public:
	    int totalmark;

        void result() 
		{
            totalmark = s1 + s2;
        
            cout << "\nRoll Number: " << rollno;
            cout << "\nmarks in subject 1: " << s1;
            cout << "\nmarks in subject 2: " << s2;
            cout << "\ntotalmark: "<<totalMarks << "\n";
        }
};

main()
{
result rs;
rs.getstudent();
rs.gettest();
rs.result();

	
}

