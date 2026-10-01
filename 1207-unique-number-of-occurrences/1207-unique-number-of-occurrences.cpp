class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int  n = arr.size();
        unordered_map<int ,int > un;
        for(int  i =0;i<n;i++){
            un[arr[i]]++;
        }
        unordered_set<int>uq;
        for(auto p : un){
           if(uq.find(p.second)!=uq.end()){
            return false;
           }else{
            uq.insert(p.second);
            }
        }
        return true;
    }
};