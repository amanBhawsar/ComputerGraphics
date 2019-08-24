#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
	int maxx,maxy,r;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	maxx = (getmaxx() / 2);
    maxy = (getmaxy() / 2)+100;

    r=maxx/2;
    int arr[7]={1,9,6,2,14,12,4};
    int oldR=r;
    for(int i=0;i<8;i++){
        setcolor(arr[i]);
        for(int j=0;j<8;j++){
            arc(maxx, maxy, 0, 180, r);
            r++;
        }
        delay(500);
    }
	getch();
	closegraph();
	return 0;
}
