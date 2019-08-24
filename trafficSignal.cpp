#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	int maxx,maxy,left,right,top,bottom;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	maxx = (getmaxx() / 2);
    maxy = (getmaxy() / 2);
    left=maxx-maxx/6;
    top=maxy-maxy/2;
    right=maxx+maxx/6;
    bottom=maxy+maxy/2;

	rectangle(left, top, right, bottom);

	setfillstyle(SOLID_FILL,RED);
    circle(maxx, maxy-maxy/2+maxy/4, 25);
    outtextxy(maxx-20,maxy-maxy/2+maxy/4-10,"Stop");
    floodfill(maxx, maxy-maxy/2+maxy/4,WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);
    setcolor(WHITE);
    circle(maxx, maxy-maxy/2+2*maxy/4, 25);
    outtextxy(maxx-20,maxy-maxy/2+2*maxy/4-8,"Ready");
    floodfill(maxx, maxy-maxy/2+2*maxy/4,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    circle(maxx, maxy+maxy/2-maxy/4, 25);
    outtextxy(maxx-20,maxy+maxy/2-maxy/4-10,"Go");
    floodfill(maxx, maxy+maxy/2-maxy/4,WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(left+1,top+1,WHITE);
	getch();
	closegraph();
	return 0;
}
