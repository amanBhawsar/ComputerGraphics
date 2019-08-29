#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd=DETECT,gm;
    int i=100, x1, y1, x2, y2;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    float temp=0;
    x1=getmaxx()/2;
    y1=getmaxy()/2;
    temp=y1;
    float m=0.5;
    putpixel(x1,y1,WHITE);
    while(i--){
        x1+=1;
        temp=temp+m;
        if(temp-floor(temp)>0.5)
            y1=ceil(temp);
        else
            y1=floor(temp);
        putpixel(x1,y1,WHITE);
        delay(100);
    }
    closegraph();
    return 0;
}
