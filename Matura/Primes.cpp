#include "Connect.h"
#include "Tools.h"

void Factorial(LL number, VLL& data)
{
	LL prime = 2;
	while (number > 1)
	{
		while (number % prime == 0)
		{
			data.push_back(prime);
			number /= prime;
		}
		prime++;
	}
}

bool ifPrime(LL number)
{
	for (int i = 2; i*i < number; i++)
	{
		if (number%i == 0) return false;
	}
	return true;
}