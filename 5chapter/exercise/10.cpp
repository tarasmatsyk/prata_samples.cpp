/*

	 Write a program using nested loops that asks the user to enter a value for the
	 number of rows to display. It should then display that many rows of asterisks, with
	 one asterisk in the first row, two in the second row, and so on. For each row, the
	 asterisks are preceded by the number of periods needed to make all the rows
	 display a total number of characters equal to the number of rows.A sample run
	 would look like this:
	 Enter number of rows: 5
	 ....*
	 ...**
	 ..***
	 .****
 *****

*/
#include <iostream>

int main()
{
	using namespace std;

	int length;
	cout << "Please enter number of characters in a row" << endl;
	cin >> length;

	char *row = new char[length];

	for(int i = 0; i < length; i++) {
		int asterix = length - i;

		for(int j = 0; j < length; j++) {
			if(j < asterix - 1) {
				row[j] = '.';	
			} else {
				row[j] = '*';	
			}
		}

		cout << row << endl;
	}

	return 0;
}
