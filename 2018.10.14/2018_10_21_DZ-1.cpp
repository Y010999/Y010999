#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
struct rational {
    int m;
    int n;
    rational(int a, int b) {
        m = a / gcd(a, b);
        n = b / gcd(a, b);
    }
    rational(int a) {
        m = a;
        n = 1;
    }
    rational() {
        m = 0;
        n = 1;
    }
    rational(const rational &A) { 
        m = A.m;
        n = A.n;
    }
    rational &operator=(const rational &A) {
        m = A.m;
        n = A.n;
        return *this;
    }
    rational &operator*=(const rational &A) {  
        m *= A.m;
        n *= A.n;
        int d = gcd(m, n);
        m /= d;
        n /= d;
        return *this;
    }
    rational &operator/=(const rational &A) { 
        m *= A.n;
        n *= A.m;
        int d = gcd(m, n);
        m /= d;
        n /= d;
        return *this;
    }
    rational &operator+=(const rational &A) { 
        m = ((m * A.n) + (n * A.m));
        n *= A.n;
        int d = gcd(m, n);
        m /= d;
        n /= d;
        return *this;
    }
    rational &operator-=(const rational &A) { 
        m = ((m * A.n) - (n * A.m));
        n *= A.n;
        int d = gcd(m, n);
        m /= d;
        n /= d;
        return *this;
    }
};
rational &operator*(rational A, const rational &B) { 
    return A *= B;
}
rational &operator/(rational A, const rational &B) { 
    return A /= B;
}
rational &operator+(rational A, const rational &B) { 
    return A += B;
}
rational &operator-(rational A, const rational &B) { 
    return A -= B;
}
bool operator==(const rational &A, const rational &B) { 
    return ((A.m == B.m) && (A.n == B.n));
}
bool operator!=(const rational &A, const rational &B) { 
    return !(A == B);
}
bool operator>(const rational &A, const rational &B) { 
    return (((A.m*B.n) - (B.m*A.n) > 0) && (A.n*B.n > 0)) || (((A.m*B.n) - (B.m*A.n) < 0) && (A.n*B.n < 0));
}
bool operator<(const rational &A, const rational &B) { 
    return (((A.m*B.n) - (B.m*A.n) < 0) && (A.n*B.n > 0)) || (((A.m*B.n) - (B.m*A.n) > 0) && (A.n*B.n < 0));
}
bool operator>=(const rational &A, const rational &B) { 
    return !(A < B);
}
bool operator<=(const rational &A, const rational &B) { 
    return !(A > B);
}
istream& operator >>(istream &in, rational &A)
{
    in >> A.m >> A.n;
    int d = gcd(A.m, A.n);
    A.m /= d;
    A.n /= d;
    return in;
}
ostream& operator <<(ostream &out, const rational &A)
{
    out << A.m << "/" << A.n;
    return out;
}
int main() {
	int uno,dos,tres,cuatro;
	cin>>uno>>dos>>tres>>cuatro;
    rational A(uno, dos), B(tres, cuatro);
    cout << "A = " << A << " B = " << B << endl;
    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A * B = " << A * B << endl;
    cout << "A / B = " << A / B << endl;
    rational(X) = A *= B;
    cout << "A *= B =" << X << endl;
    rational(Y) = A /= B;
    cout << "A /= B =" << Y << endl;
    rational(Z) = A += B;
    cout << "A += B =" << Z << endl;
    rational(O) = A -= B;
    cout << "A -= B =" << O << endl;
    if (A==B) {
        cout << A << " == " << B << endl;
    }
    if (A!=B) {
        cout << A << " != " << B << endl;
    }
    if (A > B) {
        cout << A << " > " << B << endl;
    }
    if (A >= B) {
        cout << A << " >= " << B << endl;
    }
    if (A < B) {
        cout << A << " < " << B << endl;
    }
    if (A <= B) {
        cout << A << " <= " << B << endl;
    }
    return 0;
}
