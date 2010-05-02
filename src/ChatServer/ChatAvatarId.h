/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_CHATAVATARID_CHANNEL_H
#define ANH_CHATAVATARID_CHANNEL_H

#include "Utils/typedefs.h"

class ChatSystemAvatar;
class Player;

#define gSystemAvatar ChatSystemAvatar::GetSingleton()

//======================================================================================================================

class ChatAvatarId
{
public:

	ChatAvatarId(){};
	~ChatAvatarId(){};

	BString			getGalaxy() { return mGalaxy; }
	void			setGalaxy(const BString name) { mGalaxy = name; }

	Player*			getPlayer() { return mPlayer; }
	void			setPlayer(Player* player);
	void			setPlayer(const BString player);

	virtual BString	getLoweredName() { return mName; }

	BString	getPath();

protected:
	BString		mGalaxy;
	BString		mName;
	Player*		mPlayer;
};

//======================================================================================================================

class ChatSystemAvatar : public ChatAvatarId
{
public: 

	~ChatSystemAvatar(){}
	static ChatSystemAvatar* GetSingleton();

	BString getLoweredName();

private:

	ChatSystemAvatar() : ChatAvatarId() {};

	static bool					mInsFlag;
	static ChatSystemAvatar*	mSingleton;
};

#endif
