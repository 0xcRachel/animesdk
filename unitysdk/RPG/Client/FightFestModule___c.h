#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestPaper; }
namespace RPG::Client { class FightFestPaperInterview; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FightFestScoreRace; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FIGHTFESTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15120AE0)
#define RPG_CLIENT_FIGHTFESTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15120B10)
#define RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_0_OFFSET UNITYSDK_OFFSET(0x15120B80)
#define RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_1_OFFSET UNITYSDK_OFFSET(0x15120BA0)
#define RPG_CLIENT_FIGHTFESTMODULE___C__GETPAPERPROGRESS_B__183_0_OFFSET UNITYSDK_OFFSET(0x15120C90)
#define RPG_CLIENT_FIGHTFESTMODULE___C__ISSHOWSCORERACENEWTIPS_B__135_0_OFFSET UNITYSDK_OFFSET(0x15120C30)
#define RPG_CLIENT_FIGHTFESTMODULE___C___INITPAPERS_B__77_0_OFFSET UNITYSDK_OFFSET(0x15120B20)
#define RPG_CLIENT_FIGHTFESTMODULE___C___INITPHASES_B__86_0_OFFSET UNITYSDK_OFFSET(0x15120BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule___c_TypeDefinitionIndex = 59054;

	class FightFestModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FightFestPaperInterview*>** StaticGet___9__77_0()
		{
			return (::System::Comparison_1<::RPG::Client::FightFestPaperInterview*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CB0);
		}
		static ::System::Func_2<::RPG::Client::FightFestScoreRace*, ::System::Boolean>** StaticGet___9__135_0()
		{
			return (::System::Func_2<::RPG::Client::FightFestScoreRace*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CB8);
		}
		static ::System::Comparison_1<::RPG::Client::FightFestPhase*>** StaticGet___9__86_0()
		{
			return (::System::Comparison_1<::RPG::Client::FightFestPhase*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CC0);
		}
		static ::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>** StaticGet___9__78_0()
		{
			return (::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CC8);
		}
		static ::System::Func_2<::RPG::Client::FightFestPaper*, ::System::UInt32>** StaticGet___9__78_1()
		{
			return (::System::Func_2<::RPG::Client::FightFestPaper*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CD0);
		}
		static ::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>** StaticGet___9__183_0()
		{
			return (::System::Func_2<::RPG::Client::FightFestPaper*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CD8);
		}
		static ::RPG::Client::FightFestModule___c** StaticGet___9()
		{
			return (::RPG::Client::FightFestModule___c**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule___c_TypeDefinitionIndex)->GetStaticField(0x12CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitPapers_b__77_0(::RPG::Client::FightFestPaperInterview* a, ::RPG::Client::FightFestPaperInterview* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPaperInterview*, ::RPG::Client::FightFestPaperInterview*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C___INITPAPERS_B__77_0_OFFSET))(this, a, b);
		}

		::System::Boolean _GetAvailablePaperIDs_b__78_0(::RPG::Client::FightFestPaper* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetAvailablePaperIDs_b__78_1(::RPG::Client::FightFestPaper* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__GETAVAILABLEPAPERIDS_B__78_1_OFFSET))(this, x);
		}

		::System::Int32 __InitPhases_b__86_0(::RPG::Client::FightFestPhase* a, ::RPG::Client::FightFestPhase* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C___INITPHASES_B__86_0_OFFSET))(this, a, b);
		}

		::System::Boolean _IsShowScoreRaceNewTips_b__135_0(::RPG::Client::FightFestScoreRace* race)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__ISSHOWSCORERACENEWTIPS_B__135_0_OFFSET))(this, race);
		}

		::System::Boolean _GetPaperProgress_b__183_0(::RPG::Client::FightFestPaper* paper)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPaper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___C__GETPAPERPROGRESS_B__183_0_OFFSET))(this, paper);
		}
	};
}
