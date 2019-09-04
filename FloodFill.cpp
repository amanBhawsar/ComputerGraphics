#include <conio.h>
#include <graphics.h>

void myFloodFill(int x,int y,int newCol,int oldCol){

    if(getpixel(x,y)!=oldCol){
        return;
    }
    putpixel(x,y,newCol);

    myFloodFill(x+1,y,newCol,oldCol);
    myFloodFill(x-1,y,newCol,oldCol);
    myFloodFill(x,y+1,newCol,oldCol);
    myFloodFill(x,y-1,newCol,oldCol);
}

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    int x=getmaxx()/2;
    int y=getmaxy()/2;
    int r=100;
    //rectangle(x-50,y-50,x+50,y+50);
    circle(x,y,r);
    myFloodFill(x,y,4,0);

    getch();
    closegraph();
    return 0;
}
