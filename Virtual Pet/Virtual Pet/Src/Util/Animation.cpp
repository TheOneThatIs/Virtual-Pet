#include "Util\Animation.h"
#include<iostream>

Animation::Animation () {}

Animation::Animation (String file_path, int frame_width, int frame_height, IntRect src_rect) {
	spritesheet = sprite_mangr.makeSprite (file_path);
	this->src_rect = src_rect;
	frame = IntRect (src_rect.left, src_rect.top, frame_width, frame_height);
	time = 0;
}


Animation::~Animation(){

}

void Animation::draw (RenderWindow *window, int x, int y) {
	spritesheet.setTextureRect (frame);
	sprite_mangr.draw (spritesheet, (float)x, (float)y, *window);
}

void Animation::update () {
	frame.left += frame.width;
	if (frame.left >= src_rect.left + src_rect.width) {//if animation is overran.
		frame.left = src_rect.left;
		frame.top += frame.height;
		if (frame.top >= src_rect.top + src_rect.height) {
			//if (is_looped)
				frame.top = src_rect.top;
				frame.left = src_rect.left;
		}
	}
}