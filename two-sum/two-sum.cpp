class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> track;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(track.find(target - nums[i]) != track.end())
            {
                ans.push_back(track[target - nums[i]]);
                ans.push_back(i);
            }
            else
            {
                track.insert(pair<int, int>(nums[i], i));
            }
        }
        
        return ans;
    }
};