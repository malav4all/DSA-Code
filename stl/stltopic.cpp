#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
    string s = "123";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}