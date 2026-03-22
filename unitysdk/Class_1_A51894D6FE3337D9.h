#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_A51894D6FE3337D9_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xD881F80)
#define CLASS_1_A51894D6FE3337D9_METHOD_1_6AC746DD34155C3F_OFFSET UNITYSDK_OFFSET(0xD882040)
#define CLASS_1_A51894D6FE3337D9_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xD8827C0)
#define CLASS_1_A51894D6FE3337D9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD882770)
#define CLASS_1_A51894D6FE3337D9_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xD881F90)
#define CLASS_1_A51894D6FE3337D9_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD882F10)
#define CLASS_1_A51894D6FE3337D9__CTOR_OFFSET UNITYSDK_OFFSET(0xD881FA0)
#define CLASS_1_A51894D6FE3337D9___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD882F50)

inline static constexpr unsigned int Class_1_A51894D6FE3337D9_TypeDefinitionIndex = 62400;

class Class_1_A51894D6FE3337D9 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_FAF146B3D74C3C3F*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Boolean _IsRunning_k__BackingField; // 0x24

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_SET_ISRUNNING_OFFSET))(this, value);
	}

	::System::Void Method_1_6AC746DD34155C3F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_METHOD_1_6AC746DD34155C3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A51894D6FE3337D9___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
