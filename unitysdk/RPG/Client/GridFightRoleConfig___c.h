#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93E3330)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93E3370)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__70_0_OFFSET UNITYSDK_OFFSET(0x93E3380)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__70_1_OFFSET UNITYSDK_OFFSET(0x93E33B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__73_0_OFFSET UNITYSDK_OFFSET(0x93E33F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c_TypeDefinitionIndex = 51735;

	class GridFightRoleConfig___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>** StaticGet___9__73_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightBackRankConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x88F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>** StaticGet___9__70_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x88F8);
		}
		static ::RPG::Client::GridFightRoleConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x8900);
		}
		static ::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>** StaticGet___9__70_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightBackEquipmentConfig*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleConfig___c_TypeDefinitionIndex)->GetStaticField(0x8908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetAllRankBackEquipmentDesc_b__70_0(::RPG::Client::GridFightBackEquipmentConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__70_0_OFFSET))(this, x);
		}

		::System::Int32 __GetAllRankBackEquipmentDesc_b__70_1(::RPG::Client::GridFightBackEquipmentConfig* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___GETALLRANKBACKEQUIPMENTDESC_B__70_1_OFFSET))(this, x);
		}

		::System::Int32 __InitBackRankConfigs_b__73_0(::RPG::Client::GridFightBackRankConfig* a, ::RPG::Client::GridFightBackRankConfig* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBackRankConfig*, ::RPG::Client::GridFightBackRankConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C___INITBACKRANKCONFIGS_B__73_0_OFFSET))(this, a, b);
		}
	};
}
