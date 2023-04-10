class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>um={{')','('},{']','['},{'}','{'}};
        stack<char>sk;
        for(auto x:s){
            if(x=='['||x=='('||x=='{'){
                sk.push(x);
            }
            else if(sk.empty()||sk.top()!=um[x]){return false;}
            else{
                sk.pop();
            }
}
        return sk.empty();
    }
};