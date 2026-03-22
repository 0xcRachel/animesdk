#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValue_DynamicValueType.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_DYNAMICVALUE_UNIONVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A58EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue_UnionValue_TypeDefinitionIndex = 22020;

	struct alignas(4) DynamicValue_UnionValue
	{
		static ::RPG::GameCore::DynamicValue_UnionValue* StaticGet_Empty()
		{
			return (::RPG::GameCore::DynamicValue_UnionValue*)Il2CppClass::FromTypeDefinitionIndex(DynamicValue_UnionValue_TypeDefinitionIndex)->GetStaticField(0x8360);
		}
		::RPG::GameCore::DynamicValue_DynamicValueType valueType; // 0x10
		::System::Single floatValue; // 0x11
		::System::Int32 intValue; // 0x11

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_UNIONVALUE__CCTOR_OFFSET))();
		}
	};
}
