/*
---------------------------------------------------------------------------------------
This source file is part of swgANH (Star Wars Galaxies - A New Hope - Server Emulator)
For more information, see http://www.swganh.org


Copyright (c) 2006 - 2010 The swgANH Team

---------------------------------------------------------------------------------------
*/

#ifndef ANH_ZONESERVER_RESOURCETYPE_H
#define ANH_ZONESERVER_RESOURCETYPE_H

#include "Utils/typedefs.h"


//=============================================================================

class ResourceType
{
	friend class ResourceManager;

	public:

		ResourceType();
		~ResourceType();

		uint32	getId(){ return mId; }
		void	setId(uint32 id){ mId = id; }
		BString	getName(){ return mName; }
		void	setName(const BString name){ mName = name; }
		BString	getDescriptor(){ return mDescriptor; }
		void	setDescriptor(const BString desc){ mDescriptor = desc; }
		uint16	getCategoryId(){ return mCatId; }
		void	setCategoryId(uint16 cat){ mCatId = cat; }
		BString	getModel(){ return mModel; }
		void	setModel(const BString model){ mModel = model; }
		BString	getContainerModel();
		BString	getTypeName(){ return mTypeName; }
		void	setTypeName(const BString name){ mTypeName = name; }
		uint32	getCategoryBazaar(){ return mCategoryBazaar; }
		void	setCategoryBazaar(uint32 cat) { mCategoryBazaar = cat; }
		BString	getResourceType() { return mResourceType; }
		void	setResourceType(const BString type) { mResourceType = type; }

	private:

		uint32	mId;
		BString	mName;
		BString	mTypeName;
		BString	mDescriptor;
		BString	mModel;
		uint16	mCatId;
		uint32  mCategoryBazaar;
		BString	mResourceType;
};

//=============================================================================

#endif

