double dp[102][102];
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        
       
         for(int i = 0;i<=query_row;i++){
            for(int j =0;j<=i;j++){
               dp[i][j] = 0 ;
            }
        } dp[0][0] = poured ;
        for(int i = 0;i<=query_row;i++){
            for(int j =0;j<=i;j++){
                double q = (dp[i][j] - 1.0) / 2.0;
                if (q > 0) {
                    dp[i+1][j] += q;
                    dp[i+1][j+1] += q;
                }
            }
        }
        return min(1.0,dp[query_row][query_glass]);
    }
};