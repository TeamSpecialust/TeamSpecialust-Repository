#include <iostream>
using namespace std;



int Multi(int x, int y)
{
	return x*y;

}

int Add(int x, int y)
{
	return x + y;

}


int Sub(int x, int y)
{
	return x - y;

}

int main()
{
	cout << "err KAGA" << endl;


	

	cout <<"200 + 100 = "<< Add(200 , 100) << endl;

	cout << "100-200 = " << Sub(100, 200) << endl;


	cout << "100*200" << Multi(100, 200);

	for (;;);

	return 0;
}