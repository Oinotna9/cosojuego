#include "anubis.h"

USING_NS_CC;

Sprite *anubis::createAnimation(int numeron, bool load)
{   
	 
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
	 
	
	auto cacher = SpriteFrameCache::getInstance();
	cacher->addSpriteFramesWithFile("anoobisSpritesheet.plist");
	
	
	auto someSprite = Sprite::createWithSpriteFrameName("anoobis1.png");

	Vector<SpriteFrame*> frames;
	for (int i = 1; i < 2; i++)
	{
		std::stringstream ss;
		ss << "anoobis" << i << ".png";
		frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
	}
	// play the animation
	Animation* anim1 = Animation::createWithSpriteFrames(frames, 0.2f);
	//asomeSprite->runAction(Animate::create(anim1));


	if (load == true){

		if (numeron==1){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 4; i <= 7; i++)
			{
				std::stringstream ss;
				ss << "anoobis" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.05f);
				someSprite->setPosition(260, 100);

				// create a few actions.
			
				auto canim = Repeat::create(Animate::create(anim),5);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);

		}
		if (numeron==2){
			// load all the animation frames into an array
			Vector<SpriteFrame*> frames;
			for (int i = 8; i <= 12; i++)
			{
				std::stringstream ss;
				ss << "anoobis" << i << ".png";
				frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
			}
						// play the animation
				Animation* anim = Animation::createWithSpriteFrames(frames, 0.3f);
				someSprite->setPosition(260, 100);

				// create a few actions.
			
				auto canim = Animate::create(anim);

				auto repite = Repeat::create(Animate::create(anim1),99999);

				// create a sequence with the actions and callbacks
				auto seq = Sequence::create(canim, repite, nullptr);

				// run it
				someSprite->runAction(seq);

			}
	}

	else{
		//if (numeron==2){
				// load all the animation frames into an array
				Vector<SpriteFrame*> frames;
				for (int i = 2; i <= 3; i++)
				{
					std::stringstream ss;
					ss << "anoobis" << i << ".png";
					frames.pushBack(cacher->getSpriteFrameByName(ss.str()));
				}
							// play the animation
					Animation* anim = Animation::createWithSpriteFrames(frames, 0.2f);
					someSprite->setPosition(260, 100);

					// create a few actions.
			
					auto canim = Animate::create(anim);

					auto repite = Repeat::create(Animate::create(anim1),99999);

					// create a sequence with the actions and callbacks
					auto seq = Sequence::create(canim, repite, nullptr);

					// run it
					someSprite->runAction(seq);

		//}
		
	}
	
	if (numeron == 0){

		
			someSprite->setPosition(260, 100);	
			someSprite->runAction(RepeatForever::create(Animate::create(anim1)));
			

	}
	
	
	return someSprite;
	
	}


