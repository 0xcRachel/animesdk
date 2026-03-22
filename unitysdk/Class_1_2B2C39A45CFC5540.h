#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD7EC315F99B05E;
class Class_1_BB505CFCA176BF03;
namespace RPG::GameCore { class StageMonsterWave; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B2C39A45CFC5540_METHOD_1_29EEB1B5E4A8BD14_OFFSET UNITYSDK_OFFSET(0x9462CE0)
#define CLASS_1_2B2C39A45CFC5540_METHOD_1_6EE541EDC1E173FB_OFFSET UNITYSDK_OFFSET(0x9462AC0)
#define CLASS_1_2B2C39A45CFC5540_METHOD_1_A26BD4F5F85AAFF9_OFFSET UNITYSDK_OFFSET(0x94629B0)
#define CLASS_1_2B2C39A45CFC5540__CTOR_OFFSET UNITYSDK_OFFSET(0x9462CA0)

inline static constexpr unsigned int Class_1_2B2C39A45CFC5540_TypeDefinitionIndex = 44078;

class Class_1_2B2C39A45CFC5540 : public ::System::Object
{
public:
	::Class_1_9AD7EC315F99B05E* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BB505CFCA176BF03*>* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B2C39A45CFC5540__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_A26BD4F5F85AAFF9()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B2C39A45CFC5540_METHOD_1_A26BD4F5F85AAFF9_OFFSET))(this);
	}

	static ::Class_1_2B2C39A45CFC5540* Method_1_6EE541EDC1E173FB(::RPG::GameCore::StageMonsterWave* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_2B2C39A45CFC5540*(*)(::RPG::GameCore::StageMonsterWave*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2B2C39A45CFC5540_METHOD_1_6EE541EDC1E173FB_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Class_1_2B2C39A45CFC5540*>* Method_1_29EEB1B5E4A8BD14(::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* a1)
	{
		return ((::Il2CppArray<::Class_1_2B2C39A45CFC5540*>*(*)(::Il2CppArray<::RPG::GameCore::StageMonsterWave*>*))((::PBYTE)hIl2Cpp + CLASS_1_2B2C39A45CFC5540_METHOD_1_29EEB1B5E4A8BD14_OFFSET))(a1);
	}
};
