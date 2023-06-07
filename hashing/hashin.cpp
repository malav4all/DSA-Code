#include <bits/stdc++.h>
using namespace std;
// int hashh[10000000];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute

    // for (int i = 0; i < n; i++)
    // {
    //     hashh[arr[i]] += 1;
    // }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // for (auto it : mpp)
    // {
    //     cout << it.first << "-->" << it.second;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}