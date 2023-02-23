#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxi,mini;
    int a_max=0,a_min=101;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>a_max){
            a_max=a[i];
            maxi=i;
        }
        if(a[i]<=a_min){
            a_min=a[i];
            mini=i;
        }
    }
    if(maxi>mini){
       mini++;
    }
    cout<<maxi+(n-1)-mini<<endl;

    return 0;
}
