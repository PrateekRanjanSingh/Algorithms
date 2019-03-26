/**
Code to print letter combinations of a phone number
**/

#include <bits/stdc++.h>
using namespace std;

void fun(string ar[],string digits,int index, string s)
{
    if(index==digits.length())
    {
        cout << s << " ";
        return;
    }
    int p = digits[index] - '0';
    string letters = ar[p];
    for(int i = 0;i<letters.length();i++)
    {
        fun(ar,digits,index+1,s+letters[i]);
    }
}

int main() {
	string digits;
	cin >> digits;
	string s ="";
    string ar[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    fun(ar,digits,0,s);
	return 0;
}