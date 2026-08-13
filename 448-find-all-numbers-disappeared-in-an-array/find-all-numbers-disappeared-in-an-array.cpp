#include<unordered_set>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> disappear(nums.begin(),nums.end());
        vector<int> appear;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(disappear.count(i)){
                ;
            }
            else{
                appear.push_back(i);
            }   
        }
    return appear;
        
        
    }
};