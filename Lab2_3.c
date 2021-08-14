#include<stdio.h>
int main(){
int x;
printf("Enter number:");
scanf("%d", &x);
int i,j;
for(i=1;i<=x;i++){
    for(j=1;j<=x;j++){
        if(i==1||j==1||i==x||j==x){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}  return 0;
}


    