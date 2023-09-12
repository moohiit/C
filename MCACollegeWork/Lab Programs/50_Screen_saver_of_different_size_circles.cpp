
/*50. WAP to make screen saver that display 
      different size circles filled with colors at 
      random places. */

#include<graphics.h>  
#include<stdlib.h>
int main()  
{  
    int gd=DETECT, gm, i, x, y,xx,yy;  
    char ch[100];
    initgraph(&gd, &gm, NULL);  
    x=getmaxx();  
    y=getmaxy();  
    setbkcolor(BLACK);  
    //setcolor(WHITE);
    
    while(!kbhit())
    {  
       
        setfillstyle(rand()%14,rand()%10); 
        //setcolor(WHITE);
         
        circle(xx=rand()%x,yy=rand()%y,rand()%100); 
        delay(200); 
        floodfill(xx,yy,getmaxcolor());  
        delay(100); 
    }  
    getch();  
}  