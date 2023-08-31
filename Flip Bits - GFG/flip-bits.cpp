//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int subarray(int a[],int n){
        int sum=0,maxi=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            maxi=max(sum,maxi);
            if(sum<0){sum=0;}
        }
        return maxi;
    }
    int maxOnes(int a[], int n)
    {
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){a[i]=1;}
            else{
                a[i]=-1;
                cnt++;
            }
        }
        int res=cnt+subarray(a,n);
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends