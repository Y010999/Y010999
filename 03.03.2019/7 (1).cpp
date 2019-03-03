#include <bits.h> 
#include <iostream>
#include<stack>
using namespace std;
class swm {
	stack <int> s;
	int MAX;
public:
	void getMAX()
	{
		if (s.empty())
			cout << "Stack is empty\n";
		else
			cout << "max is: " << MAX << "\n";
	}
	void pop()	{
		if (s.empty()) {
			cout << "Stack is empty\n";
			return;
		}
		int t = s.top();
		s.pop();
		if (t > MAX) {
			cout << MAX << "\n";
			MAX = 2 * MAX - t;
		}

		else
			cout << t << "\n";
	}
	void push(int x)	{
		if (s.empty()) {
			MAX = x;
			s.push(x);
			
			return;
		}
		if (x > MAX) {
			s.push(2 * x - MAX);
			MAX = x;
		}
		else
		s.push(x);
		
	}
};
int main() {
	swm A;
	A.push(3);
	A.push(5);
	A.getMAX();
	
	return 0;
}
