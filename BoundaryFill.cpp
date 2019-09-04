#include <conio.h>
#include <graphics.h>

void myBoundaryFill(int x,int y,int fillCol,int boundaryCol){

    if(getpixel(x,y)!=boundaryCol && getpixel(x,y)!=fillCol){
        putpixel(x,y,fillCol);

        myBoundaryFill(x+1,y,fillCol,boundaryCol);
        myBoundaryFill(x-1,y,fillCol,boundaryCol);
        myBoundaryFill(x,y+1,fillCol,boundaryCol);
        myBoundaryFill(x,y-1,fillCol,boundaryCol);
    }
}

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int x=getmaxx()/2;
    int y=getmaxy()/2;
    int r=100;
    rectangle(x-50,y-50,x+50,y+50);
    //circle(x,y,r);
    myBoundaryFill(x,y,RED,WHITE);

    getch();
    closegraph();
    return 0;
}
