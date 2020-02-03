#include <bits/stdc++.h>
using namespace std;

void printprimefactors(int n){
    int num = n;
    int root = sqrt(num);
    int ara[root+10];
    int index = 0;

    if(num % 2 == 0){
        ara[index++] = 2;
        while(num % 2 == 0) num /= 2;
    }

    for(int i = 3; i <= root; i += 2){
        if(num % i == 0){
            ara[index++] = i;
            while(num % i == 0){
                while(num % i == 0) num /= i;
            }
        }
        if(num == 1) break;
    }

    if(num != 1) ara[index++] = num;

    printf("%d:", n);
    for(int i = 0; i < index; i++)
        printf(" %d", ara[i]);
    printf("\n");
}

int main(){
    for(int i = 2; i <= 100000; i++){
        printprimefactors(i);
    }
}
