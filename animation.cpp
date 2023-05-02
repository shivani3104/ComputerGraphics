#include<iostream>
#include<graphics.h>
#include<stdlib.h>
using namespace std;

int main()
{ int gdriver= DETECT,gmode;
   int x,y,i,j;
        initgraph(&gdriver,&gmode,NULL);
        for(i=
        0;i<getmaxy();i++)
        {
            line(0,450,getmaxx(),450);
            line(15+i,450 ,45+i,420);
            line(45+i,450,15+i,420);
            rectangle(10+i,360,50+i,420);
            circle(30+i,345,15);
            line(30+i,370,70+i,410);
            line(50+i,390,70+i,370);
            line(70+i,370,70+i,320);
            arc(70+i,320,180,0,70);
            line(0+i,320,140+i,320);
            for(j=0;j<getmaxy();j++)
            x=rand()%getmaxx();
            y=rand()%getmaxy();
            line(x, y, x+4,y+4);
        }
            delay(10);
            cleardevice(); 
            delay(10);
            closegraph();
            return 0;
}