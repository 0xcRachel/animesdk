#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_716;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET UNITYSDK_OFFSET(0x16054880)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16054760)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160547A0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x16054AF0)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0x16054A20)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET UNITYSDK_OFFSET(0x16054950)
#define RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET UNITYSDK_OFFSET(0x160547B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistant___c_TypeDefinitionIndex = 59221;

	class GridFightAssistant___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_0_16E4307DCC419505_716*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_716*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1D070);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_716*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_716*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1D078);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_716*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_716*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1D080);
		}
		static ::RPG::Client::GridFightAssistant___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAssistant___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1D088);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_716*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_716*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1D090);
		}
		static ::System::Action_1<::Class_0_16E4307DCC419505_716*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Class_0_16E4307DCC419505_716*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAssistant___c_TypeDefinitionIndex)->GetStaticField(0x1D098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__CTOR_OFFSET))(this);
		}

		::System::Void _UsedOrb_b__2_0(::Class_0_16E4307DCC419505_716* assistant)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDORB_B__2_0_OFFSET))(this, assistant);
		}

		::System::Void _BoughtExp_b__3_0(::Class_0_16E4307DCC419505_716* assistant)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__BOUGHTEXP_B__3_0_OFFSET))(this, assistant);
		}

		::System::Void _UsedEquip_b__4_0(::Class_0_16E4307DCC419505_716* assistant)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__USEDEQUIP_B__4_0_OFFSET))(this, assistant);
		}

		::System::Void _TickRound_b__6_0(::Class_0_16E4307DCC419505_716* assistant)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__TICKROUND_B__6_0_OFFSET))(this, assistant);
		}

		::System::Int32 _GetAllMessage_b__7_0(::Class_0_16E4307DCC419505_716* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANT___C__GETALLMESSAGE_B__7_0_OFFSET))(this, x);
		}
	};
}
