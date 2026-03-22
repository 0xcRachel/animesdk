#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MARBLEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9648290)
#define RPG_CLIENT_MARBLEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96482D0)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMAINPAGE_B__93_1_OFFSET UNITYSDK_OFFSET(0x96483B0)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_3_OFFSET UNITYSDK_OFFSET(0x9648470)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERPAGE_B__94_1_OFFSET UNITYSDK_OFFSET(0x9648410)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__82_0_OFFSET UNITYSDK_OFFSET(0x96482F0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__82_1_OFFSET UNITYSDK_OFFSET(0x9648320)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__83_0_OFFSET UNITYSDK_OFFSET(0x9648350)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__83_1_OFFSET UNITYSDK_OFFSET(0x9648360)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__85_0_OFFSET UNITYSDK_OFFSET(0x9648390)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__85_1_OFFSET UNITYSDK_OFFSET(0x96483A0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__84_0_OFFSET UNITYSDK_OFFSET(0x9648370)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__84_1_OFFSET UNITYSDK_OFFSET(0x9648380)
#define RPG_CLIENT_MARBLEMODULE___C___ENTITYIDS2BATTLESEALS_B__13_0_OFFSET UNITYSDK_OFFSET(0x96482E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleModule___c_TypeDefinitionIndex = 52311;

	class MarbleModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__84_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BD80);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__83_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BD88);
		}
		static ::RPG::Client::MarbleModule___c** StaticGet___9()
		{
			return (::RPG::Client::MarbleModule___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BD90);
		}
		static ::System::Action** StaticGet___9__93_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BD98);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__85_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDA0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDA8);
		}
		static ::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::UInt32>** StaticGet___9__82_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDB0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__84_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDB8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDC0);
		}
		static ::System::Action** StaticGet___9__95_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDC8);
		}
		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDD0);
		}
		static ::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::UInt32>** StaticGet___9__82_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDD8);
		}
		static ::System::Action** StaticGet___9__94_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x2BDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __EntityIds2BattleSeals_b__13_0(::RPG::Client::MarbleBattleSealData* sealData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C___ENTITYIDS2BATTLESEALS_B__13_0_OFFSET))(this, sealData);
		}

		::System::UInt32 _StartMarblePveGame_b__82_0(::RPG::Client::ActivityMarble::MarbleSealData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__82_0_OFFSET))(this, a);
		}

		::System::UInt32 _StartMarblePveGame_b__82_1(::RPG::Client::ActivityMarble::MarbleSealData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__82_1_OFFSET))(this, a);
		}

		::System::Boolean _StartMarblePveGame_b__83_0(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__83_0_OFFSET))(this, n);
		}

		::System::Boolean _StartMarblePveGame_b__83_1(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__83_1_OFFSET))(this, n);
		}

		::System::Boolean _StartMarblePvpGame_b__84_0(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__84_0_OFFSET))(this, n);
		}

		::System::Boolean _StartMarblePvpGame_b__84_1(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__84_1_OFFSET))(this, n);
		}

		::System::Boolean _StartMarblePveGame_b__85_0(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__85_0_OFFSET))(this, n);
		}

		::System::Boolean _StartMarblePveGame_b__85_1(::System::UInt32 n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__85_1_OFFSET))(this, n);
		}

		::System::Void _GotoActivityMainPage_b__93_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMAINPAGE_B__93_1_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__94_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERPAGE_B__94_1_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__95_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__95_3_OFFSET))(this);
		}
	};
}
