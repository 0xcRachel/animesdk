#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_0_16E4307DCC419505_618;
class Class_1_775F1B2D72B14BDD;
namespace RPG::Client { class AvatarData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x95051D0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x9505490)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0x95054F0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x95052E0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9505550)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x9505290)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide_TypeDefinitionIndex = 52087;

	class LightConeGrowthGuide : public ::System::Object
	{
	public:
		::Class_1_775F1B2D72B14BDD* _Factory; // 0x10
		::RPG::Client::AvatarData* _AvatarData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LightConeGrowthGuide* Create(::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET))(avatarData);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_618*>* GetRecommendItems(::System::Boolean excludeEquipped)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_618*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this, excludeEquipped);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, callback);
		}
	};
}
