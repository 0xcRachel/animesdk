#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x939EFD0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x939F010)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSESSIONBATTLE_B__20_0_OFFSET UNITYSDK_OFFSET(0x939F020)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSHOWCASEBATTLE_B__24_0_OFFSET UNITYSDK_OFFSET(0x939F0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelBattlePageViewModel___c_TypeDefinitionIndex = 51470;

	class ChimeraDuelBattlePageViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelBattlePageViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelBattlePageViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattlePageViewModel___c_TypeDefinitionIndex)->GetStaticField(0x45100);
		}
		static ::System::Action_1<::Class_1_C563E5E77DCDB6EB*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::Class_1_C563E5E77DCDB6EB*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattlePageViewModel___c_TypeDefinitionIndex)->GetStaticField(0x45108);
		}
		static ::System::Action_1<::Class_1_C563E5E77DCDB6EB*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::Class_1_C563E5E77DCDB6EB*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattlePageViewModel___c_TypeDefinitionIndex)->GetStaticField(0x45110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __CreateForSessionBattle_b__20_0(::Class_1_C563E5E77DCDB6EB* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSESSIONBATTLE_B__20_0_OFFSET))(this, settleInfo);
		}

		::System::Void __CreateForShowcaseBattle_b__24_0(::Class_1_C563E5E77DCDB6EB* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C___CREATEFORSHOWCASEBATTLE_B__24_0_OFFSET))(this, _);
		}
	};
}
