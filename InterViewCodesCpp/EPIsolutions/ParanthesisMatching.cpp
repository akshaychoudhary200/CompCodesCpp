#include<iostream>
#include<stack>
using namespace std;


bool isValidString(char str[]) {
	stack<char> st;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '{' || str[i] == '(' || str[i] == '[') {
			st.push(str[i]);
		}
		else {
			if (st.empty()) {
				return false; 
			}
			if (str[i] == '}' && st.top() == '{' ||
				str[i] == ')' && st.top() == '(' ||
				str[i] == ']' && st.top() == '[') {
				st.pop();
			}
			else {
				return false;
			}
		}
	}
	return st.empty();
}


int main() {
	char str[100];
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (isValidString(str)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
}