class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size(),n2=arr2.size();
        map<int,int>mp;
        for(int i=0;i<n1;i++){
            mp[arr1[i]]++;//frequency
        }
         vector<int>res;
        for(int i=0;i<n2;i++){
            for(int j=0;j<mp[arr2[i]];j++){
                res.push_back(arr2[i]);
            }
            mp[arr2[i]]=0;
        }
        for(int i=0;i<1001;i++)
            for(int j=0;j<mp[i];j++)
                res.push_back(i);
        return res;
    }
};