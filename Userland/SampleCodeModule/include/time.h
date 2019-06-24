#ifndef TIME_H
#define TIME_H

#define NULL 0

long int time();
void getAllTimes(int times[7]);
int getTimeUTC();
void setTimeUTC(int newUTC);
void printTime();

#endif