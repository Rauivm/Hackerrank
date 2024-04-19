#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int aux_and = 0;
  int aux_or = 0;
  int aux_x = 0;
  int and = 0;
  int or = 0;
  int x = 0;
  if(n>=2 && n<=1000 && k>= 2 && k<=n){
      for (int a = 1; a<=k;a++){
          for(int b = a+1; b<=n;b++)
          {
              and = a&b;
              or = a|b;
              x  = a^b;
              if(and>aux_and && and <k) aux_and = and;
              if(or < k && or > aux_or) aux_or = or;
              if(x < k && x>aux_x) aux_x = x;
          }
      }
  }
  printf("%d\n%d\n%d",aux_and,aux_or,aux_x);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
