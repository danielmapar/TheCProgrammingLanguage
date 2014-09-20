/*
 ============================================================================
 Name        : 6.1-BasicsOfStructures.c
 Author      : Daniel Marchena Parreira
 Email       : danielmapar@gmail.com
 Date        : 26/07/2014
 Version     : 0.1
 Copyright   : GNU General Public License Version 2
 Description : Simple example
 ============================================================================
 */
#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

struct point {
	int x;
	int y;
};

struct rect {
	struct point pt1;
	struct point pt2;
};

struct point makepoint(int x, int y);
struct point addpoint(struct point p1, struct point p2);
struct rect canonrect(struct rect r);

/* canonrect: canonicalize coordinates of rectangle */
struct rect canonrect(struct rect r)
{
	struct rect temp;
	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);
	return temp;
}

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y)
{
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

/* addpoints: add two points */
struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

int main(void)
{

	struct point pt;
	struct rect screen;

	struct point middle;
	screen.pt1 = makepoint(0,0);
	screen.pt2 = makepoint(100, 100);
	middle = makepoint((screen.pt1.x + screen.pt2.x)/2,
	                   (screen.pt1.y + screen.pt2.y)/2);

	struct point new_point;
	screen.pt1.x = min(10,20);
	new_point = addpoint(screen.pt1, screen.pt2);

	printf("%d,%d\n", new_point.x, pt.y);

	return 0;
}
