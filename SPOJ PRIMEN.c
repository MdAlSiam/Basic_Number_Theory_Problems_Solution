#include<stdio.h>
#include<math.h>

void sieve(int n, int primes[]){
    int i,j;
    for(i=0;i<=n;i++) primes[i] = 1;
    primes[0] = 0;
    primes[1] = 1;
    for(i=2;i<=sqrt(n);i++){
        for(j=i*i;j<=n;j+=i){
            primes[j] = 0;
        }
    }
}

int main(){
    int T,n,k;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);
        int ara[n+1];
        sieve(n,ara);
        for(k=0;k<=n;k++){
            if(ara[k] == 1) printf("%d\n",k);
        }
    }

    return 0;
}
