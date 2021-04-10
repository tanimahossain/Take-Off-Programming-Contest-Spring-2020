#include<stdio.h>
#include<math.h>
int min(int a, int b){
    return a >= b? b : a;
}
int main( ){
    int n, m, five = 0, two = 0, x;
    scanf("%d %d", &n, &m);
    while(n--){
        scanf("%d", &x);
        while(x % 2 == 0){
            x /= 2;
            ++two;
        }
        while(x % 5 == 0){
            x /= 5;
            ++five;
        }
    }
    while(m--){
        scanf("%d", &x);
        while(x % 2 == 0){
            x /= 2;
            --two;
        }
        while(x % 5 == 0){
            x /= 5;
            --five;
        }
    }
    printf("%d\n", min(five, two));
    return 0;
}
