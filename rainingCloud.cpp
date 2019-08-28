#include <graphics.h>
#include <stdlib.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x=getmaxx()/2;
    int y=getmaxy()/2;
    setcolor(LIGHTBLUE);
    int i=1;
    while(1){
        i++;//this var is needed for lightening effect
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL,WHITE);
        arc(x-20,y,105,180,80);
        arc(x+20,y,0,75,80);
        arc(x,y-60,0,180,60);
        line(x-100, y, x+100, y);
        floodfill(x-10, y-10,LIGHTBLUE);
        //code for rain
        //int varLen = 100 + rand()%150;
        int thickness= rand()%10+3;
        int windSpeed = -50 + rand()%100;
        for(int z=-100;z<100;z+=thickness){
            setlinestyle(5, 0, 1);
            int temp = -100 + rand()%190+5;
            line(x+temp, y, x+temp+windSpeed, y+250);
            if(i%10==0){
                z+=10;
            }
        }

        if(i%10==0){
            //code for lightening
            outtextxy(getmaxx()/3 +25,getmaxy()/3 + 50,"LIGHTENING ALERT");
            int k=-60;
            int sx=x,sy=y;
            x=x+k;
            for(int z=0;z<3;z++){
                setcolor(WHITE);
                for(int p=0;p<10;p++){
                    line(x,y+10,x+p+15,y+100);
                    line(x+p+15,y+100,x+p,y+100);
                    line(x+p,y+100,x+30,y+200);
                }
                setcolor(LIGHTBLUE);
                x=x-k;
                delay(100);

            }
            x=sx;
            y=sy;
            delay(1000);
        }
        delay(100);
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
