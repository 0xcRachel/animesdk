#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }

#define CLASS_1_51C874EE455D4F2F_3_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10AC89F0)
#define CLASS_1_51C874EE455D4F2F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC8A30)

inline static constexpr unsigned int Class_1_51C874EE455D4F2F_3_TypeDefinitionIndex = 58140;

class Class_1_51C874EE455D4F2F_3 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_3__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_3_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
