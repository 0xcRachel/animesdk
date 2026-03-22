#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_4_5DBB611FB58C4783_OFFSET UNITYSDK_OFFSET(0x16A94930)
#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_4_A39E14AE367B0EBA_OFFSET UNITYSDK_OFFSET(0x16A94F60)
#define RPG_GAMECORE_FATECONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateConditionConfigBase_TypeDefinitionIndex = 17267;

	class FateConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5DBB611FB58C4783(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_4_5DBB611FB58C4783_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A39E14AE367B0EBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_4_A39E14AE367B0EBA_OFFSET))(a1, a2);
		}
	};
}
