  #include<bits/stdc++.h>
  using namespace std;
  
  int solveTab(int N, int x, int y, int z){
      vector<int> dp(N+1,INT_MIN);
      dp[0]=0;
      for(int i=1; i<N+1; i++){
          if(i-x>=0 && dp[i-x]!=INT_MIN){
              dp[i]=max(dp[i],1+dp[i-x]);
          }
          if(i-y>=0 && dp[i-y]!=INT_MIN){
              dp[i]=max(dp[i],1+dp[i-y]);
          }
          if(i-z>=0 && dp[i-z]!=INT_MIN){
              dp[i]=max(dp[i],1+dp[i-z]);
          }
      }
      
      
      return dp[N];
  }

  int main(){
    int ans=solveTab(5,5,2,3);
        if(ans!=INT_MIN)  cout<<ans;
         else cout<<0;

    return 0;
  }