#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,res;
    int ans=123456789;
    cin>>n>>m>>a>>b;
    for(int i=0;i<=n;i++){
        int ab=(n-i+m-1)/m;
        res=i*a+ab*b;
        if(res<ans){
            ans=res;
        }
    }
    cout<<ans;
}