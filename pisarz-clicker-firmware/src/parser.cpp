#include "parser.h"

#include "clickEventTab.h"

void parser_readByte(uint8_t incomingByte){
    clickEventTab_addEvent(incomingByte);
}