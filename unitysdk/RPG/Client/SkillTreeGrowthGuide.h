#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_1_15CE52DCB05275B5;
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x9F89320)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x9F89620)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x9F89470)
#define RPG_CLIENT_SKILLTREEGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F89400)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillTreeGrowthGuide_TypeDefinitionIndex = 52097;

	class SkillTreeGrowthGuide : public ::System::Object
	{
	public:
		::RPG::Client::AvatarData* _AvatarData; // 0x10
		::Class_1_15CE52DCB05275B5* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SkillTreeGrowthGuide* Create(::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::SkillTreeGrowthGuide*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_CREATE_OFFSET))(avatarData);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_617*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLTREEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}
	};
}
