#include <cstdio>
using namespace std;

#define ll long long int

ll numdiv(ll num){
	 ll ans = 1, kount = 0;
   while(num % 2 == 0){
         kount++;
         num /= 2;        
	 }
   if(kount != 0)ans *= (kount+1);

   for(ll i = 3; i*i <= num; i += 2){
          if(num % i == 0){ 
            kount = 0;
            while(num%i == 0){
                kount++;
                num /= i;
					  }
            ans *= (kount+1);
          }
          if(num == 1) break;
		}
    if(num != 1) ans *= 2;
    ans --;
    return ans;
}

int main(){
		ll test;
    scanf("%lld", &test);
    ll tc = 0;
     hile(test--){
        ll num;
        scanf("%lld", &num);
        ll ans = numdiv(num);
        printf("Case %lld: %lld\n", ++tc, ans);
    }
}
