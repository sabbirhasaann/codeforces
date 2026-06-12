#include <bits/stdc++.h>
using namespace std;

void debug_grid(int R, int C)
{
    // Print column headers
    cout << "    ";
    for (int j = 0; j < C; j++)
        cout << setw(4) << j + 1 << " ";
    cout << "\n    " << string(C * 5, '-') << "\n";

    // Print rows with row headers
    for (int i = 0; i < R; i++)
    {
        cout << setw(2) << i + 1 << " | ";
        for (int j = 0; j < C; j++)
        {
            // Replace with your grid's actual value, e.g., grid[i][j]
            // For pure index visualization, we just show a placeholder
            // cout << setw(3) << "." << " ";
            cout << setw(3) << i + 1 << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main()
{
    debug_grid(6, 4);
}