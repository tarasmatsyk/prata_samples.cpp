#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string delimiter = "done";
	string word;
	int word_count = 0;

	cout << "Please do not type the word done ): ";
 	cin >> word;

	// while loop to read each word. test condition checks if "done" is entered	
	while (word != delimiter)
	{
		word_count++;
		cin >> word;
	}

	cout << "You gave me " << word_count << " words" << endl; 
	return 0;
}
