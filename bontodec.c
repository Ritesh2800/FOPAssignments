#include<stdio.h>

int main(){
int bin,rem,base=1,dec=0;
printf("Enter Binary Number: ");
scanf("%d",&bin);

while(bin>0){
rem=bin%10;
dec+=rem*base;
base*=2;
bin/=10;
}
printf("%d",dec);
return 0;
}

