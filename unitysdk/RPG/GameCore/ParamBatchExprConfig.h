#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamExprType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_3_B50D29C907CFA7EB_OFFSET UNITYSDK_OFFSET(0x16D162C0)
#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_3_F91FDE28336D7A4A_OFFSET UNITYSDK_OFFSET(0x16D161E0)
#define RPG_GAMECORE_PARAMBATCHEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D16270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamBatchExprConfig_TypeDefinitionIndex = 15377;

	class ParamBatchExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamExprType ExprType; // 0x10
		::Il2CppArray<::RPG::GameCore::MiParameterConfigBase*>* ValueList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F91FDE28336D7A4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamBatchExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamBatchExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_3_F91FDE28336D7A4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B50D29C907CFA7EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamBatchExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamBatchExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMBATCHEXPRCONFIG_METHOD_3_B50D29C907CFA7EB_OFFSET))(a1, a2);
		}
	};
}
