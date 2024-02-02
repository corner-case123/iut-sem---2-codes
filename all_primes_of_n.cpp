#include<bits/stdc++.h>
using namespace std ;
#define ll long long 

ll n ;
vector<vector<ll>> prime(n+1);

// TC : O(n* log(log(2)))
void sieve(){
    for(int i=2;i<=n;i++){
        if (prime[i].size() == 0){ // i is a prime
            for(int j=i;j<=n;j+=i){
                prime[j].push_back(i) ;
                // all its integral multiples will have prime factor i
            }
        }
        
    }
    return ;
}

int main(){
    ll n ; cin >> n ; 
    return  0 ;
}
