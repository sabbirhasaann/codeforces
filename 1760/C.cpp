// 2026/03/27 07:35:45
// https://codeforces.com/problemset/problem/1760/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
void soln()
{
    int n,max1=0,max2=-1,cnt=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i] < max1)
            max2 = arr[i];
    }

    cnt = count(arr.begin(), arr.end(), max1);
    if(cnt>1){
        for(int i=0;i<n;++i)
            cout << arr[i] - max1 << " ";
        cout << endl;
    }
    else{
        for(int i=0;i<n;++i){
            if(arr[i]==max1)
                cout << arr[i] - max2 << " ";
            else
                cout << arr[i] - max1 << " ";
        }
        cout << endl;
    }    
}

void soln1(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin >> arr[i];
    vector<int> a(arr);
    sort(a.begin(), a.end());
    for(int i=0;i<n;++i){
        if(arr[i]==a[n-1])
            cout << arr[i] - a[n-2] <<" ";
        else
            cout << arr[i] - a[n-1] << " ";
    }
    cout << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
        // soln();
        soln1();

    return 0;
}

/*in
5
4
4 7 3 5
2
1 2
5
1 2 3 4 5
3
4 9 4
4
4 4 4 4
*/

/*out
-3 2 -4 -2 
-1 1 
-4 -3 -2 -1 1 
-5 5 -5 
0 0 0 0 
*/