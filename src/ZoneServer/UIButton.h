/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_UIBUTTON_H
#define ANH_ZONESERVER_UIBUTTON_H

#include "Utils/typedefs.h"
#include "UIElement.h"

//================================================================================

class UIButton : public UIElement
{
	public:

		UIButton(){}
		UIButton(uint32 id,BString name,bool enabled = true,BString text = "", bool three = false);
		virtual ~UIButton();

		BString			getName(){ return mName; }
		void			setName(BString name){ mName = name; }

		BString			getText(){ return mText; }
		void			setText(BString text){ mText = text; }
		
		bool			getEnabled(){ return mEnabled; }
		void			setEnabled(bool e){ mEnabled = e; }

		virtual uint32	getPropertyCount();

		virtual void	addMessageData();

	private:

		BString	mName;
		BString	mText;
		bool	mEnabled;
		bool	m3B;
};

#endif


