#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[x][3];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < x; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}