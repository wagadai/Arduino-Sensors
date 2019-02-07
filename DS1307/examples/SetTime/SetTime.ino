#include <DS1307.h>

/******************************************************
*	setup
/******************************************************/
void setup() {
    Serial.begin(9600);
    while (!Serial); 
    delay(200);
    
	// Set time for DS1307
	struct m_time_t tm;
    tm.second = 3;
    tm.minute = 41;
    tm.hour = 10;
    tm.day = 6;
    tm.wday = 1;
    tm.month = 1;
    tm.year = 2019;
    DS1307.set(tm);
	Serial.println("Setting Done!");
}

/******************************************************
*	loop
/******************************************************/
void loop() {
	// do loop task
}