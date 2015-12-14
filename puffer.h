#ifndef __PUFFER_H__
#define __PUFFER_H__

#include "cocos2d.h"

class puffer:public cocos2d::Node
{
public:
	static cocos2d::Sprite*createAnimation(int numeron);
	CREATE_FUNC(puffer);
	
private:
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;
};

#endif // __PUFFER_H__
