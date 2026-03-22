#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_339BE3A80C8E64FF_COMPARETO_OFFSET UNITYSDK_OFFSET(0x10591430)
#define CLASS_1_339BE3A80C8E64FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x105914B0)
#define CLASS_1_339BE3A80C8E64FF__CTOR_OFFSET UNITYSDK_OFFSET(0x105914A0)

inline static constexpr unsigned int Class_1_339BE3A80C8E64FF_TypeDefinitionIndex = 43509;

class Class_1_339BE3A80C8E64FF : public ::System::Object
{
public:
	static ::Class_1_339BE3A80C8E64FF** StaticGet_Field_1_4()
	{
		return (::Class_1_339BE3A80C8E64FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_339BE3A80C8E64FF_TypeDefinitionIndex)->GetStaticField(0x2C810);
	}
	::Il2CppArray<::RPG::GameCore::ControlSkillType>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339BE3A80C8E64FF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_339BE3A80C8E64FF__CCTOR_OFFSET))();
	}

	::System::Int32 CompareTo(::Class_1_339BE3A80C8E64FF* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_339BE3A80C8E64FF*))((::PBYTE)hIl2Cpp + CLASS_1_339BE3A80C8E64FF_COMPARETO_OFFSET))(this, a1);
	}
};
