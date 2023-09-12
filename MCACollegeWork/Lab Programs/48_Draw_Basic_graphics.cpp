

/* 48. WAP to draw basic graphics construction like Line,
       Circle ,Arc, Ellipse and Rectangle */
#include<graphics.h>
#include<stdio.h>   
int main(){
    int gd=DETECT,gm; 
    char ch[100] ;
    initgraph (&gd,&gm, NULL);  
    setbkcolor(BLACK);
    setcolor(GREEN);  
    
    printf("\t\t\t\n\nLINE");
    line(70,40,190,40);  
    printf("\t\n\n\n\nRECTANGLE");  
    rectangle(70,110,215,165);  
    printf("\t\t\t\n\n\n\nARC");  
    arc(120,200,180,0,30);  
    printf("\t\n\n\n\nCIRCLE");  
    circle(120,270,30);  
    printf("\t\n\n\n\nECLIPSE");  
    ellipse(120,350,0,360,30,20);  
    getch(); 
  
}  