#include "libtreefacts.h"
#include "ascii-colours.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef __unix__
    #define windows 0
    #define unix 1
    
    #define CURL_COMMAND "curl"
    #define CAT "cat"
    #define TEMP_RES "/tmp/temp-res.json"
#elif defined(_WIN32) || defined(WIN32)
    #define windows 1
    #define unix 0
    
    #define CURL_COMMAND "curl.exe"
    #define CAT "type"
    #define TEMP_RES "\%Temp\%/temp-res.json"
#endif

#define URL "https://treefacts-server.mrowllers.repl.co"

void TreeFacts_RandomFact() {
    char command[128];

    snprintf(command, 128, "%s%s%s%s%s", CURL_COMMAND, " ", URL, "/fact/random -o ", TEMP_RES);

    system(command);

    char outputCommand[128];

    snprintf(outputCommand, 128, "%s%s%s", CAT, " ", TEMP_RES);

    system(outputCommand);
}

void TreeFacts_TodayFact() {
    char command[128];

    snprintf(command, 128, "%s%s%s%s%s", CURL_COMMAND, " ", URL, "/fact -o ", TEMP_RES);

    system(command);

    char outputCommand[128];

    snprintf(outputCommand, 128, "%s%s%s", CAT, " ", TEMP_RES);

    system(outputCommand);
}

void TreeFacts_Fact(int day) {
    char command[128];

    snprintf(command, 128, "%s%s%s%s%d%s%s", CURL_COMMAND, " ", URL, "/fact/day/", day, " -o ", TEMP_RES);

    system(command);

    char outputCommand[128];

    snprintf(outputCommand, 128, "%s%s%s", CAT, " ", TEMP_RES);

    system(outputCommand);
}

void TreeFacts_FactFromIndex(unsigned int index) {
    char command[128];

    snprintf(command, 128, "%s%s%s%s%d%s%s", CURL_COMMAND, " ", URL, "/fact/", index, " -o ", TEMP_RES);

    system(command);

    char outputCommand[128];

    snprintf(outputCommand, 128, "%s%s%s", CAT, " ", TEMP_RES);

    system(outputCommand);
}