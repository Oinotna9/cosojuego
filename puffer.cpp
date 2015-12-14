#include "puffer.h"

USING_NS_CC;

Sprite *puffer::createAnimation(int numeron)
{   
	 
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
	 
	
	auto cacher = SpriteFrameCache::getInstance();
	cacher->addSpriteFramesWithFile("puffer.plist");



	auto someSprite = Sprite::createWithSpriteFrameName("puffer1.png");

	Vector<SpriteFrame*> frames;
	for (int i = 1; i <= 4; i++)
	{
		std::stringstream ss;
		ss << "puffer" << i << ".png";
		frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
	}
	// play the animation
	Animation* anim1 = Animation::createWithSpriteFrames(frames, 0.2f);
	//asomeSprite->runAction(Animate::create(anim1));

	if (numeron==1){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 5; i <= 8; i++)
			{
				std::stringstream ss;
				ss << "puffer" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.2f);
				someSprite->setPosition(400, 150);

				// create a few actions.
			
				auto canim = Animate::create(anim);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);

	}

	if (numeron==2){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 21; i <= 28; i++)
			{
				std::stringstream ss;
				ss << "puffer" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.2f);
				someSprite->setPosition(400, 150);

				// create a few actions.
			
				auto canim = Animate::create(anim);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);


	}
	if (numeron==3){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 18; i <= 20; i++)
			{
				std::stringstream ss;
				ss << "puffer" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.2f);
				someSprite->setPosition(400, 150);

				// create a few actions.
			
				auto canim = Animate::create(anim);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);


	}
	if (numeron== 4){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 9; i <= 12; i++)
			{
				std::stringstream ss;
				ss << "puffer" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.2f);
				someSprite->setPosition(400, 150);

				// create a few actions.
			
				auto canim = Animate::create(anim);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);


	}

	if (numeron== 5){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 13; i <= 15; i++)
			{
				std::stringstream ss;
				ss << "puffer" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.2f);
				someSprite->setPosition(400, 150);

				// create a few actions.
			
				auto canim = Animate::create(anim);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);


	}



	if (numeron ==0){

		
			someSprite->setPosition(400, 150);
			someSprite->runAction(RepeatForever::create(Animate::create(anim1)));
			

	}
	

	
	
	return someSprite;

	}





