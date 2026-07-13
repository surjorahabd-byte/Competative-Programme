#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,m,a;
    cin >> n >> m >> a;
    int Tiles = ceil(n/a) * ceil(m/a);
    cout << Tiles << endl;
    return 0;
}