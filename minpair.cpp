// Program to find minimum number of pairs that add up to a given sum
#include <bits/stdc++.h>
#define INT_INF 100000
using namespace std;


//Normal Logic
int cal(vector <int> v, int k)
{
	int n = v.size();
	int count = 0;
	for(int i = 0;i<n;i++)
	{
		if(v[i]==-INT_INF) continue;
		int t = k - v[i];
		for(int j = i+1;j<n;j++)
		{
			if(v[j]==t)
			{
				count++;
				v[i] = -INT_INF;
				v[j] = -INT_INF;
				break;
			}
		}
		
	}
	return count;
}

//Optimized Code
int cal2(vector <int> v, int k)
{
	int i = 0, j = v.size()-1;
	sort(v.begin(),v.end());
	int count = 0;
	while(i < n && j >0)
	{
		if(count > 0)
		{
			if(a[i]==a[i-1]) i++;
			else if(a[j]==a[j+1]) j--;
		}
		if(a[i]+a[j]==k)
		{
			count++;
			i++;
			j--;
		}
	}
	return count;
}

int main()
{
	vector <int> v;
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int k;
	cin >> k;
	cout << cal(v,k);
	return 0;
}
