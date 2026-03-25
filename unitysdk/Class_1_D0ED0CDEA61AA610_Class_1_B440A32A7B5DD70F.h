#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F_EQUALS_OFFSET UNITYSDK_OFFSET(0x10BCAB00)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10BCAC00)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC9D20)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x10BCAC50)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10BCAC60)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Class_1_B440A32A7B5DD70F_TypeDefinitionIndex = 57885;

class Class_1_D0ED0CDEA61AA610_Class_1_B440A32A7B5DD70F : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_B440A32A7B5DD70F___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
