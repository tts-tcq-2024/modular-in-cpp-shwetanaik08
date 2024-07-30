#ifndef COLORCODER_H
#define COLORCODER_H

#include <iostream>
#include <assert.h>


namespace TelCoColorCoder 
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
	
    extern const char* MinorColorNames[];

    class ColorPair;

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);

}
#endif // COLORCODER_H
