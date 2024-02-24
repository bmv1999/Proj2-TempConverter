#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int tempF, tempC;
	int five = 5, nine = 9, thirtyTwo = 32;

cout << setfill('-') << setw(6) << "-" << "Temperature Conversion Calculator" << setfill('-') <<  setw(6) << "-" << endl;
	cout << "Enter temperature in Fahrenheit: ";
	cin >> tempF;

	_asm
	{
		mov eax, tempF;			// eax = tempF
		sub eax, thirtyTwo;			// eax = tempF - 32
		imul five;				// eax = 5 * (tempF - 32)
		idiv nine;				// eax = (5 * (tempF - 32)) / 9
		mov tempC, eax;			// tempC = eax
	}

	cout << tempF << char(248) <<"F is " << tempC << char(248) << "C" << endl;
	
	return 0;
 }
