//https://programming.in.th/task/rev2_problem.php?pid=1001
#include <iostream>
#include <string.h>
using namespace std;
void fall(string c[], int n, int pt, int high)
{
    if (pt + 1 < high and c[pt + 1][n] == '.')
    {
        fall(c, n, pt + 1, high);
    }

    else
    {
        c[pt][n] = '#';
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    string c[21];
    int stone;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> stone;
        if (c[0][i] == '.')
        {
            while (stone--)
            {
                fall(c, i, 0, n);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
}