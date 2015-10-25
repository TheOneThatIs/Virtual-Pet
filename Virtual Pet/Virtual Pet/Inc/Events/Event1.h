#pragma once
#include "Events\Event.h"

class Event1: public zg::Event{
    bool isActivated, isComplete;
public:
    Event1 ();
    ~Event1 ();

    void startEvent () override;
    void endEvent () override;

    bool isEventComplete () override;
    bool isEventActivated () override;
};