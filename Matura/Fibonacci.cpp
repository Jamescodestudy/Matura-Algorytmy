#include "Connect.h"
#include "Tools.h"
using namespace std;

void FibVector(vector<LL>& fib, int howMany)
{
	LL a = 1, b = 1, temp;
	fib.push_back(a);
	fib.push_back(b);
	for (int i=3;i<=howMany;i++)
	{
		temp = b;
		b = b + a;
		a = temp;
		fib.push_back(b);
	}
}

void PirintVectorFib(vector<LL>& fib)
{
	for (int i = 0; i < fib.size(); i++)
	{
		cout << fib[i] << endl;
	}
}

LL givenFib(int whichOne)
{
	LL a = 1, b = 1, temp;
	for (int i = 3; i <= whichOne; i++)
	{
		temp = b;
		b += a;
		a = temp;
	}
	return b;
}