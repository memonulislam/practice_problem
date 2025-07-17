#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int query;
    cin >> query;

    for (int i = 1; i <= query; i++)
    {
        int num;
        cin >> num;

        int left = 0;
        int right = n - 1;

        int found = 0;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (arr[mid] == num)
            {
                found = 1;
                break;
            }
            else if (arr[mid] < num)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}