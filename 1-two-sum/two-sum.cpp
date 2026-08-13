#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(umap.count(x)){
                return{umap[x],i};
            } umap[nums[i]]=i;
        }
        return{} ;
    }
};