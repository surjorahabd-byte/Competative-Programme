#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        char ar[101];
        cin >> ar;

        int a = strlen(ar);
        if(a <= 10)
        {
            cout << ar << endl;
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                cout << ar[0] << a-2 << ar[a-1] << endl;
                break;
            }
        }
    }
    return 0;
}