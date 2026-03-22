#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_637CF5391C15E01B;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_2DC2953593A057D7_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x164F1FE0)
#define CLASS_1_2DC2953593A057D7__CTOR_OFFSET UNITYSDK_OFFSET(0x164F21C0)

inline static constexpr unsigned int Class_1_2DC2953593A057D7_TypeDefinitionIndex = 10792;

class Class_1_2DC2953593A057D7 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_637CF5391C15E01B*>* Field_1_3; // 0x10
	::System::String* Field_1_2; // 0x18
	::RPG::GameCore::HipplenEffectType Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DC2953593A057D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_2DC2953593A057D7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_2DC2953593A057D7*&))((::PBYTE)hIl2Cpp + CLASS_1_2DC2953593A057D7_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};
