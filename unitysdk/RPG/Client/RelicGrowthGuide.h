#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_1_83288D0BBCD65F9B;
namespace RPG::Client { class AvatarData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x9D8C370)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x9D8C630)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0x9D8C690)
#define RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x9D8C480)
#define RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9D8C6F0)
#define RPG_CLIENT_RELICGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D8C430)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide_TypeDefinitionIndex = 52092;

	class RelicGrowthGuide : public ::System::Object
	{
	public:
		::Class_1_83288D0BBCD65F9B* _Factory; // 0x10
		::RPG::Client::AvatarData* _AvatarData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicGrowthGuide* Create(::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET))(avatarData);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* GetRecommendItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, callback);
		}
	};
}
