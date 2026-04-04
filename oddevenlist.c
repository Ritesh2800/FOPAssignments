#include<stdio.h>

int main(){
int n,i;

printf("Enter Number of Elements: ");
scanf("%d",&n);

int e=0,o=0;
int arr[n],even[n],odd[n];

printf("Enter %d Elements: ",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);

if(arr[i]%2==0){
even[e++]=arr[i];
} else
odd[o++]=arr[i];
}

printf("\nEven Numbers:\n");
for(i=0;i<e;i++){
printf("%d\n",even[i]);
}

printf("\nOdd Numbers:\n");
for(i=0;i<o;i++){
printf("%d\n",odd[i]);
}
return 0;
}
