#ifndef __ANUBIS_H__
#define __ANUBIS_H__

#include "cocos2d.h"

class anubis:public cocos2d::Node
{
public:

	static cocos2d::Sprite* createAnimation(int numeron,bool load);
	

	CREATE_FUNC(anubis);
private:
	
};

#endif // __ANUBIS_H__
