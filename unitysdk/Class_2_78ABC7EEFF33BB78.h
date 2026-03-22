#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A3172A5E6971D457.h"

namespace System { class Object; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEvent; }

#define CLASS_2_78ABC7EEFF33BB78_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x17B866B0)
#define CLASS_2_78ABC7EEFF33BB78_METHOD_2_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x17B86520)
#define CLASS_2_78ABC7EEFF33BB78_METHOD_2_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x17B86610)
#define CLASS_2_78ABC7EEFF33BB78_METHOD_2_92F85D4296A9ADDA_OFFSET UNITYSDK_OFFSET(0x17B86590)
#define CLASS_2_78ABC7EEFF33BB78__CTOR_OFFSET UNITYSDK_OFFSET(0x17B830F0)

inline static constexpr unsigned int Class_2_78ABC7EEFF33BB78_TypeDefinitionIndex = 32990;

class Class_2_78ABC7EEFF33BB78 : public ::Class_1_A3172A5E6971D457<::UnityEngine::Events::UnityEvent*>
{
public:
	::System::Void _ctor(::System::Object* a1, ::UnityEngine::Events::UnityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + CLASS_2_78ABC7EEFF33BB78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_2_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78ABC7EEFF33BB78_METHOD_2_4FB5F56430673EA6_OFFSET))(this);
	}

	::System::Void Method_2_92F85D4296A9ADDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78ABC7EEFF33BB78_METHOD_2_92F85D4296A9ADDA_OFFSET))(this);
	}

	::System::Void Method_2_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78ABC7EEFF33BB78_METHOD_2_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78ABC7EEFF33BB78_METHOD_2_41146E620D694011_OFFSET))(this);
	}
};
