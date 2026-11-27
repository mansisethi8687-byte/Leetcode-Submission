class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        unordered_map<int,int>check;
        for(auto i:freq){
            if(check.find(i.second)==check.end())check[i.second]++;
            else return false;
        }
        return true;
    }
};