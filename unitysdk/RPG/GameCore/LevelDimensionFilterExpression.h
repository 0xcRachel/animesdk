#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17346CC0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17346A40)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17346A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterExpression_TypeDefinitionIndex = 15785;

	class LevelDimensionFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterExpression*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterExpression* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
