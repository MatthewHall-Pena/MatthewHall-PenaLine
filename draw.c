#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
    int x = x0;
    int y = y0;
    
    if(x1<x0){
      x=x1*1;
      x1=x0*1;
      x0=x*1;
      
      y=y1*1;
      y1=y0*1;
      y0=y*1;
    }
    
    int a = y1 - y0;
    int b = -1 *(x1 - x0);
	
    int signY=1;
    int bigY=0;
	
    if(a>-b){
      bigY = 1;
    }	

    if(y1<y0){
      signY=-1;
    }	

    if(bigY==0){

      int d = (2 * a) + b*signY;
      while(x <= x1){
		plot(s,c,x,y);
		if (d*signY > 0){
		  y+=signY;
		  d+=2*b*signY;
		}
		d += 2*a;
		x++;
	    }
    }
    else{
      int d = (2 * b)*signY + a;
      while(y*signY <= y1*signY){
		plot(s,c,x,y);
		if (d*signY < 0){
		  x++;
		  d+=2*a;
		}
		d += 2*b*signY;
		y+=signY;
      }
    }
}
