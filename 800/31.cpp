#include <bits/stdc++.h>
using namespace std;

void helper(int n, int a, int b)
{
    if (n == a && n == b)
    {
        cout << "YES" << endl;
        return;
    }
    if (a + b < n - 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        helper(n, a, b);
    }
}
