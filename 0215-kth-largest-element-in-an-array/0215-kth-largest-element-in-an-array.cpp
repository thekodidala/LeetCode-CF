class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>n-k+1){
                pq.pop();
            }
        }
        
        // while(pq.size()>n-k+1){
        //     pq.pop();
        // }
        return pq.top();
        
    }
};