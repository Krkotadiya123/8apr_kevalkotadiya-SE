
#include<iostream>
using namespace std;
struct studinfo{
	int id;
	int nm;
}st[5];
main(){
	int i,n;
	cout<<"enter  total  student";
	cin>>n;
	for(i=0;i<n;i++){
	
	cout<<"enter your id";
	cin>>st[i].id;
	cout<<"enter your nm";
	cin>>st[i].nm;
}
  for(i=0;i<n;i++){
	cout<<"\n id=",st[i].id;
	cout<<"\n nm=",st[i].nm;
}
}
