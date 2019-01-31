#include <iostream>

using namespace std;

class double_vector
{
    double* data;
    unsigned int vectorSize;
    unsigned int vectorCapacity;
public:
    double_vector()
    {
        vectorSize = vectorCapacity = 1;
        data = new double [1];
        *data = 0;
    };
    double_vector(int N)
    {
        vectorSize = vectorCapacity = N;
        data = new double [N];
        for (int i = 0; i < N; i++)
            data[i] = 0;
    };
    double_vector (double* A, int N)
    {
        vectorSize = vectorCapacity = N;
        for (int i = 0; i < N; i++)
            data[i] = a[i];
    }
     double_vector (const double_vector& A)
    {
        vectorSize = A.vectorSize;
        vectorCapacity = A.vectorCapacity;
        data = A.data;
    };
    ~double_vector ()
    {
        delete[] data;
    };
    const double_vector& operator=(const double_vector& A)
    {
        vectorSize = A.vectorSize;
        vectorCapacity = A.vectorCapacity;
        data = A.data;
        return *this;
    };
    double &operator[] (int i)
    {
        return data[i];
    };
    void push_back (int x)
    {
        if (vectorSize >= vectorCapacity)
        {
            capacity *= 2;
            double* T = new double[vectorCapacity];
            for (int i - 0; i < vectorSize; i++)
                T[i] = data [i];
            delete [] data;
            data = T;
        }
        data [vectorSize] = x;
        vectorSize++;
    };
    void pop_back ()
    {
        double T = data [vectorSize - 1];
        delete [vectorSize - 1] data;
        vectorSize--;
        return T;
    }
    unsigned int vectorSize()
    {
        return vectorSize;
    };
    unsigned int vectorCapacity()
    {
        return vectorCapacity;
    };
    void resize (int N)
    {
        vectorCapacity += N;
        double* T = new double[vectorCapacity];
            for (int i - 0; i < vectorSize; i++)
                T[i] = data [i];
            delete [] data;
            data = T;
    }
}

int main()
{

}
