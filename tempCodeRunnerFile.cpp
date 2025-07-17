#include <bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cin >> n;

   vector<int> arr(n);

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   int totalSum = 0;

   for (int i = 0; i < n; i++)
   {
      totalSum += arr[i];
   }

   int leftSum = 0;
   int found = 0;

   for (int i = 0; i < n; i++)
   {
      int rightSum = totalSum - leftSum - arr[i];

      if (leftSum == rightSum)
      {
         cout << i << endl;
         found = 1;
         break;
      }

      leftSum += arr[i];
   }

   if (!found)
   {
      cout << "Not found equilibrium index" << endl;
   }

   cout << endl;

   return 0;
}