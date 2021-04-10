#include <stdio.h>

int ar[1000005], tmp[1000005];
long long int cnt = 0;

void solve(int lo, int hi){
    if(lo == hi)return;
    int mid = (lo + hi) / 2;    

    solve(lo, mid);
    solve(mid + 1, hi);
    
    long long int x = 0;
    
    for(int i = lo, j = mid + 1, k = lo; k <= hi;) {
        if(i == mid + 1) tmp[k++] = ar[j++];
        else if(j == hi + 1) {
            tmp[k++] = ar[i++];
            cnt += x; 
        }
        else if(ar[i] > ar[j]){
            tmp[k++] = ar[j++];
            x++;
        }
        else{ 
            tmp[k++] = ar[i++];
            cnt+=x;
        }
    } 
    for(int i = lo; i <= hi; i++) ar[i] = tmp[i];
}


int main() {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &ar[i]);

    solve(0, n - 1);
    printf("%lld %d\n", cnt, ar[n/2]);

    return 0;
}
