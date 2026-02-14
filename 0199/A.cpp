// 2026/02/14 10:06:53
// https://codeforces.com/problemset/problem/199/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MAX 1e9
vector<int> res;

void fibonacci(){
    int a = 0, b = 1;
    res.push_back(a);
    
    while(b<=MAX)
    {
        int next = a + b;
        a = b;
        b = next;
        res.push_back(a);
    }
}

bool binary_search(int search_key)
{
    int i = 0;
    int j = res.size() - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (res[mid] == search_key)
            return true;
        else if (res[mid] > search_key)
            j = mid - 1;
        else
            i = mid + 1;
    }
    return false;
}

void soln()
{
    int n;
    cin >> n;
    fibonacci();
    int len = res.size();
    
    if(n%3==0)
    {
        int q = n/3;
        if(binary_search(q)){
            cout << q <<" " << q <<" " << q << endl;
            return;
        }
    }
    
    for(int i=1;i<len;i++)
    {   
        long long tmp = 2 * res[i-1] + res[i];
        if(tmp == n){
            cout << res[i-1] <<" " << res[i-1] <<" " << res[i] << endl;
            return;
        }
    }

    for(int i=0;i<len-2;++i){
        int target = n - res[i];
        for(int j=i+1, k=len-1;j<k;)
        {
            int target2 = res[j]+res[k];
            if(target2==target)
            {
                cout << res[i] <<" " <<res[j] <<" " << res[k] << endl;
                return;
            }
            else if(target2>target)
                --k;
            else
                ++j;
        }
    }


    cout << "I\'m too stupid to solve this problem" << endl;

}

void effsoln(){
    int n;
    cin >> n;
    cout << 0 <<" " << 0 << " " << n << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t=1;
    // cin >> t;
    while(t--)
        // soln();
        effsoln();
    return 0;
}