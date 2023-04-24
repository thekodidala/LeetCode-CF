class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int> pq(begin(v),end(v));//it stores from max to min element.We call it as max heap vice versa.
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x>y){
                pq.push(x-y);
            }
            
        }
        return pq.empty()?0:pq.top();
        
    }
};
