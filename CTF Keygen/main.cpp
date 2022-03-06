#include <iostream>
#include <random>
#include <sstream>
using namespace std;



int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(65, 90);

	ostringstream oss;
	int key[14];

	unsigned int fesi = 0;
	unsigned int calcValue = 0;
	unsigned int fValue = 10000000;
	while (fValue >= 1000000)
	{
		for (int i = 0; i < 14; i++)
		{
			key[i] = distr(gen);

			cout << static_cast<char>(key[i]);
		}
		cout << endl << endl;

		fesi = 2 * key[7] + key[0] * key[1] * (key[2] - key[2] * key[0] * key[6] * key[5] * key[4] * key[3] * key[9] * key[8] * key[8]);

		calcValue = fesi / key[11] / key[12] / key[13] * key[2] * key[0] * key[1];
		fValue = calcValue - 148000000;

		cout << "fesi  " << fesi << endl << endl;
		cout << "calcValue  " << calcValue << endl << endl;
		cout << "fValue  " << fValue << endl << endl;

		if (fValue < 1000000)
			cout << "Key should Work" << endl;
		else
			cout << "Failed." << endl;
		cout << endl << endl;
	}

	
	
		
	return(0);
}