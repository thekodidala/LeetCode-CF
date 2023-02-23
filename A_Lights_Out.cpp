#include<bits/stdc++.h>
using namespace std;
int main(){
    int t[5][5],p[5][5];
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>p[i][j];
            t[i][j]=p[i][j];
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(p[i][j]!=0){
                t[i][j-1]+=p[i][j];
                t[i][j+1]+=p[i][j];
                t[i-1][j]+=p[i][j];
                t[i+1][j]+=p[i][j];
            }
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(t[i][j]%2==0){cout<<1;}
            else{cout<<0;}
        }
        cout<<"\n";
    }

}