#include<stdio.h>

int main(){
    // operaor
    //arithmetic operator
    int a = 6, b = 5;
    printf("sum is : %d \n", a +b);
    printf("subtract is : %d \n", a - b);
    
    //Relational operator
    printf("%d \n", a > b);
    printf("%d \n", a >= b);
    
    // logical operator
    printf("%d \n", 3 < 4 && 3<5);
    printf("%d \n", 3 > 4 && 3 < 5);
    
    // assignment operator
    int d = 10;
    d += 10;
    printf("d+10 = %d \n", d);
    
    d *= 10;
    printf("d*10= %d \n", d);
    
    
    
    
}
