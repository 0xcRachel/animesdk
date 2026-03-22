#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_821;
namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_896583BE596CCB59_1_METHOD_1_2A883DD032F22BF2_OFFSET UNITYSDK_OFFSET(0x8796C40)
#define CLASS_1_896583BE596CCB59_1_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x8796CB0)
#define CLASS_1_896583BE596CCB59_1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8796D40)
#define CLASS_1_896583BE596CCB59_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8796DB0)

inline static constexpr unsigned int Class_1_896583BE596CCB59_1_TypeDefinitionIndex = 58145;

class Class_1_896583BE596CCB59_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_821*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A883DD032F22BF2(::Class_0_16E4307DCC419505_821* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_821*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_METHOD_1_2A883DD032F22BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_821* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_821*))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_896583BE596CCB59_1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
