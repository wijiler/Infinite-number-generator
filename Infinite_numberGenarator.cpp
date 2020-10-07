#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	while (counter<10)
	{
		cout << counter << endl;
		counter++;
	}

	do
	{
		cout << counter << endl;
		counter++;
	} while (counter>10);

}
