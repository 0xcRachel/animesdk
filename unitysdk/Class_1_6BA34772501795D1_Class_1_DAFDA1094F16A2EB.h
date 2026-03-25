#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x8A35F80)
#define CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8A35F70)
#define CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_4B8BB754EBD146AC_OFFSET UNITYSDK_OFFSET(0x8A35F90)
#define CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_9B78111D754838CB_OFFSET UNITYSDK_OFFSET(0x8A35CC0)
#define CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_ED64C5A5C3083423_OFFSET UNITYSDK_OFFSET(0x8A35E20)
#define CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB__CTOR_OFFSET UNITYSDK_OFFSET(0x8A35B60)

inline static constexpr unsigned int Class_1_6BA34772501795D1_Class_1_DAFDA1094F16A2EB_TypeDefinitionIndex = 59873;

class Class_1_6BA34772501795D1_Class_1_DAFDA1094F16A2EB : public ::System::Object
{
public:
	::UnityEngine::Object* Field_1_2; // 0x10
	::System::Object* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::String* Field_1_0; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_9B78111D754838CB(::XLua::LuaTable* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_9B78111D754838CB_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_1_ED64C5A5C3083423()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_ED64C5A5C3083423_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4B8BB754EBD146AC()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA34772501795D1_CLASS_1_DAFDA1094F16A2EB_METHOD_1_4B8BB754EBD146AC_OFFSET))(this);
	}
};
