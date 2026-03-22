#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8789803C08702B21_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F1E0A0)
#define CLASS_1_8789803C08702B21__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1E0F0)

inline static constexpr unsigned int Class_1_8789803C08702B21_TypeDefinitionIndex = 27861;

class Class_1_8789803C08702B21 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789803C08702B21__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8789803C08702B21_CLEAR_OFFSET))(this);
	}
};
