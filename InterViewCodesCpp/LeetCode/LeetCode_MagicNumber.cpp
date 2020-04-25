//#include <iostream>
//using namespace std;
//int main() {
//	int num = 0;
//
//	cin >> num;
//
//	int res = magicNumber(num);
//
//	if (res) {
//		cout << "yes" << endl;
//	}
//	else {
//		cout << "false" << endl;
//	}
//
//}
//
//int magicNumber(int num) {
//	int newnum = 0, ld = 0;
//
//	if (newnum == 1) {
//		return true;
//	}
//	else {
//		ld = num % 10;
//		num = num / 10;
//		newnum = newnum + (ld) * (ld);
//		return magicNumber(num);
//	}
//	
//}