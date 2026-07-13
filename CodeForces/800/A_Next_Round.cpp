#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, n;
    cin >> x >> y;
    int count = 0;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    n = arr[y - 1];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] >= n && arr[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}