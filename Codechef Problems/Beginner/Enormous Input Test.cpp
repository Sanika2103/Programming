#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i <n; i++)
    {

        int m;
        cin >> m;
        if (m % k == 0)
            count++;
    }

    cout << endl
         << count;
    return 0;
}
