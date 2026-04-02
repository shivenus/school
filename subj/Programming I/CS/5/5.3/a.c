#include <stdio.h>
#include <math.h>

double input (char prompt[]);

int main(void) {
	double a, b;

	a = input("enter number to square root\n");
	printf("square root of %.1f is %.1f\n\n", a, sqrt(a));

/*  to remove decimal values if result is whole
	double b = sqrt(a);
		if (b == (long)b) { // this is a type casting (long)b
		printf("square root of %.0f is %.0f\n\n", a, b);	
		}
		else {
		printf("square root of %.3f is %.3f\n\n", a, b);
		} */
				
//	cbrt doesn't work with tcc. A complete compiler is required (like gcc or msvc/cl).
/*	a = input("enter number to cube root\n");
	printf("cube root of %.1f is %.1f\n\n", a, cbrt(a)); */

	a = input("enter power of e (Euler's number, 2.71828)\n");
	printf("exponential function of %.1f is %.5f\n\n", a, exp(a));

	a = input("enter number to get logarithm, base e (Euler's number, 2.71828)\n");
	printf("logarithm of %.6f is %.1f\n\n", a, log(a));

	a = input("enter number to get logarithm, base 10\n");
	printf("logarithm(base 10) of %.1f is %.1f\n\n", a, log10(a));

	a = input("enter number to get its absolute value\n");
	printf("absolute value of %.1f is %.1f\n\n", a, fabs(a));

	a = input("enter number to round to a bigger, whole value\n");
	printf("%.1f ceils to %.1f\n\n", a, ceil(a));

	a = input("enter number to round to a smaller, whole value\n");
	printf("%.1f floors to %.1f\n\n", a, floor(a));
	
	a = input("exponential calculation\nenter base > ");
	b = input("enter exponent > ");
	printf("%.0f to the power of %.0f is %.1f\n\n", a, b, pow(a, b));

	a = input("remainder calculation\nenter value one > ");
	b = input("enter value two > ");
	printf("%.3f modulo %.3f is %.3f\n\n", a, b, fmod(a, b));

	a = input("trigonometry: enter value to compute its sine\n");
	printf("sine of %.1f is %.1f\n\n", a, sin(a));

	a = input("trigonometry: enter value to compute its cosine\n");
	printf("cosine of %.1f is %.1f\n\n", a, cos(a));

	a = input("trigonometry: enter value to compute its tangent\n");
	printf("tangent of %.1f is %.1f\n\n", a, tan(a));	
}

double input(char prompt[]) {
	double val;
	printf("%s", prompt);
	scanf("%lf", &val);
	return val;
}
