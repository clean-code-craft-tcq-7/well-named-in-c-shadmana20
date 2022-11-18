#include <stdio.h>
#include <assert.h>
#include "ColorCoding.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

static void ColorPairToString(const ColorPair* colorPair, char* buffer);
static int GetPairNumberFromColor(const ColorPair* colorPair);





