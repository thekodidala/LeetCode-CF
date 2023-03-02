#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long t;
    cin>>t;
    long sum1=0,sum2=0;
    for(long i=0;i<t;i++){
        int n;cin>>n;
        sum1=0;
        sum2=0;
        sum1=pow((n*(n+1)/2),2);
        sum2=(n*(n+1)/2);
        sum2=pow(sum2,3);
        cout<<abs(sum1-sum2)<<"\n";
    }
    return 0;
}