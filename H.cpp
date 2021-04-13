///time complexity : O(t*(n+q))
///space complexity: O(n)
#include <stdio.h>
int main(){
    int cases=0,test;
    scanf("%d",&test);
    while(cases++!=test){
        char ch[100005];
        int n,i,cnt[30];
        scanf("%d%s",&n,ch);
        for(i=0;i<26;i++)cnt[i]=0;
        for(i=0;i<n;i++){
            cnt[ch[i]-'a']++;
        }
        int q;
        scanf("%d",&q);
        printf("Case %d:\n",cases);
        while(q--){
            int j;
            char c;
            scanf("%d %c",&j,&c);
            cnt[ch[j-1]-'a']--;
            ch[j-1]=c;
            cnt[c-'a']++;
            int flag=0;
            int ans=0;
            for(i=0;i<=25;i++){
                if(cnt[i]%2==1){
                    flag=1;
                    ans+=cnt[i]-1;
                }
                else ans+=cnt[i];
            }
            if(flag==1){
                ans++;
            }
            printf("%d\n",ans);
        }
    }
}



