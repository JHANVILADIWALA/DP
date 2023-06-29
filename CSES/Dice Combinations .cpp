https://cses.fi/problemset/task/1633

#include<bits/stdc++.h>
#include<iostream>
typedef long long ll;
 
using namespace std;
 
int main(){
	long long int n;
	cin>>n;
	vector<ll>dp(n+1,0);
	dp[0]=1;
	for(int i=1;i<n+1;i++){
		for(int x=1;x<=6;x++){
			if(x>i) break;
			dp[i]=(dp[i]+dp[i-x])%1000000007;
		}
	}
	cout<<dp[n]<<endl;
}
