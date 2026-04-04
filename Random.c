#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int num;

srand(time(0));

num=rand();
printf("%d",num);

return 0;
}
