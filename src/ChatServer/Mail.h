/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_CHATSERVER_MAIL_H
#define ANH_CHATSERVER_MAIL_H

#include "Utils/typedefs.h"


//======================================================================================================================

class Mail
{
	friend class ChatManager;
	friend class ChatMessageLib;

	public:

		Mail(){ mAttachments = BString(BSTRType_Unicode16,2048); }
		~Mail(){}

		uint32	getId(){ return mId; }
		void	setId(uint32 id){mId = id; }

		BString	getSender(){ return mSender; }
		void	setSender(const BString sender){ mSender = sender; }

		BString	getReceiver(){ return mReceiver; }
		void	setReceiver(const BString receiver){ mReceiver = receiver; }

		BString	getSubject(){ return mSubject; }
		void	setSubject(const BString subject){ mSubject = subject; }

		BString	getText(){ return mText; }
		void	setText(const BString text){ mText = text; }

		uint32	getTime(){ return mTime; }
		void	setTime(uint32 time){ mTime = time; }

		uint8	getStatus(){ return mStatus; }
		void	setStatus(uint8 status){ mStatus = status; }

		BString	getAttachments(){ return mAttachments; }
		void	setAttachments(const BString attachments){ mAttachments = attachments; }

		uint32	getAttachmentSize(){ return mAttachmentSize; }
		void	setAttachmentSize(uint32 size){ mAttachmentSize = size; }

	private:

		uint32	mId;
		BString	mSender;
		BString	mReceiver;
		BString	mSubject;
		BString	mText;
		BString	mAttachments;
		uint32	mAttachmentSize;
		uint32	mTime;
		uint8	mStatus;
		char	mAttachmentRaw[2048];
};

#endif

