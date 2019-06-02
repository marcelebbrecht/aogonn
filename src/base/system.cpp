/**
 * AOGONN - Approach on genetic optimized neural network
 * Copyright 2019 Marcel Ebbrecht <marcel.ebbrecht@googlemail.com
 * 
 * Basic system functions
 */

/**
 * local includes
 */
#include "base/system.h"

/**
 * namespace declaration
 */
using namespace aogonn;
using namespace base;
using namespace std;

/**
 * prepare anything for the run like create folders, tidy up, aso.
 */
void system::prepare() {
    // create directories
    mkdir("./logs", 0770);
    mkdir("./temp", 0770);
    mkdir("./data", 0770);
}