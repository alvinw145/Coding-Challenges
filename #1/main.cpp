#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

/*
BEST SOLUTION
Time Complexity: O(N)
Space Complexity: O(N)
*/
char checkForRecurring(string text){

	unordered_map<char, int> letters;
	for(unsigned int i=0; i<text.length(); ++i){
		char letter = text[i];
		if(letters.find(letter) != letters.end()){
			return text[i];
		}
		else{
			letters[letter];
		}
	}

	return '\0';
}

int main(int argc, char **argv){

	if(argc != 2){
		cout << "Error: Need to provide a string" << endl;
		cout << "Usage: <string>" << endl;
		return 1;
	}

	string check_dup = argv[1];
	char dup_letter = checkForRecurring(check_dup);

	cout << "Word: " << check_dup << endl;
	if(dup_letter == '\0'){
		cout << "No Recurring Letter" << endl;
	}
	else{
		cout << "Recurring Letter: " << dup_letter << endl;
	} 

	return 0;
}

/*
Time Complexity: O(N^2)
Space Complexity: O(1)
*/
// char checkForRecurring(string text){

// 	for(unsigned int i=0; i<text.length(); ++i){
// 		char letter = text[i];
// 		if(letters.find(letter) != letters.end()){
// 			return text[i];
// 		}
// 		else{
// 			letters[letter];
// 		}
// 	}

// 	return '\0';
// }

// int main(int argc, char **argv){

// 	if(argc != 2){
// 		cout << "Error: Need to provide a string" << endl;
// 		cout << "Usage: <string>" << endl;
// 		return 1;
// 	}

// 	string check_dup = argv[1];
// 	char dup_letter = checkForRecurring(check_dup);

// 	cout << "Word: " << check_dup << endl;
// 	if(dup_letter == '\0'){
// 		cout << "No Recurring Letter" << endl;
// 	}
// 	else{
// 		cout << "Recurring Letter: " << dup_letter << endl;
// 	} 

// 	return 0;
// }