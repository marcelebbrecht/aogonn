/**
 * AOGONN - Approach on genetic optimized neural network
 * Copyright 2019 Marcel Ebbrecht <marcel.ebbrecht@googlemail.com
 * 
 * Database export to plain file
 */

/**
 * global includes
 */
#include <pqxx/pqxx>

namespace aogonn {
    namespace data {

        /**
         * class for database export to plain file
         */
        class database {
        public:
            void export_training();
            void export_test();
        };
    }
}