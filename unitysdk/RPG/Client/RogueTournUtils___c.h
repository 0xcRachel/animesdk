#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_0_OFFSET UNITYSDK_OFFSET(0x9F28960)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_1_OFFSET UNITYSDK_OFFSET(0x9F289E0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_2_OFFSET UNITYSDK_OFFSET(0x9F28A40)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_3_OFFSET UNITYSDK_OFFSET(0x9F28AD0)
#define RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_4_OFFSET UNITYSDK_OFFSET(0x9F28B00)
#define RPG_CLIENT_ROGUETOURNUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F28730)
#define RPG_CLIENT_ROGUETOURNUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F28770)
#define RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__28_0_OFFSET UNITYSDK_OFFSET(0x9F28780)
#define RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__28_1_OFFSET UNITYSDK_OFFSET(0x9F28900)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c_TypeDefinitionIndex = 53801;

	class RogueTournUtils___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13710);
		}
		static ::System::Action** StaticGet___9__44_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13718);
		}
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13720);
		}
		static ::System::Func_2<::XLua::LuaTable*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__44_3()
		{
			return (::System::Func_2<::XLua::LuaTable*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13728);
		}
		static ::System::Action** StaticGet___9__44_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13730);
		}
		static ::System::Action** StaticGet___9__44_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13738);
		}
		static ::System::Action** StaticGet___9__44_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13740);
		}
		static ::RPG::Client::RogueTournUtils___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournUtils___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournUtils___c_TypeDefinitionIndex)->GetStaticField(0x13748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTournExpRewardPageFromActivityPanel_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__28_0_OFFSET))(this);
		}

		::System::Void _ShowTournExpRewardPageFromActivityPanel_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_B__28_1_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_0_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__44_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_1_OFFSET))(this);
		}

		::System::Void _BackToModeSelectPage_b__44_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _BackToModeSelectPage_b__44_3(::XLua::LuaTable* _)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_3_OFFSET))(this, _);
		}

		::System::Void _BackToModeSelectPage_b__44_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__BACKTOMODESELECTPAGE_B__44_4_OFFSET))(this);
		}
	};
}
