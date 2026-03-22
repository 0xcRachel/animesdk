#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_2_AF4E89503EBBCCA0;
class Class_3_44EDAE37250FA2DB;

#define CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_1_OFFSET UNITYSDK_OFFSET(0x8A6A000)
#define CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_OFFSET UNITYSDK_OFFSET(0x8A69ED0)
#define CLASS_1_9E393C123EBA1519__CTOR_OFFSET UNITYSDK_OFFSET(0x8A69EC0)

inline static constexpr unsigned int Class_1_9E393C123EBA1519_TypeDefinitionIndex = 60486;

class Class_1_9E393C123EBA1519 : public ::System::Object
{
public:
	::Class_2_AF4E89503EBBCCA0* Field_1_0; // 0x10
	::Class_1_867B6CE75953535A_1* Field_1_1; // 0x18
	::Class_3_44EDAE37250FA2DB* Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_44EDAE37250FA2DB* a1, ::Class_1_867B6CE75953535A_1* a2, ::Class_2_AF4E89503EBBCCA0* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_44EDAE37250FA2DB*, ::Class_1_867B6CE75953535A_1*, ::Class_2_AF4E89503EBBCCA0*))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6A36F32DD22457F8(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A36F32DD22457F8_1(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + CLASS_1_9E393C123EBA1519_METHOD_1_6A36F32DD22457F8_1_OFFSET))(this, a1);
	}
};
