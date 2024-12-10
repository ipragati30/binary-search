public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int>mp;
        for(int i = 0 ; i < arr.size() ;i++){
            mp[arr[i]]++;
        }
        for(auto it :mp){
            if (it.first==target){
                int c = it.second ;
                return c;
            }
            
        }
        return 0;
    }
