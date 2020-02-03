#include<stdio.h>

int main(){
    int T=10;
    int ara[10], a[10];
    int i,j,k;

    while(T--){
        k=1;
        for(i=0;i<10;i++){
            scanf("%d",&ara[i]);
            a[i] = ara[i]%42;
        }
        for(i=0;i<9;i++){
            for(j=i+1;j<10;j++){
                if(a[i] > a[j]){
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }
        for(i=0;i<9;i++){
            if(a[i] == a[i+1]) continue;
            else k++;
        }
        printf("%d\n",k);
    }
    return 0;
}
