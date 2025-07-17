#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<int> pre(n + 1);

    pre[1] = arr[1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}