// Labka 5 
#include <iostream>
using namespace std;
int main()
{
    int* pa = new int;
	*pa = 7;
	int* ptx = pa;

	cout << *pa << endl;
	cout << pa << endl;

	delete pa;
	pa = 0;
	cout << pa << endl << *ptx << endl;
	return 0;
}
