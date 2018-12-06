#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int *temp;
	temp = a;
	a = b;
	b = a;
}

void printar(int a[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void maxm(int a[], int b[],int n)
{
	for(int i = 0;i<n;i++)
	{
		if(i<n-1)
		{
			if(abs(b[i]-b[i+1])>abs(a[i+1]-b[i])) swap(a[i+1],b[i+1]);
		}
	}
}
int summ(int a[],int b[],int n)
{
	int sum = 0;
	for(int i = 0;i<n;i++)
	{
		sum += abs(a[i]-b[i]);
		if(i<n-1)
		{
			sum += abs(b[i]-a[i+1]);
		}
	}
	return sum;
}

int main()
{
	int n;
	cout << "Enter n\n";
	cin >> n;
	int a[n],b[n];
	cout << "Enter 1st array\n";
	for(int i = 0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "Enter 2nd array\n";
	for(int i = 0;i<n;i++)
	{
		cin >> b[i];
	}
	cout << "Results before swapping\n";
	printar(a,n);
	printar(b,n);
	maxm(a,b,n);
	int s = summ(a,b,n);
	cout << "Results after swapping\n";
	printar(a,n);
	printar(b,n);
	cout << "The sum is = " << s << endl;
	return 0;
}
