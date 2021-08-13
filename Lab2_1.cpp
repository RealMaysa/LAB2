#include<iostream>
using namespace std;
#include<conio.h>
int main(){
cout<<"ENTER THE NUMBER: ";
int ct=0;
int n;
int d=2;
cin>>n;
cout<< "FATORING RESULT: ";
while( n!= 1){ 
 while(n%d==0){
     ct++;
     if(ct==1) 
     cout<<d;
     else 
     cout<<"x"<<d;
        n/=d;
        
} d++;
}

    return 0;
}