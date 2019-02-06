#include <iostream>
using namespace std;
int numSquareSum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n%10)*(n%10);
        n /= 10;
    }
    return sum;
}

bool isHappyNum(int n)
{
    int slow = n;
    int fast = n;
    do
    {
        slow = numSquareSum(slow);
        fast = numSquareSum(numSquareSum(fast));
    }while(slow!=fast);
    return(slow == 1);
}
int main() {
	//code
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    do
	    {
	        if(isHappyNum(++n)) cout << n << endl;
	    }while(!isHappyNum(n));
	}
	return 0;
}