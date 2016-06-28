#include<iostream>

int main(void)
{
	using namespace std; 		
	const char * months[] = 
	{
		"January", 
		"February", 
		"March",
		"April", 
		"May", 
		"June", 
		"July", 
		"August", 
		"September", 
		"October", 
		"November", 
		"December"
	};

	const int years[2] = 
	{
		2014,
		2015
	};

	int sales[2][12];
	int sum = 0;

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			cout << "Sold on " << months[i] << " in " << years[j] << " equals ";
			cin >> sales[j][i];
			sum += sales[j][i];
		}
	}
	
	cout << "Total income = " << sum << endl;
	return 0;
}
