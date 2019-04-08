#include <iostream>
#include <algorithm>
using namespace std;

struct cord {
    int x1,y1,x2,y2;
};

bool compare(cord c1, cord c2)
{
    return ((c1.x1 < c2.x1) || (c1.y1 < c2.y1));
}

void print(cord a[], int t)
{
    for(int i = 0;i<t;i++)
    {
        cout << a[i].x1 << " " << a[i].y1 << endl;
        cout << a[i].x2 << " " << a[i].y2 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    cord arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i].x1;
        cin >> arr[i].y1;
        cin >> arr[i].x2;
        cin >> arr[i].y2;
    }
    sort(arr,arr+n,compare);
    int max = 0, min = 99999, count = 0;
    for(int i = 0;i<n;i++)
    {
        int sum = 0;
        for(int j = i;j<n;j++)
        {
            if(arr[j].x1==arr[i].x1)
            {
                int d = abs(arr[j].y1-arr[j].y2);
                sum += d;
                count++;
            }
            else break;
        }
        if(max < sum) max = sum;
        if(min > count) min = count;
    }
    //print(arr,n);
    cout << min << endl;
    for(int i = 0;i<n;i++)
    {
        int sum = 0, count = 0;
        for(int j = i;j<n;j++)
        {
            if(arr[j].x1==arr[i].x1)
            {
                int d = abs(arr[j].y1-arr[j].y2);
                sum += d;
                count++;
            }
            else break;
        }
        if(max == sum && count==min){
            cout << arr[i].x1 << "\t" << arr[i].y1 << endl;
            cout << arr[i+count-1].x2 << "\t" << arr[i+ count-1].y2 << endl;
        }
        
    }
	return 0;
}