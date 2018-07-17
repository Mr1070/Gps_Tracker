/* GPS_Tracker library by Mr1070
 */

#include "GPS_Tracker.h"

/**
 * Constructor.
 */
GPS_Tracker::GPS_Tracker()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void GPS_Tracker::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void GPS_Tracker::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void GPS_Tracker::doit()
{
    Serial.println("called doit");
}
