//Solution in C Language.

#include <stdio.h>
int main(){
    int t, cs = 0;
    scanf("%d", &t);
    while(t--){
        int n, k, ans = 0;
        scanf("%d %d", &n, &k);
        while(n--){
            int reg;
            scanf("%d", &reg);
            ans += (reg % k);
        }
        printf("Case %d: %d\n", ++cs, ans);
    }
    
    return 0;
}
