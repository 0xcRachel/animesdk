#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x103D2290)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x103D22D0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C___ONSWORDTRAININGSTARTGAMESCRSP_B__3_0_OFFSET UNITYSDK_OFFSET(0x103D22E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingModule___c_TypeDefinitionIndex = 57123;

	class ActivitySwordTrainingModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivitySwordTrainingModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivitySwordTrainingModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingModule___c_TypeDefinitionIndex)->GetStaticField(0x52750);
		}
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingModule___c_TypeDefinitionIndex)->GetStaticField(0x52758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnSwordTrainingStartGameScRsp_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C___ONSWORDTRAININGSTARTGAMESCRSP_B__3_0_OFFSET))(this);
		}
	};
}
