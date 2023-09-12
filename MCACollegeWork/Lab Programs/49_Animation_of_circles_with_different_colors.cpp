
/*9. WAP to draw animation using increasing circles filled
     with different colors and patterns. */

#include<graphics.h>  
#include<conio.h>  
int main()  
{  
    int gd=DETECT, gm, i, x, y;  
    initgraph(&gd, &gm, NULL);  
    x=getmaxx()/3;  
    y=getmaxy()/3;  
    setbkcolor(BLACK);  
    setcolor(WHITE);  
    for(i=1;i<=8;i++)  
          {  
        setfillstyle(i,i+1);  
        delay(20);  
        circle(320,240, i*20); 
        if(i==7)
        break;
        floodfill(320-2+i*20,240,WHITE); 
        delay(20); 
    }  
    getch();  
    closegraph();  
}  