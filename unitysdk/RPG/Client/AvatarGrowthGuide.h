#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_1_A517D819F24703FC;
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x8CF5960)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x8CF5C20)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x8CF5A70)
#define RPG_CLIENT_AVATARGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x8CF5A20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide_TypeDefinitionIndex = 52081;

	class AvatarGrowthGuide : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* _AvatarData; // 0x10
		::Class_1_A517D819F24703FC* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarGrowthGuide* Create(::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::AvatarGrowthGuide*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET))(avatarData);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}
	};
}
