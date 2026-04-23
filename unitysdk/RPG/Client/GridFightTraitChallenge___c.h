#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BAE920)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAE960)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_0_OFFSET UNITYSDK_OFFSET(0x17BAE9B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_1_OFFSET UNITYSDK_OFFSET(0x17BAEA20)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_0_OFFSET UNITYSDK_OFFSET(0x17BAEA30)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_1_OFFSET UNITYSDK_OFFSET(0x17BAEAA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x17BAE970)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_1_OFFSET UNITYSDK_OFFSET(0x17BAE990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge___c_TypeDefinitionIndex = 60237;

	class GridFightTraitChallenge___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitChallenge___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitChallenge___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x34570);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x34578);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x34580);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x34588);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x34590);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x34598);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x345A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateState_b__9_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_0_OFFSET))(this, quest);
		}

		::System::Boolean _UpdateState_b__9_1(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_1_OFFSET))(this, quest);
		}

		::RPG::Client::QuestData* _get_Quests_b__27_0(::System::UInt32 t)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_0_OFFSET))(this, t);
		}

		::System::Boolean _get_Quests_b__27_1(::RPG::Client::QuestData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_1_OFFSET))(this, t);
		}

		::RPG::Client::QuestData* _get_StandardQuests_b__29_0(::System::UInt32 t)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_0_OFFSET))(this, t);
		}

		::System::Boolean _get_StandardQuests_b__29_1(::RPG::Client::QuestData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_1_OFFSET))(this, t);
		}
	};
}
