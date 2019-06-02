/**
 * AOGONN - Approach on genetic optimized neural network
 * Copyright 2019 Marcel Ebbrecht <marcel.ebbrecht@googlemail.com
 * 
 * Accessing system configuration
 */

/**
 * local includes
 */
#include "base/settings.h++"

/**
 * namespace declaration
 */
using namespace aogonn;
using namespace base;
using namespace std;
using namespace libconfig;

settings::settings() {
    config = &cfg;
    config_init(config);
}


//settings::~settings() {
//    delete config;
//}

/**
 * get setting as a string
 * @param name distinguished name of setting variable
 * @return setting value as a string
 */
std::string settings::getSettingString(std::string name) {
//    config.readFile("config/aogonn.cfg");
    return "AAAA";
}