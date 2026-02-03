#include <bits/stdc++.h>
using namespace std;

void efficientSoln(){
    long long ans=LLONG_MIN, n, x;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>x;
        for (long long j = 0; j*j<=x; j++)
            if (j*j == x)
                x = LLONG_MIN;
        ans = max(ans, x);
    }
    cout << ans << endl;
}

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