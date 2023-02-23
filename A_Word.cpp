#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0,n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            count++;
        }
    }
    if(count>=n-count){
        transform(s.begin(),s.end(),s.begin(),::tolower);        
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);     
    }
    cout<<s;
}