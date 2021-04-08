#include<stdio.h>

long long a1,b1,a2,b2,a3,b3,MOD=1000000007;

void multiply(long long a[3][3], long long b[3][3]) { 
    long long mul[3][3]; 
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){ 
            mul[i][j] = 0; 
            for (int k = 0; k < 3; k++) 
                mul[i][j]=(mul[i][j]+(a[i][k]*b[k][j])%MOD)%MOD; 
        } 
    } 

    for (int i=0; i<3; i++) 
        for (int j=0; j<3; j++) 
            a[i][j] = mul[i][j]; 
}
long long power(long long F[3][3], long long n){ 
    
    long long M[3][3] = {{1,a1,b1}, {a2,1,b2}, {a3,b3,1}} ;
    if (n==1) 
        return (F[0][0] + F[0][1] + F[0][2])%MOD; 

    power(F, n/2);

    multiply(F, F);

    if (n%2 != 0) 
        multiply(F, M); 

    return (F[0][0] + F[0][1] + F[0][2])%MOD;

} 

long long findNthTerm(long long n){ 
  
    long long F[3][3] = {{1,a1,b1}, {a2,1,b2}, {a3,b3,1}} ; 

    if(n==0) 
        return 0; 
    if(n==1) 
        return (F[0][0] + F[0][1] + F[0][2])%MOD;
  
    return power(F, n); 

} 
int main(){
    int t,cases=0; scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a1,&b1,&a2,&b2,&a3,&b3,&n);
		printf("Case %d: %lld\n",++cases,findNthTerm(n));
    }
    return 0;
}
