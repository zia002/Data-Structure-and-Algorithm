#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//--------------------------------------------------------------------
vector<vector<int>>allans;
set<vector<int>>st;
void fun1(vector<int> arr,int n,vector<int>ans,int tmp[]){
    if(ans.size()==n){
        allans.pb(ans);
        return;
    }
    for(int i=0;i<n;i++){
        if(tmp[i]==0){
            ans.pb(arr[i]);
            tmp[i]=1;
            fun1(arr,n,ans,tmp);
            ans.pop_back();
            tmp[i]=0;
        }
    }
}
void fun2(vector<int>arr,int n,int idx){
    if(idx==n-1) return;
    for(int i=idx;i<n;i++){
        swap(arr[idx],arr[i]);
        st.insert(arr);
        fun2(arr,n,idx+1);
    }
    
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0) ;
    vector<int>arr={1,2,3};
    int idx=0,tmp[3]={0};
    vector<int>ans;
    fun1(arr,3,ans,tmp);
    fun2(arr,3,idx);
    cout<<"Function-1\n";
    for(auto it:allans){
        for(auto itt:it) cout<<itt<<" ";
        cout<<endl;
    }
    cout<<"Function-2\n";
    for(auto it:allans){
        for(auto itt:it) cout<<itt<<" ";
        cout<<endl;
    }
    return 0;
} 
