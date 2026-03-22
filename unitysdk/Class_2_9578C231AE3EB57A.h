#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B086460A47690D65.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define CLASS_2_9578C231AE3EB57A_METHOD_2_D933AFD11CC5BDCA_OFFSET UNITYSDK_OFFSET(0x86624B0)
#define CLASS_2_9578C231AE3EB57A__CCTOR_OFFSET UNITYSDK_OFFSET(0x8662600)
#define CLASS_2_9578C231AE3EB57A__CTOR_OFFSET UNITYSDK_OFFSET(0x86625D0)

inline static constexpr unsigned int Class_2_9578C231AE3EB57A_TypeDefinitionIndex = 44126;

class Class_2_9578C231AE3EB57A : public ::Class_1_B086460A47690D65
{
public:
	static ::Class_2_9578C231AE3EB57A** StaticGet_Field_2_0()
	{
		return (::Class_2_9578C231AE3EB57A**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9578C231AE3EB57A_TypeDefinitionIndex)->GetStaticField(0x45280);
	}
	::System::String* Field_2_2; // 0x30
	::System::Nullable_1<::System::Int32> Field_2_6; // 0x38
	::System::Boolean Field_2_1; // 0x40
	::System::Boolean Field_2_3; // 0x41
	::System::Nullable_1<::System::Int32> Field_2_4; // 0x44
	::System::Single Field_2_8; // 0x4C
	::System::Nullable_1<::System::Int32> Field_2_7; // 0x50
	::System::Nullable_1<::System::Int32> Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9578C231AE3EB57A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9578C231AE3EB57A__CCTOR_OFFSET))();
	}

	::Class_2_9578C231AE3EB57A* Method_2_D933AFD11CC5BDCA()
	{
		return ((::Class_2_9578C231AE3EB57A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9578C231AE3EB57A_METHOD_2_D933AFD11CC5BDCA_OFFSET))(this);
	}
};
