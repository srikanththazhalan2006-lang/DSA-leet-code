class Solution {
public:
  int solve(vector<int>& nums, int target, int index, int sum) {

        // We have used all the numbers
        if (index == nums.size()) {

            // If our sum became target, this is 1 valid way
            if (sum == target)
                return 1;

            // Otherwise, this way is useless
            return 0;
        }

        // Put + before nums[index]
        int add = solve(
            nums,
            target,
            index + 1,
            sum + nums[index]
        );

        // Put - before nums[index]
        int subtract = solve(
            nums,
            target,
            index + 1,
            sum - nums[index]
        );

        // Count both possibilities
        return add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums, target, 0, 0);
        
    }
};