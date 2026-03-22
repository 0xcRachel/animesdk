#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_507;
namespace RPG::Client { class IActivityQuestRewardData; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x8FBD480)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8FBD3D0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBD350)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityQuestRewardDataFactory_TypeDefinitionIndex = 48957;

	class CommonActivityQuestRewardDataFactory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_506* _TabGroupInfoFactory; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_506* tabGroupInfoFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_OFFSET))(this, tabGroupInfoFactory);
		}

		::System::Void _ctor_1(::Class_0_16E4307DCC419505_507* tabInfoFactory)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_507*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY__CTOR_1_OFFSET))(this, tabInfoFactory);
		}

		::RPG::Client::IActivityQuestRewardData* Create(::System::UInt32 activityRewardID)
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDDATAFACTORY_CREATE_OFFSET))(this, activityRewardID);
		}
	};
}
