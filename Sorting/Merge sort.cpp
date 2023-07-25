#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void mrg(vector<int> &v,int l,int mid,int r){
    int left=l,right=mid+1;
    vector<int>tmp;
    while(left<=mid && right<=r){
        if(v[left]<=v[right]){
           tmp.pb(v[left]);
           left++;
        }
        else if(v[left]>v[right]){
            tmp.pb(v[right]);
            right++;
        }
    }
    while(left<=mid) tmp.pb(v[left]),++left;
    while(right<=r) tmp.pb(v[right]),++right;
    for(int k=l;k<=r;++k) v[k]=tmp[k-l];
}
void ms(vector<int> &v,int l,int r){
    int mid=(l+r)/2;
    if(l<r){
        ms(v,l,mid);
        ms(v,mid+1,r);
        mrg(v,l,mid,r);
    }
    else return;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0) ;
    vector<int>v={3,2,4,1,3,7,9,8,8,0};
    ms(v,0,v.size()-1);
    for(auto it:v) cout<<it<<" ";
    return 0;
}
