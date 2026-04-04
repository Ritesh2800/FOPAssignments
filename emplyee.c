#include<stdio.h>

struct Employee {
char name[50];
char desg[50];
char gender[2];
int doj[3];
float sal;
};
int tEmp(int n){
return n;
}

int genderC(struct Employee emp[],int n){
int m=0,f=0;
for(int i=0;i<n;i++) {
if(strcasecmp(emp[i].gender, "M")==0)
m++;
else if(strcasecmp(emp[i].gender, "F")==0)
f++;
}
printf("Male Employees: %d",m);
printf("Female Employees: %d",f);
}
