#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char delimiter[5] = "done";
	char word[200];
	int word_count = 0;

	cout << "Please do not type the word done ): ";
 	cin >> word;

	while (strcmp(delimiter, word))
	{
		word_count++;
		cin >> word;
	}

	cout << "You gave me " << word_count << " words" << endl; 
	return 0;
}
