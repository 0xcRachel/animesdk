#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D96CF3F32F0BF24C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D0DF42D110E0F6DA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCB3CA70)
#define CLASS_2_D0DF42D110E0F6DA_METHOD_2_ACA711D6BCB0501B_1_OFFSET UNITYSDK_OFFSET(0xCB3CE00)
#define CLASS_2_D0DF42D110E0F6DA_METHOD_2_ACA711D6BCB0501B_OFFSET UNITYSDK_OFFSET(0xCB3CB00)
#define CLASS_2_D0DF42D110E0F6DA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3D100)
#define CLASS_2_D0DF42D110E0F6DA___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCB3D160)

inline static constexpr unsigned int Class_2_D0DF42D110E0F6DA_TypeDefinitionIndex = 62117;

class Class_2_D0DF42D110E0F6DA : public ::Class_1_D96CF3F32F0BF24C
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0DF42D110E0F6DA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0DF42D110E0F6DA_CLEAR_OFFSET))(this);
	}

	::System::String* Method_2_ACA711D6BCB0501B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D0DF42D110E0F6DA_METHOD_2_ACA711D6BCB0501B_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_ACA711D6BCB0501B_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D0DF42D110E0F6DA_METHOD_2_ACA711D6BCB0501B_1_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0DF42D110E0F6DA___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
