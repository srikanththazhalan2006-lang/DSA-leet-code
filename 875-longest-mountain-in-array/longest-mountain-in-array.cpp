class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int result=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
                int j=i-1;
                while(j>0 && arr[j]>arr[j-1]){
                    j--;
                }
                int k=i+1;
                while(k<arr.size()-1 && arr[k]>arr[k+1]){
                    k++;
                }
                int length=(k-j)+1;
                if(length>result){
                    result=length;
                }
            }
        }
        return result;
    }
};