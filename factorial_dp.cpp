#include<iostream>
using namespace std;
int dp[100];
int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;	
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}	
	return dp[n]=n*fact(n-1);
}
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		dp[i]=-1;
	}
	cout<<fact(num);
}
