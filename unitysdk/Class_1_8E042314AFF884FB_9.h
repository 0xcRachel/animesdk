#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_3_44EDAE37250FA2DB;

#define CLASS_1_8E042314AFF884FB_9_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFEC4040)
#define CLASS_1_8E042314AFF884FB_9_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xFEC4000)
#define CLASS_1_8E042314AFF884FB_9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFEC3FC0)
#define CLASS_1_8E042314AFF884FB_9__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC3FB0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_9_TypeDefinitionIndex = 60489;

class Class_1_8E042314AFF884FB_9 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x10
	::Class_3_44EDAE37250FA2DB* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_EXECUTE_OFFSET))(this);
	}
};
