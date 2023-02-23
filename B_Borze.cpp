#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string t;
    cin>>t;
    for(int i=0;i<t.size();i++){
        if(t[i]=='.'){cout<<0;}
        else if(t[i]=='-' && t[i+1]=='.'){i++;cout<<1;}
        else{i++;cout<<2;}

    }

}
