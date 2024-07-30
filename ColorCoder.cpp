#include "ColorCoder.h"
#include "ColorPair.h"
namespace TeleCommuColorCoder 
{
    int numberOfMajorColors = sizeof(TelCoColorCoder::MajorColorNames) / sizeof(TelCoColorCoder::MajorColorNames[0]);
    int numberOfMinorColors = sizeof(TelCoColorCoder::MinorColorNames) / sizeof(TelCoColorCoder::MinorColorNames[0]);

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}
