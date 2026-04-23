#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1734EDE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1734EE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__GET_ISACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1734EE30)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTreeRow___c_TypeDefinitionIndex = 69461;

	class IdleLiveBaseTechTreeRow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTreeRow___c_TypeDefinitionIndex)->GetStaticField(0x41BF0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTreeRow___c_TypeDefinitionIndex)->GetStaticField(0x41BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsActive_b__1_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREEROW___C__GET_ISACTIVE_B__1_0_OFFSET))(this, x);
		}
	};
}
