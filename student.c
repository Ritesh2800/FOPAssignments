#include<stdio.h>

struct Student {
int rn;
char name[50];
float marks[3];
float total;
float per;
};

int main(){

int n;
printf("Enter number of Students: ");
scanf("%d",&n);

struct Student s[n];
//input
for(int i=0;i<n;i++){
printf("-----STUDENT %d-----\n",i+1);

printf("Name: ");
scanf("%s",s[i].name);

printf("Roll No.: ");
scanf("%d",&s[i].rn);

printf("Marks in 3 Subjects: ");
s[i].total =0;
for(int j=0;j<3;j++){
scanf("%f",&s[i].marks[j]);
s[i].total += s[i].marks[j];
}
s[i].per = (s[i].total/300)*100;
}
//output
printf("\n-----RESULT-----\n");
for(int i=0;i<n;i++){
printf("\nName: %s\n", s[i].name);
printf("Roll No.: %d\n", s[i].rn);
printf("Total Marks: %.0f\n",s[i].total);
printf("Percentage: %.2f \n",s[i].per);
}
return 0;
}
