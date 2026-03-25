#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D5AE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleConditionObjData_TypeDefinitionIndex = 64132;

	class LightRubikCubePuzzleConditionObjData : public ::System::Object
	{
	public:
		::System::Int32 Color; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONOBJDATA__CTOR_OFFSET))(this);
		}
	};
}
