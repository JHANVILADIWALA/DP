https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

bool isSubsetSum(vector<int>arr, int sum){
         int n = arr.size();
         bool t[n+1][sum+1];
         
         //initialisation
         // T F F F F  ...
         // T
         // T
         // T
         for(int i=0; i<=n; i++){
             for(int j=0; j<=sum; j++){
                 if(i==0)t[i][j]=false;
                 if(j==0)t[i][j]=true;
             }
         }
         
         for(int i=1; i<=n; i++){
             for(int j=1; j<=sum; j++){
                 if( arr[i-1]<=j ){
                     //pick or not pick
                     t[i][j] =  t[i-1][j-arr[i-1]] ||  t[i-1][j]  ;
                 }
                 else{
                     //can't pick
                     t[i][j]= t[i-1][j];
                 }
             }
         }
         return t[n][sum];
    }
