#include <iostream>
#include <cstring>
using namespace std;

bool isuniquestr(string);
int main() {
	string str;
	cin >> str;

	if (isuniquestr(str)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	
}

bool isuniquestr(const string str) {
	bool strChar[26] = { false };

	for (int i = 0; i < str.length(); i++) {
		if (!strChar[str[i]-'a']) {
			strChar[str[i]-'a'] = true;
		}
		else {
			return false;
		}
	}
	return true;
}