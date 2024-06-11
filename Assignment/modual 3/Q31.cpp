//WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>

struct studentdata {
    int rollno;
    char name[15];
    int age;
    char subject[10];
}st;

main(){

    st.rollno=1;
    strcpy(st.name,"keval");
    st.age=20;
    strcpy(st.subject,"b.a");
    
    printf("%d\n",st.rollno);
    printf("%s\n",st.name);
    printf("%d\n",st.age);
    printf("%s\n",st.subject);
}


