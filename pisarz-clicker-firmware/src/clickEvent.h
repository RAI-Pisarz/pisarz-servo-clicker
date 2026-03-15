#ifndef CLICKEVENT_H
#define CLICKEVENT_H

#include "key.h"

typedef enum{
    EMPTY,
    CREATED,
    CLICKING,
    RETURNING,
    DONE
} clickEventState;

typedef struct{
    Key key;
    unsigned long bornTime;
    clickEventState state;

} ClickEvent;

ClickEvent clickEvent_create(uint16_t key, unsigned long time, uint8_t *returnCode);
void clickEvent_update(ClickEvent *event, unsigned long time);


#endif