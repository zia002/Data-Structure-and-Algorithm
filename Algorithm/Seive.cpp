#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
#define ll long long
#define pb push_back

//---------Prime__generating__using__sieve__algorithm-------//

vector<ll>v(N+1,1);
vector<ll>prime;
void sieve(vector<ll> &v,vector<ll> &prime){
    ll i,j;
    for(i=2;i<=N;i++){
        if(v[i]==1){
            prime.pb(i);
            for(j=2*i;j<=N;j+=i) v[j]=0;
        }
    }
}

//------------------O(nlog(log(n)))--------------------------//
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0) ;
    sieve(v,prime);
    return 0;
}
