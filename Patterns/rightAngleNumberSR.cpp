#include <bits/stdc++.h>
using namespace std;

void pattern4(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout <<i<<" ";
        }
       
        cout << endl;
    }
}

int main()
{  
    int N = 5;

    pattern4(N);

    return 0;
}