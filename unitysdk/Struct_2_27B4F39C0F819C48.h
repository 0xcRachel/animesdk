#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_0DC8B4C201AFD519.h"
#include "unitysdk/Struct_2_53B9F70B1C453946.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_27B4F39C0F819C48_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x735D0)

inline static constexpr unsigned int Struct_2_27B4F39C0F819C48_TypeDefinitionIndex = 54326;

struct alignas(8) Struct_2_27B4F39C0F819C48
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::RootMotion::IKJob::IKTransformRef Field_2_2; // 0x18
	::RootMotion::IKJob::IKTransformRef Field_2_3; // 0x28
	::Il2CppArray<::Struct_2_53B9F70B1C453946>* Field_2_4; // 0x38
	::Il2CppArray<::Struct_2_0DC8B4C201AFD519>* Field_2_5; // 0x40

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_27B4F39C0F819C48_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
