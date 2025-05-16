class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dictionary;

        for(int i =0; i< nums.size(); i++){
            int complement = target - nums[i];

            if(dictionary.find(complement) != dictionary.end()){
                 return {dictionary[complement], i};
            }
            dictionary[nums[i]] = i;
        }
        return {};
    }
};