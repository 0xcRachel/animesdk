#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

class Class_1_AE2EBF12D2D8D8EB;
class Class_1_B5BAE7EF32C11912;
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_5DC1C6CD93AE2511_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A6978F0)
#define CLASS_1_5DC1C6CD93AE2511_METHOD_1_169815F839BB3FF8_OFFSET UNITYSDK_OFFSET(0x1A697D00)
#define CLASS_1_5DC1C6CD93AE2511_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A697D30)
#define CLASS_1_5DC1C6CD93AE2511_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x1A697CD0)
#define CLASS_1_5DC1C6CD93AE2511_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1A697C00)
#define CLASS_1_5DC1C6CD93AE2511_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A697B50)
#define CLASS_1_5DC1C6CD93AE2511__CTOR_OFFSET UNITYSDK_OFFSET(0x1A697D60)
#define CLASS_1_5DC1C6CD93AE2511___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A697D70)
#define CLASS_1_5DC1C6CD93AE2511___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A697D80)

inline static constexpr unsigned int Class_1_5DC1C6CD93AE2511_TypeDefinitionIndex = 37892;

class Class_1_5DC1C6CD93AE2511 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511_EQUALS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511_TOSTRING_OFFSET))(this);
	}

	::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511_TOSTRING_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511_METHOD_1_F24A112B56A2E4B4_OFFSET))(this);
	}

	::RPG::Client::CompilerFramework::DiagnosticSeverity Method_1_169815F839BB3FF8()
	{
		return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511_METHOD_1_169815F839BB3FF8_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DC1C6CD93AE2511___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
