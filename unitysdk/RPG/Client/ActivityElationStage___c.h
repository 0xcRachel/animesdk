#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B113E0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B11420)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_0_OFFSET UNITYSDK_OFFSET(0x8B11480)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GETSORTEDMONSTERS_B__49_0_OFFSET UNITYSDK_OFFSET(0x8B11430)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationStage___c_TypeDefinitionIndex = 48773;

	class ActivityElationStage___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x169D0);
		}
		static ::System::Func_2<::RPG::Client::ActivityElationAvatarData*, ::RPG::Client::AvatarData*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityElationAvatarData*, ::RPG::Client::AvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x169D8);
		}
		static ::RPG::Client::ActivityElationStage___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityElationStage___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x169E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMonsters_b__49_0(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GETSORTEDMONSTERS_B__49_0_OFFSET))(this, a, b);
		}

		::RPG::Client::AvatarData* _GerSelectableAvatarDataList_b__54_0(::RPG::Client::ActivityElationAvatarData* data)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_0_OFFSET))(this, data);
		}
	};
}
