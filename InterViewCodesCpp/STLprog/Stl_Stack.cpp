#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;

	s.push(98);
	s.push(87);
	s.push(34);

	cout << s.top();
	s.pop();
	cout << s.top();
	s.pop();
	cout << s.top();


}