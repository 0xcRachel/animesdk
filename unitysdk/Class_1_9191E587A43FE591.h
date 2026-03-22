#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
class Class_1_74F732AB6D78C9D0;
namespace System { class String; }

#define CLASS_1_9191E587A43FE591_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x15E24650)
#define CLASS_1_9191E587A43FE591_METHOD_1_10F7353C06A07A9E_OFFSET UNITYSDK_OFFSET(0x15E248B0)
#define CLASS_1_9191E587A43FE591_METHOD_1_756C8A92A12F087D_OFFSET UNITYSDK_OFFSET(0x15E24A10)
#define CLASS_1_9191E587A43FE591_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15E246A0)
#define CLASS_1_9191E587A43FE591_METHOD_1_D4247158591FA721_OFFSET UNITYSDK_OFFSET(0x15E24770)
#define CLASS_1_9191E587A43FE591_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x15E246F0)
#define CLASS_1_9191E587A43FE591__CTOR_OFFSET UNITYSDK_OFFSET(0x15E088C0)

inline static constexpr unsigned int Class_1_9191E587A43FE591_TypeDefinitionIndex = 31219;

class Class_1_9191E587A43FE591 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_74F732AB6D78C9D0*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_42* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_42*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D4247158591FA721(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591_METHOD_1_D4247158591FA721_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_42* Method_1_10F7353C06A07A9E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_42*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591_METHOD_1_10F7353C06A07A9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_756C8A92A12F087D(::System::String* a1, ::RPG::Client::ByteHash16 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_9191E587A43FE591_METHOD_1_756C8A92A12F087D_OFFSET))(this, a1, a2);
	}
};
