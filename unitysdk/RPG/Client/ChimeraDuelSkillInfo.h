#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERADUELSKILLINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93B5F70)
#define RPG_CLIENT_CHIMERADUELSKILLINFO_FORCEPRELOADJSON_OFFSET UNITYSDK_OFFSET(0x93B61C0)
#define RPG_CLIENT_CHIMERADUELSKILLINFO_INIT_OFFSET UNITYSDK_OFFSET(0x93B5250)
#define RPG_CLIENT_CHIMERADUELSKILLINFO_TRYGETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x93B6CC0)
#define RPG_CLIENT_CHIMERADUELSKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93B5240)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSkillInfo_TypeDefinitionIndex = 51459;

	class ChimeraDuelSkillInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::IChimeraDuelSkillData*>* _DataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::IChimeraDuelSkillData* TryGetSkillData(::System::UInt32 id)
		{
			return ((::RPG::Client::IChimeraDuelSkillData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLINFO_TRYGETSKILLDATA_OFFSET))(this, id);
		}

		::System::Void ForcePreloadJson()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSKILLINFO_FORCEPRELOADJSON_OFFSET))(this);
		}
	};
}
