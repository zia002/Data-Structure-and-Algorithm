#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//--------------------------------------------------------------------
bool safe(int col,int row,vector<string>&v,int n){
    int i,j;
    //check row
    for(i=0;i<col;i++) if(v[row][i]=='Q') return 0;
    // //check col
    for(i=0;i<row;i++) if(v[i][col]=='Q') return 0;
    //S.diagonal traversal
    for(i=row,j=col;i>=0 && j>=0 ;--i,--j) if(v[i][j]=='Q') return 0;
    //M.diagonal traversal
    for(i=row,j=col;i<=n && j>=0 ;++i,--j) if(v[i][j]=='Q') return 0;
    return 1;
}
void queen(vector<vector<string>>&ans,vector<string>&v,int col,int n){
    if(col==n){
        ans.pb(v);
        return;
    }
    for(int row=0;row<n;row++){
        if(safe(col,row,v,n)){
            v[row][col]='Q';
            queen(ans,v,col+1,n);
            v[row][col]='.';
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0) ;
    int n,i,cnt=1;cin>>n;
    vector<vector<string>>ans;
    vector<string>v(n);
    string s(n,'.');
    for(i=0;i<n;i++) v[i]=s;
    queen(ans,v,0,n);
    for(auto it:ans){
        cout<<"Case:"<<(cnt++)<<endl;
        for(auto itt:it){
            cout<<itt<<endl;
        }
    }
    return 0;
} 
