#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t,r,res=0;
    cin>>t>>r;
    int i=1;
    for(;i<=10000;i++){
        res+=t;
        if(res%10==r || res%10 == 0){
            break;
        }
    }
    cout<<i;
}
