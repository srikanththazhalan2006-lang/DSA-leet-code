class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            result.push_back(nums[i]*nums[i]);

        }
        vector<int> ans(result.size());
        int left=0;
        int right=nums.size()-1;
        for(int pos=nums.size()-1;pos>=0;pos--){
            if(result[right]>=result[left]){
                ans[pos]=result[right];
                right--;
            }else{
                ans[pos]=result[left];
                left++;
            }
        }

        return ans;
        
    }
};