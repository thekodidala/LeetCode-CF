class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>v(arr.size());
        v=arr;
        reverse(v.begin(),v.end());
        int count=0,total=0;
        int res=arr[1]-arr[0],res1=v[1]-v[0];
        for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[i-1]==res){
                count++;
            }
            if(v[i]-v[i-1]==res1){total++;}
        }
        if(count+2==arr.size() || total+2==arr.size()){return true;}
        return false;
    }
};