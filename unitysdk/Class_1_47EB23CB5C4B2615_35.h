#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_47EB23CB5C4B2615_35_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x10B20760)
#define CLASS_1_47EB23CB5C4B2615_35_METHOD_1_F670989E2A295B2A_OFFSET UNITYSDK_OFFSET(0x10B207E0)
#define CLASS_1_47EB23CB5C4B2615_35__CTOR_OFFSET UNITYSDK_OFFSET(0x10B207D0)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_35_TypeDefinitionIndex = 58274;

class Class_1_47EB23CB5C4B2615_35 : public ::System::Object
{
public:
	static ::Class_1_47EB23CB5C4B2615_35** StaticGet_Field_1_0()
	{
		return (::Class_1_47EB23CB5C4B2615_35**)Il2CppClass::FromTypeDefinitionIndex(Class_1_47EB23CB5C4B2615_35_TypeDefinitionIndex)->GetStaticField(0x445A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_35__CTOR_OFFSET))(this);
	}

	static ::Class_1_47EB23CB5C4B2615_35* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_47EB23CB5C4B2615_35*(*)())((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_35_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::RPG::Client::Promises::Promise* Method_1_F670989E2A295B2A()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_35_METHOD_1_F670989E2A295B2A_OFFSET))(this);
	}
};
