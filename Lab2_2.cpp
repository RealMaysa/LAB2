#include<iostream>
using namespace std;
#include<conio.h>
int main(){
int n,b;
cout<<"Enter first number: ";
cin>>n;
cout<< "Enter second number: ";
cin>>b;
while( n!= b){ 
if(n>b){
        n=n-b; 
        }
else{
        b=b-n;
        }
        
}return n;
cout<< "Greatest common divisor: "<<n;
}

    