#include "HeightmapAsyncContainer.h"

class ArtisanHeightmapAsyncContainer: public HeightmapAsyncContainer
{
public:
	ArtisanHeightmapAsyncContainer(HeightMapCallBack* callback, HeightmapCallbackTypes type) : HeightmapAsyncContainer(callback, type)
	{
	}
	BString resourceName;
	CurrentResource* resource;
	SurveyTool* tool;
	PlayerObject* playerObject;
};
