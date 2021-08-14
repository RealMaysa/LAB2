#include<stdio.h>
int main(){
int n,b;
printf("Enter first number: ");
scanf("%d", &n);
printf( "Enter second number: ");
scanf("%d", &b);
int gcd(int n, int b){
int min=n<b?n:b;
for(int i= min;i>=1;i--){
        if(n%i==0 && b%i==0){
              return i;  
        }
        
    }}printf("Greatest common divisor: %d\n",gcd(n,b));
   return 0;  
}

