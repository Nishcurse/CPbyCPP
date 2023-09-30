/*1560 A - Dislike of Threes By Nishu ❤️ */
//opytimzing this now
#include <bits/stdc++.h>
using namespace std;
int aru[1000];
int main()
{
	int e=0;
	for(int i=1;i<=1666;i++)
	{
		if(i%3!=0 && i%10!=3) aru[++e]=i;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<aru[n]<<endl;
	}
	return 0;
} 
