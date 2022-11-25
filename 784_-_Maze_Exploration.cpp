#include <stdio.h>
char ch[100][100];
int dx[] = {-1, +0, +1, +0};
int dy[] = {+0, +1, +0, -1};

// khub dangerous ekta problem
// c++ use kore wa ase bujlam na kno

void dfs(int x, int y)
{
    if (ch[x][y] == 'X' || ch[x][y] == '#')
        return;
    ch[x][y] = '#';
    for (int i = 0; i < 4; i++)
    {
        int a = x + dx[i];
        int b = y + dy[i];
        dfs(a, b);
    }
}
int main()
{
    int i, j, t;
    scanf("%d ", &t);

    while (t--)
    {
        int n = 0;
        while (gets(ch[n]))
        {
            if (ch[n][0] == '_')
                break;
            n++;
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; ch[i][j]; j++)
            {
                if (ch[i][j] == '*')
                    dfs(i, j);
            }
        }

        for (i = 0; i <= n; i++)
            puts(ch[i]);
    }
    return 0;
}