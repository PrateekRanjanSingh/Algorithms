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
int count2 (vector <int> v,int k)
{
	int arr[k+1] = {0};
	for(int i = 0;i<v.size();i++)
	{
		arr[v[i]]++;
	}
	int count = 0;
	if(k%2!=0)
	{
		for(int i = 0;i<=k;i++)
		{
			if(arr[i]>0 && arr[k-i] > 0)
			count++;
		}
	}
	else
	{
		for(int i = 0;i<=k;i++)
		{
			if(i==k/2)
			{
				if(arr[i]>1) count++;
				break;
			}
			else if(arr[i]>0 && arr[k-i] > 0)
			count++;
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
	cout << cal(v,k) << endl;
	cout << count2(v,k);
	return 0;
}
