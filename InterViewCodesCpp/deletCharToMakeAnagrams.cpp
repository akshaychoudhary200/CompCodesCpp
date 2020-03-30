#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	string str1;
	string str2;
	for (int T = 0; T < t; T++) {
		cin >> str1 >> str2;

		//initialize array with default values 0
		int arr1[26] = { 0 };
		int arr2[26] = { 0 };


		for (int i = 0; i < str1.length(); i++) {
			arr1[str1[i] - 'a']++; //update values in arr1 corresponding to the ascii values
		}
		for (int i = 0; i < str2.length(); i++) {
			arr2[str2[i] - 'a']++;
		}

		int del = 0;
		for (int i = 0; i < 26; i++) {
			del += abs(arr1[i] - arr2[i]); // calculate the extra character count at same index of both the arrays
		}

		cout << del << endl;
	}

}