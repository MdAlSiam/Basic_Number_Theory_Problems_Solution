#include<stdio.h>

int main(){
    int T,N;
    long long int mp, n;
    scanf("%d",&T);

    while(T--){
        mp=1;
        scanf("%d",&N);
        while(N--){
            scanf("%lld",&n);
            mp = ((mp%1000000007)*(n%1000000007))%1000000007;
        }
        printf("%lld\n",mp);
    }

    return 0;
}
