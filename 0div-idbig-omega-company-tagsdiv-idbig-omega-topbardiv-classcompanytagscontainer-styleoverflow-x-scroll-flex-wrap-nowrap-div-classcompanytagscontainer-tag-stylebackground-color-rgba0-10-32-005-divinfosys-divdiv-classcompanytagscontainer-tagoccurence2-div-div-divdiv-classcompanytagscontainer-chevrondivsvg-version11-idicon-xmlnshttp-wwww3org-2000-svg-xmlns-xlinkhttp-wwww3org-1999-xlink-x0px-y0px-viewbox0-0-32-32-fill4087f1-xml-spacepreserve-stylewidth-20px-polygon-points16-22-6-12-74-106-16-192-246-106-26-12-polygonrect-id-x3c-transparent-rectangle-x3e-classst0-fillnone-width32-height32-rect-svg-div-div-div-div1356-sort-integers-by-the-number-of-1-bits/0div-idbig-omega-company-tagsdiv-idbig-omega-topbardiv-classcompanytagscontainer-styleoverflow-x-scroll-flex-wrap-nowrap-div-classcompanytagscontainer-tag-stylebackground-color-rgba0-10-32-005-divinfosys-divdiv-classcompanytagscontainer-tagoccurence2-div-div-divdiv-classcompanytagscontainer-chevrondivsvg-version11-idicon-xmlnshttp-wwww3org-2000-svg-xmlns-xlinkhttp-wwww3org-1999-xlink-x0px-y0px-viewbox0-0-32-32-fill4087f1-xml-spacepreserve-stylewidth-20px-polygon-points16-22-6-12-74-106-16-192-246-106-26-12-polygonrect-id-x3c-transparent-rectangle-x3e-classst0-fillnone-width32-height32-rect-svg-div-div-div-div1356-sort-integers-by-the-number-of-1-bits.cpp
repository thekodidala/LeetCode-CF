class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    //     unordered_map<int,int>mp;
    //     for(int i=0;i<arr.size();i++){
    //         int n=arr[i];
    //         int cnt=0;
    //         while(n>1){
    //             n/=2;
    //             cnt+=1;
    //         }
    //         if(n==1){
    //             cnt+=1;
    //         }
    //         mp
    //     }
    // }
        int n=arr.size();
        sort(arr.begin(),arr.end(),[](int a,int b){
            int pa=__builtin_popcount(a),pb=__builtin_popcount(b);
            return (pa==pb)?a<b:pa<pb;
        });
        return arr;}
};