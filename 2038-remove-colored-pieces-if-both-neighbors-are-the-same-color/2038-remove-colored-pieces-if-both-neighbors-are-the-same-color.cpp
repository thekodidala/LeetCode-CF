class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size(),a=0,b=0;
        for(int i=0;i<n-1;i++){
            if(i>0 && colors[i]=='A'){
                if(colors[i-1]==colors[i] && colors[i]==colors[i+1])
                    a++;
            }
            else if(i>0 && colors[i]=='B'){
                if(colors[i-1]==colors[i] && colors[i]==colors[i+1])
                    b++;
            }
        }
        cout<<a<<" "<<b;
        return (a>b)?true:false;
    }
};