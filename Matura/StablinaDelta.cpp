#include "Tools.h"
#include "Connect.h"

void delta(double a, double b, double c)
{
	double x1, x2;
	if (a == 0)
	{
		cout << "Nie jest to równanie kwadratowe";
		return;
	}
	double delta = b*b - (4*a*c);
	if (delta < 0)
	{
		cout << "Równanie nie ma rozwi¹zañ";
		return;
	}
	if (delta == 0)
	{
		cout << "Równanie ma jeden pierwiastek podwójny: ";
		x1 = (-b/(2*a));
		cout << "x1,2 = "<<x1;
	}
	double delta_sqrt = sqrt(delta);
	if (delta > 0)
	{
		if (b > 0)
		{
			x1 = (-b - delta_sqrt) / 2 * a;
			x2 = (c / (2 * x1));
		}
		else
		{
			x2 = (-b + delta_sqrt) / 2 * a;
			x1 = (c / (a* x2));
		}
		cout << "Równanie ma dwa pierwiastki: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}