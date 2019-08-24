#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	int maxx,maxy,h;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	maxx = (getmaxx() / 2);
    maxy = (getmaxy() / 2);
    h=100;
	line(maxx-h/3, maxy+h/6, maxx-h/20, maxy);
    line(maxx+h/3, maxy+h/6, maxx+h/20, maxy);
    line(maxx+h/3, maxy+h/6, maxx, maxy-h);
    line(maxx-h/3, maxy+h/6, maxx, maxy-h);
    line(maxx-h/20, maxy+h, maxx-h/20, maxy);
    line(maxx+h/20, maxy+h, maxx+h/20, maxy);
    line(maxx+h/20, maxy+h, maxx-h/20, maxy+h);
	getch();
	closegraph();
	return 0;
}
