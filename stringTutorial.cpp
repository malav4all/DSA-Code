#include <bits/stdc++.h> // All Library Import
using namespace std;
int main()
{
    string m = "Malav";
    int leng = m.size();
    m[leng - 1] = 'a';
    cout << m[leng - 1];
    return 0;
}