#include "vida.h"

USING_NS_CC;

Sprite *vida::createVida(int vida,int posicionx,float anx, float any)
{   
	
    auto barravida = Sprite::create("hp2.png");   // Create it
	barravida->setPosition(posicionx, 200);
	
	barravida->setAnchorPoint(Vec2(anx, any));
	barravida->setScaleX(vida);
	
	return barravida;

	}
	