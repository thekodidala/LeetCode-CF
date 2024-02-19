class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>arr;
        for(int i=1;i<n;i++){
            fact=fact*i;
            arr.push_back(i);
        }
        arr.push_back(n);
        k--;
        string str="";
        while(true){
            str+=to_string(arr[k/fact]);
            int num=k/fact;
            arr.erase(arr.begin()+num);
            if(arr.size()==0)break;
            k=k%fact;
            fact/=arr.size();
        }
        return str;
    }
};