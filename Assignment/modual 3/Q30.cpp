//Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
#include <stdio.h>
#include <string.h>
//Write a program of structure for five employee that provides 
struct studentdata {
    int no,i;
    char name[15];
    int age;
    char subject[10];
}st;

main(){

    st.no=11;
    strcpy(st.name,"keval");
    st.age=20;
    strcpy(st.subject,"b.a");
    
    printf("%d\n",st.no);
    printf("%s\n",st.name);
    printf("%d\n",st.age);
    printf("%s\n",st.subject);
}
	
	
	for(i=1;i<5;i++){
		
	printf("\nempoloyee %d =\n",st.i);
	printf("emp no. : %d",st.empno);
	printf("\nemp name : %s",st.name);
	printf("\nempn address : %s",st.add);
	printf("\nemp age : %d",st.age);
	printf("\n");
	
	}
}
