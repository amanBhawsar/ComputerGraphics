#include <conio.h>
#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    int midx, midy, x, y, r, dp;
    initgraph(&gd, &gm,NULL);
    r = 100;
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    dp = 1 - r;
    x = 0, y = r;
    do{
        putpixel(midx + x, midy + y, WHITE);
        putpixel(midx - x, midy + y, WHITE);
        putpixel(midx + x, midy - y, WHITE);
        putpixel(midx - x, midy - y, WHITE);
        putpixel(midx + y, midy + x, WHITE);
        putpixel(midx - y, midy + x, WHITE);
        putpixel(midx + y, midy - x, WHITE);
        putpixel(midx - y, midy - x, WHITE);
        delay(100);
        x = x + 1;
        if(dp<0) {
            dp=dp + 2 * x + 3;
        }else{
            y=y - 1;
            dp=dp + 2 * (x - y) + 5;
        }
    }while(x < y);
    getch();
    closegraph();
    return 0;
}
