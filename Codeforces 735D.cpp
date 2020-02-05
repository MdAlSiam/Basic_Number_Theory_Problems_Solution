#include <bits/stdc++.h>
using namespace std;

///Idea: https://codeforces.com/blog/entry/48659

bool isPrime(int n){
    if(n == 2 || n == 3) return true;

    int root = sqrt(n);

    for(int i = 2; i <= root; i++){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){

    int n;
    scanf("%d", &n);

    int ans;

    if(n == 2){
        ans = 1;
    }
    else if(isPrime(n)){
        ans = 1;
    }
    else if(n % 2 == 0){
        ans = 2;
    }
    else if(isPrime(n-2)){
        ans = 2;
    }
    else{
        ans = 3;
    }

    printf("%d\n", ans);

}
