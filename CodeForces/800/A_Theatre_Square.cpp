#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a;
    cin >> n >> m >> a;
    long long Tiles = ceil(n/a) * ceil(m/a);
    cout << Tiles << endl;
    return 0;
}