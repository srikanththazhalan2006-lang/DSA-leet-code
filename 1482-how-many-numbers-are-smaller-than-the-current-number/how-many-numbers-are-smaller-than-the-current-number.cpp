#include<unordered_map>
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(umap.count(temp[i])){
                continue;
            }umap[temp[i]]=i;

        }
        for(int x:nums){
            v.push_back(umap[x]);
        }
        return v;
        
    }
};