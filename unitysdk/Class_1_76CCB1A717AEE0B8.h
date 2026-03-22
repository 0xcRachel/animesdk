#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_76CCB1A717AEE0B8_METHOD_1_3140E61E27752676_OFFSET UNITYSDK_OFFSET(0x10556AE0)
#define CLASS_1_76CCB1A717AEE0B8__CTOR_OFFSET UNITYSDK_OFFSET(0x10556F50)

inline static constexpr unsigned int Class_1_76CCB1A717AEE0B8_TypeDefinitionIndex = 46989;

class Class_1_76CCB1A717AEE0B8 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CCB1A717AEE0B8__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_3140E61E27752676()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76CCB1A717AEE0B8_METHOD_1_3140E61E27752676_OFFSET))(this);
	}
};
