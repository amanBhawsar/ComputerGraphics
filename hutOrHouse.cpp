#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	int maxx,maxy,h;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	maxx = (getmaxx() / 2);
    maxy = (getmaxy() / 2);
    h=200;
	line(maxx-h/2, maxy, maxx+h/2, maxy);
	line(maxx-h/2, maxy+h, maxx+h/2, maxy+h);
	line(maxx-h/2, maxy, maxx-h/2, maxy+h);
	line(maxx+h/2, maxy, maxx+h/2, maxy+h);
	line(maxx-h/2, maxy, maxx, maxy-(2*h)/3);
	line(maxx+h/2, maxy, maxx, maxy-(2*h)/3);
    line(maxx-h/5, maxy+h/2, maxx+h/5, maxy+h/2);
    line(maxx-h/5, maxy+h/2, maxx-h/5, maxy+h);
    line(maxx+h/5, maxy+h/2, maxx+h/5, maxy+h);
	getch();
	closegraph();
	return 0;
}
