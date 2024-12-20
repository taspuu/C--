#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}
int main()

{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorial(n);
}
