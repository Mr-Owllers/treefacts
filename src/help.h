#ifndef _HELP_H
#define _HELP_H

typedef struct COMMAND_INFO {
    const char *NAME;
    const char *DESC;
    const char ALIAS;
} command_info_t;

#define HELP_C 6

#define HELP_MENU (command_info_t[]) {\
    { "help", "Displays this help menu", 'h' },\
    { "randomfact", "Get a randomfact", 'r' },\
    { "fact", "Gets today's fact", 'f' },\
    { "dayfact", "Gets the fact of the specified day", 'd' },\
    { "indexfact", "Gets a fact by index", 'i' },\
    { "fetch", "Fetches tree ASCII art", 'e' }\
}

#endif