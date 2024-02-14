

//shadoww7 14.02.2024



#include "stm32l4xx_hal.h"
#include "main.h"
#include "math.h"
#include "gpio.h"
#include "tim.h"

enum pitch {
	C = 262,
	Cis = 277,
	D = 294,
	Dis = 311,
	E = 330,
	F = 349,
	Fis = 370,
	G = 392,
	Gis = 415,
	A = 440,
	Ais = 466,
	H = 494,

};


void buzzerInit(void);

void generatePulse(uint16_t freq, uint8_t octave);

void generateSound(uint16_t pitch, uint8_t octave);

