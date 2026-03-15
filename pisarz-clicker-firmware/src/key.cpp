#include "key.h"
#include "lut.h"

Key key_create(uint16_t character, uint8_t *returnCode){
    Key key;
    *returnCode = 0;

    // Lookup table must be inserted here instead of line of if statements
    if(character == 'a'){
        //key.driver = &servoDriver;
        //key.channel = servoChannelLUT['a'-33];
        key.dir = LEFT;
    }
    else if(character == 'b'){
        //key.driver = &servoDriver;
        //key.channel = servoChannelLUT['b'-33];
        key.dir = LEFT;
    }

    key.driver = getServoDriverFromLUT(character, returnCode);
    key.channel = getServoChannelFromLUT(character, returnCode);

    return key;
}