/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_ACTIVE_CONVERSATION_H
#define ANH_ZONESERVER_ACTIVE_CONVERSATION_H

#include <vector>

#include "Utils/typedefs.h"
#include "Conversation.h"

//=============================================================================

class NPCObject;
class PlayerObject;

//=============================================================================

class ActiveConversation
{
	public:

		ActiveConversation(Conversation* baseConv,PlayerObject* player,NPCObject* npc);
		~ActiveConversation();

		ConversationPage*		getCurrentPage(){ return mCurrentPage; }
		void					setCurrentPage(uint32 pageLink);
		void					prepareFilteredOptions();

		void					updateCurrentPage(uint32 selectId);
		bool					preProcessConversation();
		void					postProcessCurrentPage();
		

		ConversationOptions*	getFilteredOptions(){ return &mSelectOptionMap; }

		NPCObject*				getNpc(){ return mNpc; }

		int32					getDI(){ return mDI; }
		BString					getTTStfFile(){ return mTTStfFile; }
		BString					getTTStfVariable(){ return mTTStfVariable; }
		BString					getTTCustom(){ return mTTCustom; }
		uint64					getTTId(){ return mTTId; }
		BString					getTOStfFile(){ return mTOStfFile; }
		BString					getTOStfVariable(){ return mTOStfVariable; }
		BString					getTOCustom(){ return mTOCustom; }
		uint64					getTOId(){ return mTOId; }
		
	private:

		// void				_prepareFilteredOptions();

		Conversation*		mBaseConversation;
		PlayerObject*		mPlayer;
		NPCObject*			mNpc;

		ConversationPage*	mCurrentPage;

		ConversationOptions	mSelectOptionMap;

		int32				mDI;
		BString				mTTStfFile;
		BString				mTTStfVariable;
		BString				mTTCustom;
		uint64				mTTId;
		BString				mTOStfFile;
		BString				mTOStfVariable;
		BString				mTOCustom;
		uint64				mTOId;
};

//=============================================================================

#endif

