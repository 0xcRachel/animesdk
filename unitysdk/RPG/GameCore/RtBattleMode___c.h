#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_365F1A3885A69C82;
class Class_1_3CE169FA8918702D;
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_RTBATTLEMODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF569F70)
#define RPG_GAMECORE_RTBATTLEMODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF569FB0)
#define RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_0_OFFSET UNITYSDK_OFFSET(0xF569FC0)
#define RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_1_OFFSET UNITYSDK_OFFSET(0xF569FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode___c_TypeDefinitionIndex = 50051;

	class RtBattleMode___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_3CE169FA8918702D*>** StaticGet___9__83_0()
		{
			return (::System::Action_1<::Class_1_3CE169FA8918702D*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode___c_TypeDefinitionIndex)->GetStaticField(0x690E0);
		}
		static ::RPG::GameCore::RtBattleMode___c** StaticGet___9()
		{
			return (::RPG::GameCore::RtBattleMode___c**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode___c_TypeDefinitionIndex)->GetStaticField(0x690E8);
		}
		static ::System::Action_1<::Class_1_365F1A3885A69C82*>** StaticGet___9__83_1()
		{
			return (::System::Action_1<::Class_1_365F1A3885A69C82*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode___c_TypeDefinitionIndex)->GetStaticField(0x690F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPreInit_b__83_0(::Class_1_3CE169FA8918702D* rtTickModlue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CE169FA8918702D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_0_OFFSET))(this, rtTickModlue);
		}

		::System::Void _OnPreInit_b__83_1(::Class_1_365F1A3885A69C82* collisionModule)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_365F1A3885A69C82*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_1_OFFSET))(this, collisionModule);
		}
	};
}
