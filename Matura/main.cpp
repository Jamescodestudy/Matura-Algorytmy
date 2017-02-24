#include "Connect.h"
#include "Tools.h"
#include<iostream>
using namespace std;

int main()
{
	if (ifAnagram("ASDF","AFSS")) cout << "Tak";
	else cout << "Nie";
	getchar(); getchar();
	return 0;
}