// Example usage for GPS_Tracker library by Mr1070.

#include "GPS_Tracker.h"

// Initialize objects from the lib
GPS_Tracker gPS_Tracker;

void setup() {
    // Call functions on initialized library objects that require hardware
    gPS_Tracker.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    gPS_Tracker.process();
}
