#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n,maxim=INT_MIN;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        int sq = sqrt(x);
        if(sq * sq != x)
            maxim = max(maxim, x);
        
    }
    cout << maxim << endl;


    return 0;
}