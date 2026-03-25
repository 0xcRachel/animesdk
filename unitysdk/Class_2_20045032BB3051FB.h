#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x108EF1C0)
#define CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x108EF160)
#define CLASS_2_20045032BB3051FB__CTOR_OFFSET UNITYSDK_OFFSET(0x108EF220)
#define CLASS_2_20045032BB3051FB__ONBIND_OFFSET UNITYSDK_OFFSET(0x108EF070)
#define CLASS_2_20045032BB3051FB___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x108EF250)

inline static constexpr unsigned int Class_2_20045032BB3051FB_TypeDefinitionIndex = 58512;

class Class_2_20045032BB3051FB : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
