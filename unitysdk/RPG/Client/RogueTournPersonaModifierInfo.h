#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_3.h"
#include "unitysdk/System/Object.h"

class Class_1_00BAB2C33D444F88_28;
class Class_1_54D5F60E7D5A40F8;
namespace RPG::Client { class IRogueTournPersonaModifier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172D5EE0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x172D6300)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET UNITYSDK_OFFSET(0x172D64F0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x172D60A0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0x172D5F80)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x172D6110)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172D6550)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaModifierInfo_TypeDefinitionIndex = 62397;

	class RogueTournPersonaModifierInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::IRogueTournPersonaModifier*>* _ModifierDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_00BAB2C33D444F88_28* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET))(this, proto);
		}

		::System::Void SyncAddModifier(::Class_1_54D5F60E7D5A40F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_54D5F60E7D5A40F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET))(this, proto);
		}

		::System::Void SyncUpdateModifier(::Class_1_54D5F60E7D5A40F8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_54D5F60E7D5A40F8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET))(this, proto);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* GetModifiersBySourceType(::Enum_3_0F1B992870941C13_3 type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID, ::Enum_3_0F1B992870941C13_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* get_ModifierDatas()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET))(this);
		}
	};
}
