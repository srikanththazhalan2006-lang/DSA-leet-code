#include<climits>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        int mindiff=INT_MAX;
        for(int k=1;k<arr.size();k++){
             mindiff=min(mindiff,arr[k]-arr[k-1]);
        }
        
        int l = 0;
        vector<int> v;
        v.push_back(arr[0]);
        for(int r = 1; r < arr.size(); r++) {
            if(l + r >= 2) {
                v.erase(v.begin());
                l++;
            }
            v.push_back(arr[r]);
            if(v[1] - v[0] == mindiff) {
                result.push_back({v[0], v[1]});
            }
        }
        return result;
    }
};