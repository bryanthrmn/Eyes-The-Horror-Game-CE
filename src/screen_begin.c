////////////////////////////////////////
// { Eyes - The horror game } { v.0.1 }
// Author: Shadow
// License: MIT license
// Description:
////////////////////////////////////////

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printText(const char *text, uint8_t x, uint8_t y);
int main(void)
{
    /* Initialize some strings */
    const char* Eyes= "Eyes - The Horror Game";
    const char* Intro="THIS VIDEO MAY CONTAIN FLASHING IMAGES AND TRIGGER SEIZURES IN THOSE WITH PHOTOSENSITIVE EPILESPY.";
    const char* Intro2="VIEWER DISCRETION IS ADVISED."
    const char* Cond="I UNDERSTAND, SKIP NEXT TIME
    
    os_ClrHome();
    textcolor (WHITE);
    printText(Eyes, 2, 3);
    while (!os_GetCSC());
    return 0;
}

setPaletteBackgroundColor(Qt::black)
void printText(const char *text, uint8_t xpos, uint8_t ypos)
{
    os_SetCursorPos(ypos, xpos);
    os_PutStrFull(text);
}

