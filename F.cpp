#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int A[m],B[n];
    int i;
    for(i=0; i<m; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&B[i]);
    }
    int x,d,o=1;
    for(x=0; x<n-m+1; x++)
    {
        for(d=1; x+(m-1)*d<n; d++)
        {
            int pd=A[0]-B[x];
            o=1;
            for(i=0; i<m; i++)
            {
                if(pd!=A[i]-B[x+i*d])
                {
                    o=0;
                    break;
                }
            }
            if(o==1)
            {
                break;
            }
        }
        if(o==1)
        {
            break;
        }
    }
    if(o==1)
    {
        printf("I can see you\'re working very hard.\n");
    }
    else
    {
        printf("Please do all that you can.\n");
    }
    return 0;
}
