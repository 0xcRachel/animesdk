#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9353940)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9353980)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__GET_IDLEEQUIPCOUNT_B__21_0_OFFSET UNITYSDK_OFFSET(0x9353990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo___c_TypeDefinitionIndex = 51616;

	class GridFightEquipInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipInfo___c_TypeDefinitionIndex)->GetStaticField(0x44580);
		}
		static ::RPG::Client::GridFightEquipInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipInfo___c_TypeDefinitionIndex)->GetStaticField(0x44588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IdleEquipCount_b__21_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__GET_IDLEEQUIPCOUNT_B__21_0_OFFSET))(this, x);
		}
	};
}
