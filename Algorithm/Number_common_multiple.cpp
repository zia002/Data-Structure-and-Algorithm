ll gcd(ll a, ll b) {
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
ll fcm(ll a, ll b, ll start, ll end) {
    ll LCM= lcm(a, b);
    ll multi_st= (start - 1) / LCM;
    ll multi_ed = end / LCM;
    return multi_ed - multi_st;
}
