#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  clear_screen(s);
  
  draw_line(-25,0,-200,-100,s,c);
  draw_line(0,-25,-200,-300,s,c);
  draw_line(25,0,200,100,s,c);
  draw_line(0,25,200,300,s,c);
  draw_line(-25,0,-200,100,s,c);
  draw_line(0,25,-200,300,s,c);
  draw_line(25,0,200,-100,s,c);
  draw_line(0,-25,200,-300,s,c);

  draw_line(-200,0,200,0,s,c);
  draw_line(0,-200,0,200,s,c);

  display(s);
  save_extension(s, "lines.png");
}  
