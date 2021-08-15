#include<stdio.h>
int main(){
float w=0,h=0,bmi;
printf("Your weight (kg):");
scanf("%f",&w);
printf("Your height (m):");
scanf("%f",&h);
bmi=w/(h*h);
printf("Your BMI:%f\n",bmi);
if(bmi<18.5){
    printf("Underweight\n");
}
else if (bmi<=24.9 && bmi>=18.5){
    printf("Normal\n");
}
else if(bmi<=29.9 && bmi>=25.0){
    printf("Overweight\n");
}9
else if(bmi>=30){
    printf("Obese\n");
}









    return 0;
}