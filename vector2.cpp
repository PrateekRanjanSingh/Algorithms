#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	int n,m,a;
	vector <vector <int>> arr;
	vector <int> temp;
	arr.push_back(temp);
	cout << "Enter M and N";
	cin >> m >> n;
	for(int i=0;i<m ;i++)
	{
		for(int j=0;j <n;j++)
		{
			cout << "Enter the value";
			cin  >> a;
			arr[i].push_back(a);
		}
	}
	for(int i=0;i<m ;i++)
	{
		for(int j=0;j <n;j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}
