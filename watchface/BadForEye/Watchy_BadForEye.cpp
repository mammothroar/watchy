#include "Watchy_BadforEye.h"

const unsigned char *numbers [10] = {numbers0, numbers1, numbers2, numbers3, numbers4, numbers5, numbers6, numbers7, numbers8, numbers9};

BadForEye::BadForEye(){} //constructor

void BadForEye::drawWatchFace(){
    display.fillScreen(GxEPD_BLACK);
    display.drawBitmap(0, 0, window, DISPLAY_WIDTH, DISPLAY_HEIGHT, GxEPD_WHITE);

    //Hour
    display.drawBitmap(50, 10, numbers[currentTime.Hour/10], 39, 80, GxEPD_BLACK); //first digit
    display.drawBitmap(110, 10, numbers[currentTime.Hour%10], 39, 80, GxEPD_BLACK); //second digit
    

    //Minute
    display.drawBitmap(50, 110, numbers[currentTime.Minute/10], 39, 80, GxEPD_BLACK); //first digit
    display.drawBitmap(110, 110, numbers[currentTime.Minute%10], 39, 80, GxEPD_BLACK); //second digit
}
