#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E217C2315F62C819_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x14EC29E0)
#define CLASS_1_E217C2315F62C819_METHOD_1_268720D3E259CF48_OFFSET UNITYSDK_OFFSET(0x14EC2A00)
#define CLASS_1_E217C2315F62C819_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x14EC2B20)
#define CLASS_1_E217C2315F62C819_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EC2AD0)
#define CLASS_1_E217C2315F62C819_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x14EC29F0)
#define CLASS_1_E217C2315F62C819_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14EC32C0)
#define CLASS_1_E217C2315F62C819__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC3330)
#define CLASS_1_E217C2315F62C819___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14EC33C0)

inline static constexpr unsigned int Class_1_E217C2315F62C819_TypeDefinitionIndex = 74457;

class Class_1_E217C2315F62C819 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_FAF146B3D74C3C3F*>* Field_1_0; // 0x10
	::System::Boolean _IsRunning_k__BackingField; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819_SET_ISRUNNING_OFFSET))(this, a1);
	}

	::System::Void Method_1_268720D3E259CF48(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819_METHOD_1_268720D3E259CF48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E217C2315F62C819___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
