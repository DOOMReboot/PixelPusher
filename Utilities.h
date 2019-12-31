#pragma once
#include <cstdint>
#include <string>
#include <iostream>


int32_t e(int32_t result, std::string errorMessage)
{
	if (result)
		std::cout << errorMessage;

	return result;
}

inline uint32_t ARGB(uint32_t red, uint32_t green, uint32_t blue, uint32_t alpha)
{
	return (alpha << 24) | (red << 16) | (green << 8) | blue;
}


//Marsaglia's xorshf generator (Fast Random Function)
static uint32_t s_randX = 123456789;
static uint32_t s_randY = 362436069;
static uint32_t s_randZ = 521288629;

inline uint32_t FastRand(void) 
{   
    uint32_t t;

    s_randX ^= s_randX << 16;
    s_randX ^= s_randX >> 5;
    s_randX ^= s_randX << 1;

    t = s_randX;
    s_randX = s_randY;
    s_randY = s_randZ;
    s_randZ = t ^ s_randX ^ s_randY;

    return s_randZ;
}