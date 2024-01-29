// problem link : https://leetcode.com/problems/single-number-ii/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> frqMap;

        for(auto val : nums)
        {
            frqMap[val]++;
        }

        for(auto it = frqMap.begin() ; it!=frqMap.end() ; it++)
        {
            if(it->second == 1)
            {
                return it->first ;
            }
        }

        return 1;

        
    }
};