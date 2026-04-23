#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09BA741879A02AC6.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_2_C06B88B3FF887A1B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xECA9860)
#define CLASS_2_C06B88B3FF887A1B___C__CLEARMESSAGESBEFORE_B__14_0_OFFSET UNITYSDK_OFFSET(0xECA98B0)
#define CLASS_2_C06B88B3FF887A1B___C__CTOR_OFFSET UNITYSDK_OFFSET(0xECA98A0)
#define CLASS_2_C06B88B3FF887A1B___C__REMOVEMESSAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0xECA98C0)

inline static constexpr unsigned int Class_2_C06B88B3FF887A1B___c_TypeDefinitionIndex = 70251;

class Class_2_C06B88B3FF887A1B___c : public ::System::Object
{
public:
	static ::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C06B88B3FF887A1B___c_TypeDefinitionIndex)->GetStaticField(0x56C30);
	}
	static ::Class_2_C06B88B3FF887A1B___c** StaticGet___9()
	{
		return (::Class_2_C06B88B3FF887A1B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C06B88B3FF887A1B___c_TypeDefinitionIndex)->GetStaticField(0x56C38);
	}
	static ::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_3<::Struct_2_09BA741879A02AC6, ::System::UInt64, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C06B88B3FF887A1B___c_TypeDefinitionIndex)->GetStaticField(0x56C40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C06B88B3FF887A1B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C06B88B3FF887A1B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _ClearMessagesBefore_b__14_0(::Struct_2_09BA741879A02AC6 msg, ::System::UInt64 sid)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_09BA741879A02AC6, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_C06B88B3FF887A1B___C__CLEARMESSAGESBEFORE_B__14_0_OFFSET))(this, msg, sid);
	}

	::System::Boolean _RemoveMessage_b__15_0(::Struct_2_09BA741879A02AC6 msg, ::System::UInt64 sid)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_09BA741879A02AC6, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_C06B88B3FF887A1B___C__REMOVEMESSAGE_B__15_0_OFFSET))(this, msg, sid);
	}
};
