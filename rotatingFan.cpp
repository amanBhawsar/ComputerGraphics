#include <graphics.h>
#include <conio.h>
using namespace std;
int main(){
        int gd = DETECT, gm;
        int maxx, maxy;
        int stAngle1 = -45, endAngle1 = 0, radius = 100;
        int stAngle2 =  135, endAngle2 = 180;
        initgraph(&gd, &gm, "C:\\TC\\BGI");
        maxx = getmaxx() / 2;
        maxy = getmaxy()/ 2;
        int stSpeed = 1;
        while(1){
                cleardevice();
                stAngle1 = (stAngle1 + stSpeed)%360;
                stAngle2 = (stAngle2 + stSpeed)%360;
                endAngle1 = (endAngle1 + stSpeed)%360;
                endAngle2 = (endAngle2 + stSpeed)%360;

                rectangle(maxx - 5, maxy - 5, maxx + 5, maxy + 150);
                setfillstyle(SLASH_FILL, rand() % 15);
                pieslice(maxx, maxy, stAngle1, endAngle1, radius);
                setfillstyle(SLASH_FILL, rand() % 15);
                pieslice(maxx, maxy, stAngle2, endAngle2, radius);

                if(stSpeed<=90){
                    stSpeed+=2;
                    outtextxy(getmaxx()/5,getmaxy()/5,"Speed of Rotation is Increasing");
                }else{
                    outtextxy(getmaxx()/5,getmaxy()/5,"Speed of Rotation is <<Maximum>>");
                }
                delay(100);
        }
        getch();
        closegraph();
        return 0;
}
