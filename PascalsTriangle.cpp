class Solution {
public:
    vector<int> getRow(int rowIndex) {
     vector<int>helper;
     if(rowIndex==0){
        helper.push_back(1);
        return helper;
     }   
     int n=rowIndex+1;
     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
     dp[1][1]=1;
     dp[2][1]=1;
     dp[2][2]=1;
     for(int i=3;i<=n;++i){
        for(int j=1;j<=i;++j){
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
     }
     for(int j=1;j<=rowIndex+1;++j){
        helper.push_back(dp[rowIndex+1][j]);
     }
     return helper;
    }
};