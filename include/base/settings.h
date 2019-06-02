/**
 * AOGONN - Approach on genetic optimized neural network
 * Copyright 2019 Marcel Ebbrecht <marcel.ebbrecht@googlemail.com
 * 
 * Accessing system settings
 */

/**
 * global includes
 */
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <libconfig.h++>

namespace aogonn {
    namespace base {

        /**
         * class for accessing system configuration
         */
        class settings {
        private:
            libconfig::config_t cfg, *config;

        public:
            settings();
            std::string getSettingString(std::string name);
        };
    }
}