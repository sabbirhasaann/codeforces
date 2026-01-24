#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, start=0, count = 0;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    for(int i=-1, j=n-1; i<j;){
        int key = arr[j];

        if(key>d){
            --j;
            ++count;
        }
        else if((i-start + 2) * key > d){
            --j;
            ++count;
            start = ++i;
        }
        else{
            ++i;
        }
    }
    cout << count << endl;
}