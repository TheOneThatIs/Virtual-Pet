#include "..\..\Inc\States\Play.h"


Play::Play(){

}


Play::~Play(){

}

void Play::init(){
    //Store events
    eventManager.addEvent (&event1);
    
	
    //Check save files
    //if new game:
    eventManager.v_events.back ()->startEvent();//Starts Event1...Temperary...
}

void Play::destroy (){

}

void Play::handleEvents (sf::Event event){

}

void Play::update(){
	
}

void Play::pause(){

}

void Play::resume(){

}

void Play::draw(sf::RenderWindow *window){
	
}