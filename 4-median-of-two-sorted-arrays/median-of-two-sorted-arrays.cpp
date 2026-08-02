#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m,n,o;
        m=nums1.size()-1;
        n=nums2.size()-1;
        o=nums1.size()+nums2.size()-1;
        vector<int> num(nums1.size()+nums2.size());
        while(n>=0 && m>=0){
            if( nums1[m]>nums2[n]){
                num[o--]=nums1[m--];
            }else{
                num[o--]=nums2[n--];
            }
        }
        while(m>=0){
            num[o--]=nums1[m--];
        }
        while(n>=0){
            num[o--]=nums2[n--];
        }
        int s=num.size();
        if(s%2==0){
            return((num[s/2-1]+num[s/2])/2.0);

                
        }else{
            return(num[s/2]);
        }
        
    }
};