#include<stdio.h>

int fact(int n){
if(n==0 || n==1){
return 1;
} else
return n * fact(n-1);
}

int factnr(int n){
int i,facto=1;
for(i=1;i<=n;i++){
facto = facto*i;
}
}

int main() {
int num,a;
printf("Enter a Number: ");
scanf("%d", &num);

if(num<0){
printf("Enter a Positive Number");
} else {
printf("Choose a method:\n1. Recursion\n2. Non-Recursion\n");
scanf("%d",&a);
switch(a){
case 1:
printf("Factorial of %d by Recursion: %d",num,fact(num));
break;
case 2:
printf("Factorial of %d by Non-Recursion: %d",num,factnr(num));
break;
default:
printf("Invalid Choice!!");
}
}
return 0;
}


