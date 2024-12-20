#include <bits/stdc++.h>

using namespace std;

void pyramid(int n)
{
     for (int row = 0; row <= n; row++)
    {

        for (int k = n; k > row; k--)
        {
            cout << " ";
        }

        for (int col = 0; col < row; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pyramid(n);
   
}