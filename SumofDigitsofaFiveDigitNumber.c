#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number
int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int aux1 = n/10000;
    int aux2 = n/1000;
    int aux3 = n/100;
    int aux4 = n/10;
    int aux5 = n%10;
    aux1 = aux1%10;
    aux2 = aux2%10;
    aux3 = aux3%10;
    aux4 = aux4%10;
    aux5 = aux5%10;
    int aux6 = aux1+aux2+aux3+aux4+aux5;
    printf ("%d",aux6);
    return 0;
}
