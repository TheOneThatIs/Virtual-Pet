#include "..\..\Inc\Events\Event.h"


Event::Event () {
}

Event::~Event () {
}


void Event::startEvent () {
    isActivated = true;
}

void Event::endEvent () {
    isComplete = true;
}

bool Event::isEventActivated () {
    return isActivated;
}

bool Event::isEventComplete () {
    return isComplete;
}