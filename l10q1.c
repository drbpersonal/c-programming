#include<graphics.h>
main()
{
    int gd=DETECT,gm,x,y;
    int graph(&gd,&gm,x,y);
    x=getmaxx()/2;
    y=getmaxy()/2;
    circle(100,100,50);
    floodbill(100,100,RED);
    outtextxy(200,200,"fig.circle with radius 50 at 100,100");
    line(0,0,300,200);
    setcolor(BLUE);
    arc(x,y,0,135,50);
    closegraphics();
    return 0;
}