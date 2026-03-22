#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D659ECBFCC50AE6D_Class_1_E31A8B64E4DA2485;
namespace System { class String; }

#define CLASS_1_D659ECBFCC50AE6D_METHOD_1_C0FBE2EB5AC963BC_OFFSET UNITYSDK_OFFSET(0x8757B00)
#define CLASS_1_D659ECBFCC50AE6D__CTOR_OFFSET UNITYSDK_OFFSET(0x8757AE0)

inline static constexpr unsigned int Class_1_D659ECBFCC50AE6D_TypeDefinitionIndex = 51379;

class Class_1_D659ECBFCC50AE6D : public ::System::Object
{
public:
	::System::String* Title; // 0x10
	::Il2CppArray<::Class_1_D659ECBFCC50AE6D_Class_1_E31A8B64E4DA2485*>* RoleList; // 0x18
	::System::UInt32 CampID; // 0x20
	::System::UInt32 SectionID; // 0x24
	::System::UInt32 ChapterID; // 0x28
	::System::UInt32 PlayerLevel; // 0x2C
	::System::UInt32 UID; // 0x30
	::System::UInt32 DivisiionID; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D659ECBFCC50AE6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C0FBE2EB5AC963BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D659ECBFCC50AE6D_METHOD_1_C0FBE2EB5AC963BC_OFFSET))(this);
	}
};
