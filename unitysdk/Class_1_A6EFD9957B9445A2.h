#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A6EFD9957B9445A2_METHOD_1_07C9B58FB88FF153_OFFSET UNITYSDK_OFFSET(0xD7B70E0)
#define CLASS_1_A6EFD9957B9445A2_METHOD_1_0D4D447F31661D06_OFFSET UNITYSDK_OFFSET(0xD7B6FB0)
#define CLASS_1_A6EFD9957B9445A2_METHOD_1_4AF0F4732B788C83_OFFSET UNITYSDK_OFFSET(0xD7B7040)
#define CLASS_1_A6EFD9957B9445A2_METHOD_1_6386CA16CA888107_OFFSET UNITYSDK_OFFSET(0xD7B7180)
#define CLASS_1_A6EFD9957B9445A2_METHOD_1_A414B71D826CB224_OFFSET UNITYSDK_OFFSET(0xD7B7230)
#define CLASS_1_A6EFD9957B9445A2__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B72A0)

inline static constexpr unsigned int Class_1_A6EFD9957B9445A2_TypeDefinitionIndex = 70325;

class Class_1_A6EFD9957B9445A2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6EFD9957B9445A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D4D447F31661D06(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6EFD9957B9445A2_METHOD_1_0D4D447F31661D06_OFFSET))(this, a1);
	}

	::System::Void Method_1_4AF0F4732B788C83(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFD9957B9445A2_METHOD_1_4AF0F4732B788C83_OFFSET))(this, a1);
	}

	::System::Void Method_1_07C9B58FB88FF153(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A6EFD9957B9445A2_METHOD_1_07C9B58FB88FF153_OFFSET))(this, a1);
	}

	::System::Void Method_1_6386CA16CA888107(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A6EFD9957B9445A2_METHOD_1_6386CA16CA888107_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A414B71D826CB224(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6EFD9957B9445A2_METHOD_1_A414B71D826CB224_OFFSET))(this, a1);
	}
};
