// Program to find solution for monty hall paradox
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x = rand()%3+1;
	cout << x << endl;
	int y;
	cin >> y;
	cout << 6-(x+y);
}
