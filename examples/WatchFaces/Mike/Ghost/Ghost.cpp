#include "Ghost.h"

Ghost::Ghost(){} 


void Ghost::drawCentered(String text, int y2) {
    int16_t  x1, y1;
    uint16_t w1, h1;

    display.getTextBounds(text, 0, 0, &x1, &y1, &w1, &h1);
    display.setCursor(100-w1/2,y2+h1/2);
    display.print(text);
}

void Ghost::drawWatchFace() { //override this method to customize how the watch face looks
    int16_t  x1, y1;
    uint16_t w, h;
    String textstring;
    
    display.drawBitmap(0, 0, ghostImage, DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_WHITE);
    
    display.setFont(&Montserrat_Medium20pt7b);
    textstring = currentTime.Hour;
    textstring += ":";
    if (currentTime.Minute < 10){
    textstring += "0";
    }
    textstring += currentTime.Minute;
    display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
    display.setCursor(100-w/2, 195);
    display.print(textstring);  

} // end function
