#include <bits/stdc++.h>
using namespace std;

int bin_search(int* ara, int lo, int hi, int element){
    if(lo > hi) return -1;
    int mid = lo + (hi - lo) / 2;
    if(ara[mid] == element){
        while(ara[mid] == element && mid >= 0) mid--;
        return ++mid;
    }
    if(ara[mid] < element){
        return bin_search(ara, mid+1, hi, element);
    }
    else{
        return bin_search(ara, lo, mid-1, element);
    }
}

int main(){
    int noe, noq;
    scanf("%d %d", &noe, &noq);

    int ara[noe+11];

    for(int i = 0; i < noe; i++)
        scanf("%d", ara+i);

    while(noq--){
        int element;
        scanf("%d", &element);
        int ans = bin_search(ara, 0, noe-1, element);
        printf("%d\n", ans);
    }
}
