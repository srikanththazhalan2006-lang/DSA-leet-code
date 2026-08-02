
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        nums1.resize(m + n);
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        int size = nums1.size();
        if (size % 2 == 0) {
            return (nums1[size / 2 - 1] + nums1[size / 2]) / 2.0;
        }
        return nums1[size / 2];
    }
};
        
    
