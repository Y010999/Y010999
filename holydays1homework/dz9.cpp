#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

void set_min (int** &a, int b, int c, int x, int y)
{
    if ((x <= b) && (y <= c) && (x >= 1) && (y >= 1))
    {
        a[x - 1][y - 1] = -1;
    };
}

void mins_detector (int** &a, int b, int c)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == -1) continue;
            int p = 0;

            int x = i, y = j;

            if (x > 0) {x -= 1;};
            if (y > 0) {y -= 1;};
            int x11 = x, y11 = y;
            while ((x11 <= (b - 1)) && ((x11 - i) <= 1))
            {
                while ((y11 <= (c - 1)) && ((y11 - j) <= 1))
                {
                    if (a[x11][y11] == -1) {p++;};
                    y11++;
                };
                y11 = y;
                x11++;
            };

            a[i][j] = p;
        };
    };
}

void output (int** a, int b, int c)
{
    system("cls");

   for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == 0)
            {
                printf("%2d", a[i][j]);
            }
            else
            {
                printf("%3d", a[i][j]);
            };
        };
        printf("\n");
    };
}

int main()
{
    int m, n;
    scanf ("%d%d", &m, &n);

    int** field = new int* [m];
    for (int i = 0; i < m; i++)
	{
		*(field+i) = new int [n];
	};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            field[i][j] = 0;
        };
    };

    output(field, m, n);

    printf("\n");

    char d;

    while (0 == 0)
    {
        int m_, n_;
        scanf ("%d%d", &m_, &n_);

        set_min(field, m, n, m_, n_);
        mins_detector(field, m, n);
        output(field, m, n);

        d = getch();
        if (d == 27) {exit(0);};       
    };

}
