#include<set>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            int target=nums[i];
            while(left<right){
                int sum=nums[left]+nums[right];
                if((target+sum)>0){
                    right--;
                }
                else if((target+sum)<0){
                    left++;
                }else if((target+sum)==0){
                    result.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }else{
                    ;
                }
            }
        }
        vector<vector <int>> ans(result.begin(),result.end());
        return ans;
        
    }
};