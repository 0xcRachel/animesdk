#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONSTERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x137157C0)
#define RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMIDLIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x137158C0)
#define RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMSTAGEROW_B__12_0_OFFSET UNITYSDK_OFFSET(0x13715800)
#define RPG_CLIENT_MONSTERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x137157F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData___c_TypeDefinitionIndex = 58155;

	class MonsterData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterData___c_TypeDefinitionIndex)->GetStaticField(0x5EDF0);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterData___c_TypeDefinitionIndex)->GetStaticField(0x5EDF8);
		}
		static ::RPG::Client::MonsterData___c** StaticGet___9()
		{
			return (::RPG::Client::MonsterData___c**)Il2CppClass::FromTypeDefinitionIndex(MonsterData___c_TypeDefinitionIndex)->GetStaticField(0x5EE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateDataListFromStageRow_b__12_0(::RPG::Client::MonsterData* data, ::RPG::Client::MonsterData* monsterData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMSTAGEROW_B__12_0_OFFSET))(this, data, monsterData);
		}

		::System::Int32 _CreateDataListFromIDList_b__15_0(::RPG::Client::MonsterData* data, ::RPG::Client::MonsterData* monsterData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMIDLIST_B__15_0_OFFSET))(this, data, monsterData);
		}
	};
}
