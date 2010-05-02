/*
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_CSROBJECT_H
#define ANH_ZONESERVER_CSROBJECT_H

class Category;
class Comment;
class SubCategory;

typedef std::vector<SubCategory*> SubCategoryList;

//======================================================================================================================

class Category
{
public:

	Category(){}
	~Category(){}

	SubCategoryList* GetSubCategories() { return &mSubCategories; }

	uint32 mId;
	BString mName;

private:
	SubCategoryList mSubCategories;

};

//======================================================================================================================

class SubCategory
{
public:

	SubCategory(){}
	~SubCategory(){}

	uint32			mId;
	BString			mName;
};

//======================================================================================================================

class Article
{
public:

	Article(){}
	~Article(){}

	uint32			mId;
	BString			mTitle;
	BString			mBody;
};

//======================================================================================================================

class Ticket
{
public:

	Ticket(){}
	~Ticket(){}

	uint32		mId;
	BString		mPlayer;
	uint32		mCategoryId;
	uint32		mSubCategoryId;
	BString		mComment;
	BString		mInfo;
	BString		mHarrasingUser;
	BString		mLanguage;
	uint8		mBugReport;
	uint8		mClosed;
	uint8		mActivity;
	uint64		mLastModified;
	CommentList mCommentList;
};

//======================================================================================================================

class Comment
{
public:
	Comment(){}
	~Comment(){}

	BString	mText;
	uint32	mId;
	uint32	mTicketId;
	BString  mAuthor;
};

#endif
