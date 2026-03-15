#include "clickEvent.h"

ClickEvent clickEvent_create(uint16_t character, unsigned long time, uint8_t *returnCode){
    Key key = key_create(character, returnCode);

    ClickEvent event;
    event.key = key;
    event.bornTime = time;
    event.state = CREATED;

    return event;
}