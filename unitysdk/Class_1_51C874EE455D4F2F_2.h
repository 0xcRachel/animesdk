#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }

#define CLASS_1_51C874EE455D4F2F_2_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8707F60)
#define CLASS_1_51C874EE455D4F2F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8707FA0)

inline static constexpr unsigned int Class_1_51C874EE455D4F2F_2_TypeDefinitionIndex = 58136;

class Class_1_51C874EE455D4F2F_2 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_2__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C874EE455D4F2F_2_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
