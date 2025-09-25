class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int amount = nums.size();
        for(int i = 0; i < amount;i++){
            for(int j = i + 1; j < amount; j++){
                if(nums[i] + nums[j]  == target){
                    return {i, j};
                }

            }
        }
        return {};
    }
};