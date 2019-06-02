/**
 * AOGONN - Approach on genetic optimized neural network
 * Copyright 2019 Marcel Ebbrecht <marcel.ebbrecht@googlemail.com
 * 
 * Main programm
 */

/**
 * global includes
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

/**
 * local includes
 */
#include "base/system.h"
#include "base/constants.h"
#include "base/settings.h"
#include "messages/program.h"

//#include <libconfig.h++>

/**
 * namespace declaration
 */
using namespace aogonn;
//using namespace libconfig;
using namespace std;

/**
 * Main program
 * @param argc cli arguments count
 * @param argv array of cli argument
 * @return program exit code
 */
int main(int argc, char** argv) {
    /* check wheter debug is enabled */
#ifdef DEBUG
    cout << endl << "Debug mode is enabled" << endl << endl;
#endif
    
    /* print program header */
    cout << endl << MESSAGE_PROGRAM_NAME << " " << SYSTEM_VERSION << 
            " - " << MESSAGE_PROGRAM_TITLE << endl << endl;
    
    /* check arguments and run according subroutine */
    if ( argc < 2 ) {
        cout << MESSAGE_PROGRAM_ARGS_NEEDED << endl << endl;
        cout << MESSAGE_PROGRAM_HELP << endl << endl;
        return(EXIT_FAILURE);
    }
    
    /* load needed controllers */
    base::system system;
    base::settings settings;
    
    
    /* initialize on startup */
    system.prepare();
//    cout << settings.getSettingString("Test");
    
    /* exit when everything went fine */
    return(EXIT_SUCCESS);
}