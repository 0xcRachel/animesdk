#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12B8DCC04CBEB49F;
class Class_1_6EBEA8069CDA622C_6;
class Class_1_6EBEA8069CDA622C_7;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x932C810)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x932C850)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0x932C860)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET UNITYSDK_OFFSET(0x932C880)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET UNITYSDK_OFFSET(0x932C8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo___c_TypeDefinitionIndex = 51180;

	class GridFightBattleSttInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_6*, ::System::Double>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_6*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x43FD0);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x43FD8);
		}
		static ::System::Func_2<::Class_1_12B8DCC04CBEB49F*, ::System::Double>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_12B8DCC04CBEB49F*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x43FE0);
		}
		static ::RPG::Client::GridFightBattleSttInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleSttInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleSttInfo___c_TypeDefinitionIndex)->GetStaticField(0x43FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Double _Sync_b__0_0(::Class_1_12B8DCC04CBEB49F* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_12B8DCC04CBEB49F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET))(this, x);
		}

		::System::Double _Sync_b__0_1(::Class_1_6EBEA8069CDA622C_6* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET))(this, x);
		}

		::System::Double _Sync_b__0_2(::Class_1_6EBEA8069CDA622C_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET))(this, x);
		}
	};
}
