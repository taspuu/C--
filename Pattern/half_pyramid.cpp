#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = n; col >row; col--)
        {
            cout << " "<<col;
        }
        cout << endl;
    }
}