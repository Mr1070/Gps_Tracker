#pragma once

/* GPS_Tracker library by Mr1070
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class GPS_Tracker
{
public:
  /**
   * Constructor
   */
  GPS_Tracker();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
