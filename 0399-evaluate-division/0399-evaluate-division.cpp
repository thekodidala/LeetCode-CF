class Solution {
public:
    void dfs(string dividend,string divisor,unordered_map<string,unordered_map<string,double>>& gr,unordered_set<string>& visi,double& ans,double temp){
        if(visi.find(dividend)!=visi.end())return;
        visi.insert(dividend);
        if(dividend==divisor){ans=temp;return;}
        for(auto ne:gr[dividend]){//neighbour
            dfs(ne.first,divisor,gr,visi,ans,temp* ne.second);
        }
    }
    
     unordered_map<string,unordered_map<string,double>> buildgraph(vector<vector<string>>& equations,vector<double>& values){
        unordered_map<string,unordered_map<string,double>>gr;
        for(int i=0;i<equations.size();i++){
            string divi=equations[i][0];
            string divisor=equations[i][1];
            double value=values[i];
            gr[divi][divisor]=value;
            gr[divisor][divi]=1.0/value;
        }   
        return gr;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,unordered_map<string,double>>gr=buildgraph(equations,values);
        vector<double>v;
        for(auto query:queries){
            string dividend=query[0];
            string divisor=query[1];
            if(gr.find(dividend)==gr.end()||gr.find(divisor)==gr.end()){
                v.push_back(-1);
            }
            else{
                unordered_set<string>visi;
                double ans=-1.0,temp=1.0;
                dfs(dividend,divisor,gr,visi,ans,temp);
                v.push_back(ans);
            }
        }
        return v;
        
    }
};