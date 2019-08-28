#include <graphics.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
	int maxx,maxy,r=150;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	maxx = (getmaxx() / 2)-150;
    maxy = (getmaxy() / 2);

    int i=200;
    while(i--){
        maxx++;
        line(maxx,maxy-r,maxx+r*cos(3.14/6),maxy+r*sin(3.14/6));
        line(maxx-r*cos(3.14/6),maxy+r*sin(3.14/6),maxx+r*cos(3.14/6),maxy+r*sin(3.14/6));
        line(maxx-r*cos(3.14/6),maxy+r*sin(3.14/6),maxx,maxy-r);

        line(maxx,maxy+r,maxx+r*cos(3.14/6),maxy-r*sin(3.14/6));
        line(maxx,maxy+r,maxx-r*cos(3.14/6),maxy-r*sin(3.14/6));
        line(maxx-r*cos(3.14/6),maxy-r*sin(3.14/6),maxx+r*cos(3.14/6),maxy-r*sin(3.14/6));

        circle(maxx, maxy, r);
        circle(maxx, maxy, r*sin(3.14/6));

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(maxx, maxy,WHITE);
        setfillstyle(SOLID_FILL,RED);
        floodfill(maxx, maxy+r-5,WHITE);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(maxx, maxy-r+5,WHITE);

        setfillstyle(SOLID_FILL,GREEN);
        floodfill(maxx+r-5, maxy,WHITE);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        floodfill(maxx-r+5, maxy,WHITE);

        setfillstyle(SOLID_FILL,BLUE);
        floodfill(maxx+10, maxy+r-5,WHITE);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        floodfill(maxx-10, maxy-r+5,WHITE);

        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(maxx-10, maxy+r-5,WHITE);
        setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        floodfill(maxx+10, maxy-r+5,WHITE);

        setfillstyle(SOLID_FILL,LIGHTRED);
        floodfill(maxx+r*sin(3.14/6),maxy-r*cos(3.14/6)+100,WHITE);
        setfillstyle(SOLID_FILL,MAGENTA);
        floodfill(maxx-r*sin(3.14/6),maxy-r*cos(3.14/6)+100,WHITE);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(maxx+r*sin(3.14/6),maxy+r*cos(3.14/6)-100,WHITE);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(maxx-r*sin(3.14/6),maxy+r*cos(3.14/6)-100,WHITE);
        delay(200);
        cleardevice();
    }
	getch();
	closegraph();
	return 0;
}
