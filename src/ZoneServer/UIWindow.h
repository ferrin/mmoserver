/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_UIWINDOW_H
#define ANH_ZONESERVER_UIWINDOW_H

#include "Utils/typedefs.h"
#include "UIElement.h"

//================================================================================

class Message;
class PlayerObject;
class UICallback;

typedef std::vector<UIElement*>	Children;

//================================================================================

enum WindowQueryType
{
	Window_Query_NULL						=	0,
	Window_Query_Radioactive_Sample			=	1,
	Window_Query_Add_Schematic				=	2,

};


class WindowAsyncContainerCommand
{
public:

	WindowAsyncContainerCommand(WindowQueryType qt){ mQueryType = qt;}
	~WindowAsyncContainerCommand(){}

	WindowQueryType				mQueryType;


	uint64						PlayerId;
	uint64						ToolId;
	uint64						SchematicId;
	void*						CurrentResource;
	std::vector<uint64 >		SortedList;
};


class UIWindow : public UIElement
{
	public:

		UIWindow(UICallback* callback,uint32 id,uint8 windowType,const BString windowTypeStr,const int8* eventStr, void* container = NULL);
		virtual ~UIWindow();

		uint8			getWindowType(){ return mWindowType; }
		void			setWindowType(uint8 type){ mWindowType = type; }

		BString			getWindowTypeStr(){ return mWindowTypeStr; }
		void			setWindowTypeStr(const BString typeStr){ mWindowTypeStr = typeStr; }

		PlayerObject*	getOwner(){ return mOwner; }
		void			setOwner(PlayerObject* owner){ mOwner = owner; }

		uint64			getTimeOut(){ return mTimeOut; }
		void			setTimeOut(uint64 timeOut){ mTimeOut = timeOut; }

		BString			getEventStr(){ return mEventStr; }
		void			setEventStr(BString eventStr){ mEventStr = eventStr; }

		uint32			getChildrenPropertyCount();
		Children*		getChildren(){ return &mChildElements; }
		UIElement*		getChildById(uint32 id);
		void			addChild(UIElement* element){ mChildElements.push_back(element); }
		bool			removeChild(uint32 id);
		bool			removeChild(UIElement* element);

		void*			getAsyncContainer(){return mContainer;}

		virtual void	handleEvent(Message* message) = 0;
		virtual void	sendCreate() = 0;

		UICallback*		getCallback(){ return mUICallback; }
		void			setCallback(UICallback* callback){ mUICallback = callback; }

		BString			getOption3(){return mOption3;}
		BString			getOption4(){return mOption4;}

	protected:
		Children		mChildElements;
		BString			mEventStr;
		BString			mWindowTypeStr;
		PlayerObject*	mOwner;
		UICallback*		mUICallback;
		uint64			mTimeOut;
		uint8			mWindowType;
		void*			mContainer;

		BString			mOption3;
		BString			mOption4;
};

#endif


