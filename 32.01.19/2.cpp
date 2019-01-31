#include <iostream>
#include <utility>

using namespace std;

class c_array
{
    public:
    pair <int, int>* data;
    int q = 0;
    int arraySize;
    c_array (int N)
    {
        arraySize = N;
        data = new pair <int, int> [N];
    };
    c_array (c_array& A)
    {
        arraySize = A.arraySize;
        data = A.data;
    };
    ~c_array ()
    {
        delete[] data;
    };
    pair <int, int> &operator[](int i)
    {
        while (i >= arraySize)
        {
            i -= arraySize;
        }
        return data[i];
    };
    void input ()
    {
        int j, a, b;
        for (int i = q; i < arraySize + q; i++)
        {
            j  = i;
            while (j >= arraySize)
                j -= arraySize;
            cin >> a >> b;
            data[j] = make_pair(a, b);
        }
        
    };
    void output()
    {
        int j;
        for (int i = q; i < arraySize + q; i++)
        {
            j = i;
            while (j >= arraySize)
                j -= arraySize;
            cout << data[j].first << " " << data[j].second << "\n";
        }
    };
    void Move (int k)
    {
        q += k;
    }
};

int main()
{
    int N, K;
    cin >> N;
    c_array A (N);
    A.input();
    A.output();
    cin >> K;
    A.Move (K);
    A.output();
}
