#include<stdio.h>

int main(){
    int N, Q, start, end,i;
    long long csum = 0,result;
    scanf("%d",&N);
    long long int ara[N];
    for(i=0;i<N;i++){
            scanf("%lld",&ara[i]);
            csum = csum + ara[i];
            ara[i] = csum;
    }
    scanf("%d",&Q);
    while(Q--){
        scanf("%d %d",&start,&end);
        if(start == 0 && end == 0) printf("%lld\n",ara[0]);
        else if (start == 0) printf("%lld\n",ara[end]);
        else {
            result = ara[end] - ara[start - 1];
            printf("%lld\n",result);
        }
    }
    return 0;
}
