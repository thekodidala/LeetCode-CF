#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string s;
    cin>>s;
    vector<string>ws;
        istringstream iss(s);
        string word;
        int mxx=INT_MIN;
        while(iss>>word){
            ws.push_back(word);
            mxx=max(mxx,int(word.length()));
        }
        cout<<ws.size();
        for(int i=0;i<ws.size();i++){
            cout<<ws[i];
        }
        vector<string>res(mxx);
        for (int i=0;i<mxx;i++) {
            for (auto& w:ws)res[i]+=i<w.length()?w[i]:' ';
            while (res[i].back()==' ')res[i].pop_back();
        }
        for(int i=0;i<ws.size();i++){
            cout<<res[i];
        }
        //cout<<res[0];
}

