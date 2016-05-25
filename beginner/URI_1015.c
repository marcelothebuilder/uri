#include <stdio.h>
#include <math.h>

/*
	https://www.urionlinejudge.com.br/judge/en/problems/view/1015

	Read the four values corresponding to the x and y axes of two points in the plane,
	p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four
	decimal places after the comma, according to the formula:

	Distance = https://urionlinejudge.r.worldssl.net/gallery/images/problems/UOJ_1015.png

	# Input #

		The input file contains two lines of data. The first one contains two double values:
		x1 y1 and the second one also contains two double values with one digit after the
		decimal point: x2 y2.

	# Output #

		Calculate and print the distance value using the provided formula, with 4 digits after
		the decimal point.

*/

struct point
{
	double x;
	double y;
};

int main(int argc, char const *argv[])
{
	struct point a;
	struct point b;

	scanf("%lf %lf", &a.x, &a.y);
	scanf("%lf %lf", &b.x, &b.y);
	
	double distance = sqrt( pow(b.x - a.x, 2) + pow(b.y - a.y, 2) );

	printf("%.4f\n", distance);

	return 0;
}