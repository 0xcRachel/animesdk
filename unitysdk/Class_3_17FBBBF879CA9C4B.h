#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DB9CAAB5758BEDF0.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x118C0700)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x118C0630)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x118C05D0)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x118C08C0)
#define CLASS_3_17FBBBF879CA9C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x118C07C0)
#define CLASS_3_17FBBBF879CA9C4B__ONBIND_OFFSET UNITYSDK_OFFSET(0x118C0550)
#define CLASS_3_17FBBBF879CA9C4B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x118C0830)

inline static constexpr unsigned int Class_3_17FBBBF879CA9C4B_TypeDefinitionIndex = 65792;

class Class_3_17FBBBF879CA9C4B : public ::Class_2_DB9CAAB5758BEDF0
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::UnityEngine::Animation* Field_3_1; // 0x70
	::System::String* Field_3_4; // 0x78
	::RPG::Client::RPGAnimationEvent* Field_3_2; // 0x80
	::System::String* Field_3_3; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
