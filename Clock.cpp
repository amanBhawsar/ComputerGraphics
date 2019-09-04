#include <graphics.h>
#include <conio.h>
#include <math.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int x=getmaxx()/2;
    int y=getmaxy()/2;
    int r=100;
    float secAngle = 3*3.14/2;
    float minAngle = 3*3.14/2;
    float hourAngle= 3*3.14/2;

    int i=0;
    while(1){
        circle(x, y, r);
        i++;
        //second hand code
        setfillstyle(EMPTY_FILL, 5);
        line(x,y,x+r*cos(hourAngle),y+r*sin(hourAngle));
        line(x,y,x+r*cos(minAngle),y+r*sin(minAngle));
        line(x,y,x+r*cos(secAngle),y+r*sin(secAngle));
        //pieslice(x, y, secAngle, secAngle, r-3);
        //pieslice(x, y,hourAngle, hourAngle, r-5);
        //pieslice(x, y, minAngle, minAngle, r-8);
        secAngle=(secAngle+6*3.14/180);
        if(i%60==0){    //increase min hand by 6 degree
            line(x,y,x+r*cos(minAngle),y+r*sin(minAngle));
            //pieslice(x, y, minAngle, minAngle, r-8);
            minAngle = (minAngle+(6*3.14)/180);
        }
        if(i%7200==0){    //increase hour hand by 0.5 degree each min (3600 seconds)
            line(x,y,x+r*cos(hourAngle),y+r*sin(hourAngle));
            //pieslice(x, y,hourAngle, hourAngle, r-5);
            hourAngle = (hourAngle+(0.5*3.14)/180);
        }
        delay(1000);
        cleardevice();
    }

    getch();
    closegraph();

	return 0;
}
