class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m =t.size();
        int sum=0;

        if(m!=n){
            return false;
        }

        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(s[i]==t[j]){
                    sum++;
                    t[j] = '#'; 
                    break;
                }
            }
        }
        if(sum==n){
            return true;
        }
        else{
            return false;
        }
    }
};