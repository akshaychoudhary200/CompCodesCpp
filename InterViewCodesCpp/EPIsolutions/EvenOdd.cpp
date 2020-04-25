#include<iostream>
#include<algorithm>
#include<vector>
#include "EvenOdd.h"
using namespace std;

void evenOdd(vector<int>& V_ptr) {
	//vector<int>& v = V_ptr;

	int start = 0, end = V_ptr.size() - 1;
	
	while (start < end) {
		if ( V_ptr[start]%2==0) {
			++start;
		}
		else {
			swap(V_ptr[start], V_ptr[end--]);
		}
	}
}

int main() {
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	evenOdd(v);

	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}

}