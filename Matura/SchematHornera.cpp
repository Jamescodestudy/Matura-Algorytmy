#include "Connect.h"
#include "Tools.h"

float horner(int stopien, vector<float> wsp, float x)
{
	if (stopien == 0) return wsp[0];
	else return horner(stopien - 1, wsp, x)*x + wsp[stopien];
}