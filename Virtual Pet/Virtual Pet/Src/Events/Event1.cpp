#include "..\..\Inc\Events\Event1.h"
#include<iostream>

Event1::Event1 () {
    
}

Event1::~Event1 () {
}

void Event1::startEvent(){
    std::cout << "It works!";
    isActivated = true;
}

void Event1::endEvent(){

}

bool Event1::isEventComplete(){
    if (isComplete)
        return true;
    else
        return false;
}

bool Event1::isEventActivated(){
    if (isActivated)
        return true;
    else
        return false;
}