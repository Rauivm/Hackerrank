#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    if(a>d && a>c){
        if(a>b){
            return a;
        }
        return b;
    }
    else if(d>c && d>b){
        return d;
    }
    else if (c>b){
        return c;
    }
    else return b;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
