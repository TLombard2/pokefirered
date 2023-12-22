#include "global.h"
#include "random.h"

// The number 1103515245 comes from the example implementation
// of rand and srand in the ISO C standard.

u32 gRngValue;
u32 gRngValue2;

u16 Random(void)
{
    gRngValue = ISO_RANDOMIZE1(gRngValue);
    return gRngValue >> 16;
}

void SeedRng(u16 seed)
{
    gRngValue = seed;
}

u16 Random2(void)
{
    gRngValue2 = ISO_RANDOMIZE1(gRngValue2);
    return gRngValue2 >> 16;
}

void SeedRng2(u16 seed)
{
    gRngValue2 = seed;
}
