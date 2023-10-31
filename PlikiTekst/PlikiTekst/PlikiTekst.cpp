#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream plik;
	string linia;
	int suma = 0;
	int sumaP = 0;
	int sumaNP = 0;
	plik.open("dane.txt", ios::in);

	if (plik.good() == true) {
		cout << "MOM FILE CHOPIE" << endl;
		while (getline(plik,linia))
		{
			if (stoi(linia) % 2 == 0){
				sumaP = sumaP + stoi(linia);
			}
			else {
				sumaP = sumaP = stoi(linia);
			}
		}
		cout << "Suma liczb parzystych = " << sumaP << endl;
		cout << "Suma liczb nieparzystych = " << sumaNP << endl;
	}
	else {
		cout << "NI MOM FILE CHOPIE" << endl;
	}
	plik.close();

	return 0;
}
