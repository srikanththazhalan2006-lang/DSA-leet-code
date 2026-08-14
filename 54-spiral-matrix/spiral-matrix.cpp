class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowbegin=0;
        int colbegin=0;
        int rowend=matrix.size()-1;
        int colend=matrix[0].size()-1;
        while(rowbegin<=rowend && colbegin<=colend){
            int j;
            for(j=colbegin;j<=colend;j++){
                ans.push_back(matrix[rowbegin][j]);
            }
            rowbegin++;
            for(j=rowbegin;j<=rowend;j++){
                ans.push_back(matrix[j][colend]);
            }
            colend--;
            if(rowbegin<=rowend){
            for(j=colend;j>=colbegin;j--){
                ans.push_back(matrix[rowend][j]);


            }rowend--;}
            if(colbegin<=colend){
                for(j=rowend;j>=rowbegin;j--){
                    ans.push_back(matrix[j][colbegin]);
                    
                }colbegin++;
            }
        }return ans;
    } 
};