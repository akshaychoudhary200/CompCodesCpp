#include <iostream>
#include<string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

const int NUM = 5;

void display( );

int main() {

	vector<int> rating(NUM);
	vector<string> title(NUM);

	//cout<< rating.size(); //returns the size of the container
	
	cout << "enter " << NUM << "\n books name and their ratings(0-10) :\n";
	
	for (int i = 0; i < 5; i++) {
		cout << " enter title book no " << i + 1 <<":";
		getline(cin, title[i]);

		cout << " enter rating (0-10): ";
		cin >> rating[i];

		cin.get();
	}

	cout << "title" << " \t " << "rating" << endl;
	for (int i = 0; i < 5; i++) {
		cout << title[i]  << " \t " << rating[i] << endl;
	}

	title.push_back("new");
	rating.push_back(5);
	//push back add element at the end doing so we dont need to resize the vector 
	//it does automatically

	title.erase(title.begin(), title.begin() + 1); 
	//erase removes the element between two intervals the two range/interval is defined using iterator


	swap(rating[1], rating[2]);
	//normal swap method is used for swapping the element present in same container

	//rating.swap(rating[3],rating[4]) this wont work because it works on 2 containers v1.swap(v2)
	//this swap exchange the element between two container


	
	//sort(title.begin(),title.end());
	vector<int> ::iterator it1;
	sort(rating.begin(), rating.end());
	for (it1 = rating.begin(); it1 < rating.end(); it1++) {
		cout << *it1 << " ";
	}

	// begin() and end() returns the iterator which refers to the first element and end returns the 
	// iterator which refers to last element in the container
	// it is a object which points to the element inside the container
	
	cout << "-------------------------------------------------------- iterator output" << endl;
	vector<string>::iterator it;
	for (it = title.begin(); it < title.end(); it++) {
		cout << *it<<" ";
	}


	

}








