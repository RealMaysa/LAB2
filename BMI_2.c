#include<stdio.h>
int main(){
float w=0,h=0,bmi;
printf("Your weight (kg):");
scanf("%f",&w);
printf("Your height (cm):");
scanf("%f",&h);
h=h/100;
bmi=w/(h*h);
printf("Your BMI:%f\n",bmi);
int range_bmi;
if(bmi<18.5){
    range_bmi=1;
}
else if (bmi<=24.9){
   range_bmi=2;
}
else if(bmi<=29.9){
    range_bmi=3;
}
else{
   range_bmi=4;
}
switch(range_bmi){
    case 1:
    printf("Underweight\n");
    break;
    case 2:
    printf("Normal\n");
    break;
    case 3:
    printf("Overweight\n");
    break;
    case 4:
   printf("Obese\n");
    break;
}return 0;
}