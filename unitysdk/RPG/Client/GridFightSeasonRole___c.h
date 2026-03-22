#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93F3530)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CREATE_B__64_0_OFFSET UNITYSDK_OFFSET(0x93F3580)
#define RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93F3570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonRole___c_TypeDefinitionIndex = 51765;

	class GridFightSeasonRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonRole___c_TypeDefinitionIndex)->GetStaticField(0x8B90);
		}
		static ::RPG::Client::GridFightSeasonRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSeasonRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonRole___c_TypeDefinitionIndex)->GetStaticField(0x8B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* _Create_b__64_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONROLE___C__CREATE_B__64_0_OFFSET))(this, x);
		}
	};
}
