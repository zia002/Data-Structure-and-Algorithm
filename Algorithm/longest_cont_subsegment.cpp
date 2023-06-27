//element with maximum contiguous subsegment
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    map<int,int>m;
    int i,cnt=1,a[31]={4,1,2,3,3,3,3,2,2,1,1,1,1,1,2,2,2,2,2,1,1,5,5,5,4,4,3,4,4,4};
    for(i=0;i<30;i++){
        if(a[i]==a[i+1]){
            ++cnt;
            m[a[i]]=max(cnt,m[a[i]]);
        }
        else m[a[i]]=max(cnt,m[a[i]]),cnt=1;
    }
    for(auto it:m){
        cout<<"for "<<it.first<<"->Longest contiguous subsegment:"<<it.second<<endl;
    }
    return 0;
}
/*
for 1->Longest contiguous subsegment:5
for 2->Longest contiguous subsegment:5
for 3->Longest contiguous subsegment:4
for 4->Longest contiguous subsegment:3
for 5->Longest contiguous subsegment:3
*/
