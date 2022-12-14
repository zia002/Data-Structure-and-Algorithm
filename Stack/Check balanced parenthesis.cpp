#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,b=1;
    int n=s.size();
    stack<char>st;
    for(i=0; i<n; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.empty())
            {
                cout<<"NO";
                b=0;
                break;
            }
            else if(st.top()=='(')
            {
                st.pop();
            }
            else
            {
                cout<<"NO";
                b=0;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(st.empty())
            {
                cout<<"NO";
                b=0;
                break;
            }
            else if(st.top()=='{')
            {
                st.pop();
            }
            else
            {
                cout<<"NO";
                b=0;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(st.empty())
            {
                cout<<"NO";
                b=0;
                break;
            }
            else if(st.top()=='[')
            {
                st.pop();
            }
            else
            {
                cout<<"NO";
                b=0;
                break;
            }
        }
    }
    if(b!=0)
    {
        cout<<"YES";
    }
    return 0;
}
