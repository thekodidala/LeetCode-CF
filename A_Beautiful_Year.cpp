#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    int year;
    for(int i=t+1;i<10000;i++){
        int a,b,c,d;
        a=i/1000;
        b=i/100 %10;
        c=i/10 %10;
        d=i%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            year=i;
            break;
        }
    }
    cout<<year<<endl;
}
