#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    { "sb-nettraf",    1,      5 },
    { "sb-internet",   5,      6 },
	  { "sb-cpu",		    10,      7 },
    { "sb-memory",     1,      8 },
    { "sb-volume",     0,      9 },
    { "sb-datetime",  1,     10 },
};

const unsigned short blockCount = LEN(blocks);
