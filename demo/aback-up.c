#include<stdio.h>

int main(void)
{
    int M,N;
    scanf("%d%d",&M,&N);
    char vis[300000];
    int now = 0 ; 
    for(int i = 1 ; i <= M ; i++ )
    {
        for (int j = 1 ; j <= N ; j++ )
        {
            if ( ++ now > M ) now = 1;
            if ( vis[now] ) j--;
        }
        
        vis[now] = 1 ; 
    }
    printf("%6d",now);
    return 0;
}	

