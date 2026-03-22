#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x9FC6F30)
#define RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_3__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC4FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateRunBlendTree_Class_1_3B76E13757985C28_3_TypeDefinitionIndex = 54680;

	class StateRunBlendTree_Class_1_3B76E13757985C28_3 : public ::System::Object
	{
	public:
		::System::Single Field_1_3; // 0x10
		::System::Single Field_1_4; // 0x14
		::System::Single Field_1_1; // 0x18
		::System::Single Field_1_2; // 0x1C
		::System::Int32 Field_1_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_3__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}
	};
}
