#include <stdio.h>
#include <graphics.h>
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
    int maxx = getmaxx()/2;
    int maxy =getmaxy()/2;
    int r=100;
    int x=0, y=r;
    int d = 3-2*r;
    while (y >= x++){
        if (d > 0){
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        putpixel(maxx+x, maxy+y, WHITE);
        putpixel(maxx-x, maxy+y, WHITE);
        putpixel(maxx+x, maxy-y, WHITE);
        putpixel(maxx-x, maxy-y, WHITE);
        putpixel(maxx+y, maxy+x, WHITE);
        putpixel(maxx-y, maxy+x, WHITE);
        putpixel(maxx+y, maxy-x, WHITE);
        putpixel(maxx-y, maxy-x, WHITE);
        delay(100);
    }
    getch();
	closegraph();
    return 0;
}
