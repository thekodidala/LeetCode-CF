class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        for(int i:a){
            int flag=1;
        while(!s.empty() &&(s.top()>0 && i<0)){
            
            if(s.top()<abs(i)){
                s.pop();
                continue;
            }
            else if(s.top()==abs(i)){
                s.pop();
            }
            flag=0;
            break;
            
        }
        if(flag){
            s.push(i);
        }
    }
        vector<int>v(s.size(),1);
        for(int i=s.size()-1;i>=0;i--){
            v[i]=s.top();
            s.pop();
        }
        return v;
    }
};