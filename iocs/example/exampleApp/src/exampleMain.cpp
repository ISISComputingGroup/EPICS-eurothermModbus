/* This file was automatically generated on Mon 04 Nov 2019 13:15:51 GMT from
 * source: /dls_sw/work/common/hir12111/src/eurothermModbus/etc/makeIocs/example.xml
 * 
 * *** Please do not edit this file: edit the source file instead. ***
 *  */
#include "epicsExit.h"
#include "epicsThread.h"
#include "iocsh.h"

int main(int argc, char *argv[])
{
    if(argc>=2) {
        iocsh(argv[1]);
        epicsThreadSleep(.2);
    }
    iocsh(NULL);
    epicsExit(0);
    return 0;
}

