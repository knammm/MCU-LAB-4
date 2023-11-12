/*
 * software_timer.h
 *
 *  Created on: Nov 12, 2023
 *      Author: olkmphy
 */


#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define NO_OF_COUNTERS	3
#define PERIOD			10

extern int timerFlag[NO_OF_COUNTERS];

void setTimer(int, int);

void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
