#include <stdio.h>

 int gcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a; 
        a = temp;
    }
    return 0;
 }

int lcm(int a, int b) {
    return(a * b) / gcd(a, b);
}

int main(){
    int a, b;

    printf(":");
    scanf("&d, &d", &a, &b);

    printf("NOK: ", a, b, lcm(a,b));
    
    return 0;
}