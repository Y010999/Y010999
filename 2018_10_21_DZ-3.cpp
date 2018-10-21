#include <iostream>
using namespace std;
struct Array
{
    int arraySize;
    int* data;
    Array (int a)
    {
        arraySize = a;
        data = new int [a];
    };
    Array (const Array& A)
    {
        arraySize = A.arraySize;
        data = A.data;
    };
    ~Array ()
    {
        delete[] data;
    };
    void input ()
    {
        for (int i = 0; i < arraySize; i++)
            cin >> *(data + i );
    };
    void output()
    {
        for (int i = 0; i < arraySize; i++)
            cout << *(data + i) <<" ";
        cout << "\n";
    };
    int &operator[](int i)
    {
        return data[i];
    };
    int Max ()
    {
        int s = *data;
        for (int i = 0; i < arraySize; i++)
            if (*(data + i) > s)
                s = *(data + i);
        return s;
    };
    int Min ()
    {
        int s = *data;
        for (int i = 0; i < arraySize; i++)
            if (*(data + i) < s)
                s = *(data + i);
        return s;
    };
    int Avg ()
    {
        int s = 0;
        for (int i = 0; i < arraySize; i++)
            s += *(data + i);
        return (s/arraySize);
    };
};
void ch (Array A)
{
    cout << "Copying constructor works\n";
}
int main()
{
    int N;
    cin >> N;
    Array X(N);
    X.input();
    X.output();
    cout <<  X.Max() << "\n";
    cout <<  X.Min() << "\n";
    cout <<  X.Avg() << "\n";
    cout << X[0] << " " << X[1] << " " << X[2] << "\n";
    ch (X);
    return 0;
}
