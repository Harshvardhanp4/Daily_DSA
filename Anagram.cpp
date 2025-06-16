#include<bits/stdc++.h>
using namespace std;



int main(){
        string s, t;
        cin>>s;
        cin>>t;

    if(s.size()!=t.size()){
        cout<<"NO!\n";


    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t)cout<<"Yes\n";
    else cout<<"NO!\n";

    return 0;
}