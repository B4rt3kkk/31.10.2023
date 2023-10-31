#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	do
	{
		if (i == 1) cout.width(5);
		int j = 1;
		do {
			cout.width(5); cout << i * j;
			j++;
		} while (j <= 10);
		cout.width(5); cout << endl;
		i++;
	} while (i <= 10);
	/*
	int i = 1;
	while (1 <= 10)
	{
		if (i == 1) cout.width(5);
		int j = 1;
		while (j <= 10) {
			cout.width(5); cout << i * j;
			j++;
		}
		cout.width(5); cout << endl;
		i++;
	}


	
	for (int i = 1; i <= 10; i++)
	{
		if (1 == 1) cout.width(5); cout << i << " " << " ";

		for (int j = 1; j <= 10; j++) {

			cout.width(5);  cout << i * j;
		}
		cout.width(5);  cout << endl;
	}
	*/

	return 0;
}
