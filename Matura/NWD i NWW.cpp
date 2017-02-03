#include "Connect.h"
#include "Tools.h"

LL NWD(LL a,LL b)
{
	while (a!=b)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}

LL NWD_req(LL a, LL b)
{
	if (a == b) return a;
	else if (a > b) return NWD_req(a - b, b);
	else return NWD_req(a, b - a);
}

LL NWD2(LL a, LL b)
{
	while (b != 0)
	{
		LL r = a%b;
		a = b;
		b = r;
	}
	return a;
}

LL NWD2_req(LL a, LL b)
{
	if (b == 0) return 0;
	else return NWD2_req(b, a%b);
}

LL NWW(LL a, LL b)
{
	return (a*b) / NWD(a, b);
}
