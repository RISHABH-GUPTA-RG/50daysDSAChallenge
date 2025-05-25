class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int Start = -1, End = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                Start = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                End = i;
                break;
            }
        }
        return {Start, End};
    }
};