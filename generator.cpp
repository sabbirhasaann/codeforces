#include <bits/stdc++.h>
using namespace std;


void generateInt(int L, int R, int N){

    // 64-bit Randoms: If you need to generate numbers for long long (up to 1018), use mt19937_64 and uniform_int_distribution<long long>.
    // Shuffling: If you want to randomize the order of an array, use shuffle(arr.begin(), arr.end(), rng);


    // 1. Seed the random number generator using the current system time
    // This ensures you get different numbers every time you run the code.
    uint32_t seed = chrono::steady_clock::now().time_since_epoch().count();
    mt19937 rng(seed);

    // 2. Define the distribution range [L, R]
    uniform_int_distribution<int> dist(L, R);

    // 3. Generate and print 5 random numbers
    // cout << "Random numbers between " << L << " and " << R << ":" << endl;
    int posSum=0,negSum=0,pos=0,neg=0;
    for (int i = 0; i < N; i++) {
        int val = dist(rng);
        if(val>0){
            ++pos;
            posSum += val;
        }
        else{
            ++neg;
            negSum += abs(val);
        }
        cout << val << " ";
    }
    cout << endl;
    cout << "Pos cnt: " << pos <<"\nNeg cnt: " << neg << endl;
    cout << "Pos sum: " << posSum << "\nNeg sum: " << negSum << endl;
}

void multiplication_table(int n, int m){
    vector<vector<long long>> table(n+1, vector<long long>(m+1, 0));
    vector<long long> freq((n*m) + 1, 0);
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            table[i][j] = i * j;
            ++freq[i*j];
        }
    }
    for(int i=1;i< n*m + 1;i++)
        cout << setw(6) << i <<"----->" << setw(2) << freq[i] << endl;
}

int main()
{
    // generateInt(-1000,1000, 100);
    multiplication_table(100,100);
}