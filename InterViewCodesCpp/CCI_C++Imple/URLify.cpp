#include <iostream>
#include<string>
using namespace std;
int main() {
	char str[100];
	cin.get(str,20);
	

	int countSpace = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' ) {
			countSpace++;
		}
	}


	int index = countSpace * 2 + strlen(str);
	int newLen = index;
	index = index - 1;
	
	for (int i = strlen(str) - 1 ; i >= 0; i--) {
		if (str[i] != ' ' ) {
			str[index--] = str[i];
			
		}
		else {
			str[index--] = '0';
			str[index--] = '2';
			str[index--] = '%';
		}
	}

	for (int i = 0; i < newLen; i++) {
		cout << str[i];
	}
	//cout << str;

}

/*
 * Cracking the coding interview Edition 6
 * Problem 1.3 URLify --> Replace all the spaces in a string with '%20'. 
 * Assumption : We have enough space to accomodate addition chars
 * Preferebly in place
 */

//#include <iostream>
//#include <cstring>
//
///*
// * Function : urlify
// * Args     : string long enough to accomodate extra chars + true len 
// * Return   : void (in place transformation of string)
// */
//
//void urlify(char *str, int len)
//{
//    int numOfSpaces = 0;
//    int i = 0, j = 0;
//    for ( i = 0; i < len; ++i ) {
//        if (str[i] == ' ') {
//            ++numOfSpaces;
//        }
//    }
//    
//    int extendedLen  = len + 2 * numOfSpaces;
//    i = extendedLen - 1;
//    for( j = len - 1; j >= 0; --j ) {
//        if ( str[j] != ' ' ) {
//           str[i--] = str[j];
//        } else {
//            str[i--] = '0';
//            str[i--] = '2';
//            str[i--] = '%';
//        }
//    }
//}
//
//int main()
//{
//    char str[] = "Mr John Smith     ";                       //String with extended length ( true length + 2* spaces)
//    std::cout << "Actual string   : " << str << std::endl;
//    urlify(str, 13);                                        //Length of "Mr John Smith" = 13
//    std::cout << "URLified string : " << str << std::endl;
//    return 0;
//}
