class Solution {
public:
    int compareVersion(string version1, string version2) {
        int m=version1.length();
        int n=version2.length();
        int i=0,j=0;
        while(i<m || j<n){
            long long n1=0,n2=0;
            while(i<m && version1[i]!='.'){
                n1=n1*10+version1[i]-'0';
                i++;
            }
            while(j<n && version2[j]!='.'){
                n2=n2*10+version2[j]-'0';
                j++;
            }
            if(n1!=n2){
                return (n1>n2)?1:-1;
            }
            i++;
            j++;
        }
        return 0;
    }
};