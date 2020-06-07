//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/	/*Update Signal*/
    {" ",          "vpn",           5,      6},
    {"  ",        "weather",    3600,      5},
    {" ",          "internet",      5,      4},
    {" ",          "volume",        1,     10},
    {"  ",        "cpu",          10,     18},
    {"  ",        "memory",       10,     14},
    {" ",          "battery",       5,      3},
    {"  ",        "clock",        60,      1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
