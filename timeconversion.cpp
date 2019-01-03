#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string temp = s.substr(8);
    string temp2 = s.substr(0,2);
    if(temp[0]=='P'&&temp[1]=='M'){
        if(temp2[0]=='1' && temp2[1]=='2'){
            return s.substr(0,8);
        }
        else{
            string temp = s.substr(0,2);
            stringstream test(temp);
            int x = 0;
            test >> x;
            x = x+12;
            return to_string(x) + s.substr(2,6);
        }
    }
    else{
        temp = s.substr(0,2);
        if(temp[0]=='1' && temp[1]=='2') return to_string(0) + to_string(0) + s.substr(2,6);
        else
        return s.substr(0,8);
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
