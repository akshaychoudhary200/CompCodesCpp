#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> st;
	int N;
	int max = 0, num = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x,t;
		cin >> t>> x;
		if (t == 1) {
			st.push(x);
			num = st.top();
			if (num > max) {
				max = num;
			}
			
		}
		else if (t == 2) {
			st.pop();
		}
		else {
			cout << num << endl;
		}
	}
}