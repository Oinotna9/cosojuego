#ifndef __VIDA_H__
#define __VIDA_H__

#include "cocos2d.h"

class vida:public cocos2d::Node
{
public:
	static cocos2d::Sprite*createVida(int vida,int posicionx, float anx, float any);
	CREATE_FUNC(vida);
	
private:
	
};

#endif // __VIDA_H__
