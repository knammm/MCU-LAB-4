/*
 * software_timer.c
 *
 *  Created on: Nov 12, 2023
 *      Author: olkmphy
 */


#include "software_timer.h"
int timerFlag[NO_OF_COUNTERS] = {0, 0, 0};
int counter[NO_OF_COUNTERS] = {0, 0, 0};

void setTimer(int index, int duration){
	counter[index] = duration/PERIOD;
	timerFlag[index] = 0;
}

void timerRun(){
	for (int i = 0; i < NO_OF_COUNTERS; i++){
		if (counter[i] > 0){
			counter[i]--;
			if (counter[i] <= 0){
				timerFlag[i] = 1;
			}
		}
	}
}
