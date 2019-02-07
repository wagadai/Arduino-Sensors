#include <DS1307.h>

/******************************************************
*	setup
/******************************************************/
void setup() {
	// Initilize Serial
    Serial.begin(9600);
    while (!Serial); 
    delay(200);
}

/******************************************************
*	loop
/******************************************************/
void loop() {
    struct m_time_t tm;
    // get time from DS1307
	Serial.println("Get Time From DS1307: ");
    DS1307.get(tm);
	Serial.print(tm.hour);
	Serial.print(":");
	Serial.print(tm.minute);
	Serial.print(":");
	Serial.print(tm.second);
	Serial.print("   -   ");
	Serial.print(tm.year);
	Serial.print("-");
	Serial.print(tm.month);
	Serial.print("-");
	Serial.print(tm.day);
	Serial.print("-");
	Serial.println(tm.wday);
    delay(5000);
}