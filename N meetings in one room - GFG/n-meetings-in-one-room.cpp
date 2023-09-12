//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    // static bool pairCompare(const pair<pair<int, int>, int> &a,
    //                  const pair<pair<int, int>, int> &b) 
    // {
    //     if (a.first.second != b.first.second) {
    //         return a.first.second < b.first.second;
    //     }
    //     return a.second < b.second;
    // }
    static bool comp(pair<pair<int,int>,int>&a,pair<pair<int,int>,int>&b){
        if(a.first.second<b.first.second)return true;
        else if(a.first.second>b.first.second)return false;
        else if(a.second<b.second)return true;
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<pair<int,int>,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({{start[i],end[i]},i+1});
        }
        sort(v.begin(),v.end(),comp);
        int temp=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(v[i].first.first>temp){
                cnt++;
                temp=v[i].first.second;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends