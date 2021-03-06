#include<stdio.h>
/*Напишете програма, която трябва да отпечата таблица за преобразуване от Целзий във Фаренхайт,
от -50 до +150 градуса по Целзий, на стъпки от 5 градуса. Температурата по целзий се изчислява по формулата 5 * (фаренхаит – 32)/9.*/
//C -> F table
// [-50:150]; i+5
//C = (F-32)/9 --> F = 32 + 9/5C
int main(){
    int C = -50;
    int F;
    
    printf("Celcius (F) to Fahrenheit (F) Conversion\n");
    while (C <= 150){
       F = 32 + (9/5*C);
       printf("\n%d C | %d F\n", C, F);
       C+=5; 
    }
}