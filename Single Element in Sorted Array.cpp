class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0 ; i< nums.size() ;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if (it.second<2){
               int c = it.first;
               return c;
            }

        }
        return 0;
    }
};
