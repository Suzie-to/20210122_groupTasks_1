#include <stdio.h>
int main(){
    float c, f;
    printf("Celsius \tFahrenheit\n");
    for(c=-50;c<=150;c+=5){
        f=c*9/5+32;
        printf("%.2f\t\t%.2f\n",c,f);
    }
    return 0;
}