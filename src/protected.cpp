#include "../include/main.hpp"
#include <string.h>

int loadProtectedCode(BYTE **mc)
{
    BYTE c[] = {
        0x06, 0x01, 0x19, 0x00, 0x00, 0x0B, 0x11, 0x00, 0x00, 0x00, 
        0x00, 0x0B, 0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
        0x01, 0x0B, 0x08, 0x00, 0xEC, 0x50, 0x41, 0x53, 0x53, 0x00, 
        0x46, 0x41, 0x49, 0x4c, 0x45, 0x44, 0x00
    };
    *mc = new BYTE[sizeof(c)/sizeof(c[0])];

    memcpy(*mc, c, sizeof(c)/sizeof(c[0]));
    return sizeof(c)/sizeof(c[0]);
}