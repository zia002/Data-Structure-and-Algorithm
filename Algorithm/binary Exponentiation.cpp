//-------------Recursive Method--------------//
long long binExp(long long a,long long b){
    if(b==0) return 1;
    long long res=binExp(a,b/2);
    if(b%2==0) return res*res;
    else return a*res*res;
}
//-------------Iterative Method---------------//
long long binModExpIterative(long long a,long long b){
    long long ans=1;
    while(b){
        if(b&1) ans=(ans*a)%M;
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
