#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_251352F0D2206392_CLASS_1_5B21A4B1C0881FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x17256E00)

inline static constexpr unsigned int Class_1_251352F0D2206392_Class_1_5B21A4B1C0881FA4_TypeDefinitionIndex = 8433;

class Class_1_251352F0D2206392_Class_1_5B21A4B1C0881FA4 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::MVector3>* Field_1_5; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_6; // 0x18
	::RPG::MVector3 Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x2C
	::System::Single Field_1_3; // 0x30
	::System::Boolean Field_1_7; // 0x34
	::RPG::MVector3 Field_1_4; // 0x38
	::RPG::MVector3 Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_251352F0D2206392_CLASS_1_5B21A4B1C0881FA4__CTOR_OFFSET))(this);
	}
};
