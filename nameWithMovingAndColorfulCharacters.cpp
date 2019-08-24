#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	settextstyle(10, 0, 10);
	for(int i=0;;i++){
        setcolor((i)%15+1);
        outtextxy(getmaxx()/4,getmaxy()/3,"A");
        setcolor((i+1)%15+1);
        outtextxy(getmaxx()/4+90,getmaxy()/3,"M");
        setcolor((i+2)%15+1);
        outtextxy(getmaxx()/4+180,getmaxy()/3,"A");
        setcolor((i+3)%15+1);
        outtextxy(getmaxx()/4+270,getmaxy()/3,"N");
        delay(500);
	}
	getch();
	closegraph();
	return 0;
}
