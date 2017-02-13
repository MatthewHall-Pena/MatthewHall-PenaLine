#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {

	int x = x0;
    int y = y0;

    int a = y1 - y0;
    int b = -1 *(x1 - x0);
    int d = (2 * a) + b;

    while(x <= x1){
        plot(s,c,x,y);

        if (d > 0){
            y++;
            d+=2*b;
        }

        d += 2*a;
        x++;
    }
}

