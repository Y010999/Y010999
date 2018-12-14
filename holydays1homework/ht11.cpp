#include <iostream>

using namespace std;

struct String
{
   int n;
   char* sb;

   String (int a)
   {
       n = a;
       sb = new char [a];
   };

   String (const String & A)
    {
        n = A.n;
        sb = A.sb;
    };

    ~String ()
    {
        delete[]sb;
    };

    void input ()
    {
        for (int i = 0; i < n; i++)
            cin >> *(sb + i);
    }

    void output()
    {
        for (int i = 0; i < n; i++)
            cout << *(sb + i);
        cout << "\n";
    }

    char & operator ()(int i)
    {
        return *(sb+i);
    }

    double ch (char letter)
    {
        double k = 0;
        for (int i = 0; i < n; i++)
        {
            if (*(sb + i) == letter) {k++;};
        };
        k = (k/n);
        k *= 100;
        return k;
    }
};


String & operator + (String &A, const String &B)
{
    int k = A.n;
    A.n += B.n;
    char* mudamuda = new char [A.n];

    for (int i = 0; i < k; i++)
    {
        *(mudamuda + i) = *(A.sb + i);
    };
    for (int i = k; i < A.n; i++)
    {
        *(mudamuda + i) = *(B.sb + i - k);
    };

    A.sb = mudamuda;
    return A;
}

bool searching (const String &A, const String &B)
{
    if (A.n <= B.n)
    {
        int k = 0;
        for (int i = 0; i < B.n; i++)
        {
            if ((*(A.sb)) == (*(B.sb + i)))
            {
                k++;
                int j = 1;
                while (((*(A.sb + j)) == (*(B.sb + i + j))) && (j < A.n))
                {
                    k++, j++;
                };
            };
            if (k == A.n) {break;}
            else {k = 0;};
        };
        return (k == A.n);
    }
    else
    {
        return (0 == 1);
    };
}

int main()
{
    int n, m;
    cin >> n >> m;
    char ora;
    cin >> ora;

    String s(n), l(m);
    s.input();
    l.input();
    cout << '\n';
    s.output();
    l.output();
    cout << '\n';
    cout << s(0) << " " << l(m-1) << '\n' << '\n';

    if (searching(s, l) == 1) {cout << "Yes" << '\n';}
    else {cout << "No" << '\n';};

    cout << '\n';
    s + l;
    s.output();

    cout << '\n';

    cout << s.ch(ora) << "%";
    cout<< '\n';
}
