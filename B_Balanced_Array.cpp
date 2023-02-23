#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
    while(t--) {
        int num, sum1 = 0, sum2 = 0,res;
        cin >> num;
        res=num/2;
        if(res % 2 != 0) {
            cout<<"NO"<< endl;    
        }
        else {
            cout << "YES" << endl;
            for(int i=2; i<num+2; i=i+2) {
                cout<<i<< " ";
                sum1+= i;
            }
            for(int j=1;j<num-1;j=j+2) {
                cout<<j<<" ";
                sum2 += j;
            }
            cout << sum1 - sum2 << endl;
        }
    }
}