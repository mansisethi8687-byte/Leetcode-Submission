class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            bool ans=true;
            for(int j=0;j<n;j++){
                if(s[i]==s[j]&&i!=j){
                    ans=false;
                    break;
                }
            }
            if(ans==true)return i;
        }
        return -1;
    }
};