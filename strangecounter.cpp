#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t)
{
    //long int n = 3,count=1,temp = 3;
    // while(count!=t)
    // {
    //     n--;
    //     count++;
    //     if(n<1)
    //     {
    //         n = 2 * temp;
    //         temp = n;
    //     } 
    // }
    //return n;
    long n = 1, temp = 3;
    vector <long> v;
    while(n<=t)
    {
        v.push_back(n);
        n += temp;
        temp *= 2;
    }
    long diff = abs(v[v.size()-1]-t);
    temp = v[v.size()-1]+2;
    return (temp-diff);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
