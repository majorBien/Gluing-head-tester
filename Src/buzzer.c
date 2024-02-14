

//shadoww7 14.02.2024


#include "buzzer.h"






void buzzerInit(void)
{
	HAL_TIM_PWM_Start(&htim15, TIM_CHANNEL_2); //inicjalizacja buzzera

}


void generatePulse(uint16_t freq, uint8_t octave)
{
	uint16_t autoreload_value =  freq * octave; //obliczamy wartość autoprzeładowania na podstawie częstotliwości CPU

	 __HAL_TIM_SET_AUTORELOAD(&htim15, autoreload_value);

	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, autoreload_value); // generujemy zadaną częstotliwość
}



void generateSound(uint16_t pitch,  uint8_t octave) //funkcja pozwala na generowanie zadanych dźwięków w zakresie dwóch oktaw
{


	generatePulse(pitch, octave);

}



















	/*
	//OKTAWA ROZKREŚLNA


	if(sound == 'C' && cross == 0 && octave == 1)
	{
		generatePulse(261.6);
	}

	if(sound == 'C' && cross == 1 && octave == 1)
	{
		generatePulse(277.2);
	}

	if(sound == 'D' && cross == 0 && octave == 1)
	{
		generatePulse(293.7);
	}

	if(sound == 'D' && cross == 1 && octave == 1)
	{
		generatePulse(311.1);
	}

	if(sound == 'E' && cross == 0 && octave == 1)
	{
		generatePulse(329.6);
	}

	if(sound == 'F' && cross == 0 && octave == 1)
	{
		generatePulse(349.2);
	}

	if(sound == 'F' && cross == 1 && octave == 1)
	{
		generatePulse(370.0);
	}

	if(sound == 'G' && cross == 0 && octave == 1)
	{
		generatePulse(392.0);
	}

	if(sound == 'G' && cross == 1 && octave == 1)
	{
		generatePulse(415.3);
	}

	if(sound == 'A' && cross == 0 && octave == 1)
	{
		generatePulse(440.0);
	}

	if(sound == 'A' && cross == 1 && octave == 1)
	{
		generatePulse(466.2);
	}

	if(sound == 'H' && cross == 0 && octave == 1)
	{
		generatePulse(493.9);
	}


	//OKTAWA DWUKREŚLNA



	if(sound == 'C' && cross == 0 && octave == 1)
	{
		generatePulse(261.6);
	}

	if(sound == 'C' && cross == 1 && octave == 1)
	{
		generatePulse(277.2);
	}

	if(sound == 'D' && cross == 0 && octave == 1)
	{
		generatePulse(293.7);
	}

	if(sound == 'D' && cross == 1 && octave == 1)
	{
		generatePulse(311.1);
	}

	if(sound == 'E' && cross == 0 && octave == 1)
	{
		generatePulse(329.6);
	}

	if(sound == 'F' && cross == 0 && octave == 1)
	{
		generatePulse(349.2);
	}

	if(sound == 'F' && cross == 1 && octave == 1)
	{
		generatePulse(370.0);
	}

	if(sound == 'G' && cross == 0 && octave == 1)
	{
		generatePulse(392.0);
	}

	if(sound == 'G' && cross == 1 && octave == 1)
	{
		generatePulse(415.3);
	}

	if(sound == 'A' && cross == 0 && octave == 1)
	{
		generatePulse(440.0);
	}

	if(sound == 'A' && cross == 1 && octave == 1)
	{
		generatePulse(466.2);
	}

	if(sound == 'H' && cross == 0 && octave == 1)
	{
		generatePulse(493.9);
	}

	*/








