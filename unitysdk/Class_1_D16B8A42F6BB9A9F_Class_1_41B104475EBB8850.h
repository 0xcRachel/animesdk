#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_127EAB4936C75FCC.h"
#include "unitysdk/Struct_2_4C8316D252AABDF5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_D16B8A42F6BB9A9F_CLASS_1_41B104475EBB8850__CTOR_OFFSET UNITYSDK_OFFSET(0xD1C9920)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F_Class_1_41B104475EBB8850_TypeDefinitionIndex = 48100;

class Class_1_D16B8A42F6BB9A9F_Class_1_41B104475EBB8850 : public ::System::Object
{
public:
	::System::Nullable_1<::Struct_2_4C8316D252AABDF5> Field_1_3; // 0x10
	::System::String* Field_1_6; // 0x38
	::System::Nullable_1<::Struct_2_127EAB4936C75FCC> Field_1_2; // 0x40
	::System::String* Field_1_4; // 0x58
	::UnityEngine::Vector3 Field_1_0; // 0x60
	::System::Boolean Field_1_10; // 0x6C
	::System::Boolean Field_1_9; // 0x6D
	::System::Boolean Field_1_5; // 0x6E
	::System::Boolean Field_1_8; // 0x6F
	::UnityEngine::Quaternion Field_1_1; // 0x70
	::System::Boolean Field_1_7; // 0x80
	::System::Boolean Field_1_11; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F_CLASS_1_41B104475EBB8850__CTOR_OFFSET))(this);
	}
};
