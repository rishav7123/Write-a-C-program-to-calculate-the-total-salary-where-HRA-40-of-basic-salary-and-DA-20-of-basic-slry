// Write a ‘C’ program to calculate the total salary where HRA=40% of basic salary and DA=20% of basic salary.
#include<stdio.h>
int main(){
    float basic,hra,da,total;
    printf("Enter basic salary: ");
    scanf("%f",&basic);
    hra = (40.0/100.0)*basic;
    da = (20.0/100.0)*basic;

    total = basic + hra + da;
    printf("Total salary is: %.2f",total);

    return 0;
}