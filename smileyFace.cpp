#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	int maxx,maxy,r;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	maxx = (getmaxx() / 2);
    maxy = (getmaxy() / 2);
    r=100;
	circle(maxx, maxy, r);
	circle(maxx, maxy, r/6);
	circle(maxx-r/2, maxy-r/3, r/4);
	circle(maxx+r/2, maxy-r/3, r/4);
    arc(maxx, maxy+r/4, 180, 360, r/2);
	getch();
	closegraph();
	return 0;
}
