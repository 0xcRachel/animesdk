#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_4_5CDB12213DC47DAC_OFFSET UNITYSDK_OFFSET(0x16A9B720)
#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_4_C6A7DBF20642AEDF_OFFSET UNITYSDK_OFFSET(0x16A9CD20)
#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A991E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParameterConfigBase_TypeDefinitionIndex = 14976;

	class FateParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5CDB12213DC47DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_4_5CDB12213DC47DAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6A7DBF20642AEDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_4_C6A7DBF20642AEDF_OFFSET))(a1, a2);
		}
	};
}
