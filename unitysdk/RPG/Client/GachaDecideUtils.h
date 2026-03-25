#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaItemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaDecideData; }

#define RPG_CLIENT_GACHADECIDEUTILS_CREATEDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x975CCA0)
#define RPG_CLIENT_GACHADECIDEUTILS_ISFEATUREOPEN_OFFSET UNITYSDK_OFFSET(0x975CD00)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDecideUtils_TypeDefinitionIndex = 52204;

	class GachaDecideUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseGachaDecideData* CreateDecideData(::RPG::GameCore::GachaItemType gachaItemType)
		{
			return ((::RPG::Client::BaseGachaDecideData*(*)(::RPG::GameCore::GachaItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEUTILS_CREATEDECIDEDATA_OFFSET))(gachaItemType);
		}

		static ::System::Boolean IsFeatureOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADECIDEUTILS_ISFEATUREOPEN_OFFSET))();
		}
	};
}
