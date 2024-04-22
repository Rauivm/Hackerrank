#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int aux, sum = 0;
    for(int i = 0;i<5;i++)
    {
        aux = n/(pow(10,i));
        sum = sum+(aux%10);
    }
    printf("%d",sum);
    return 0;
}
