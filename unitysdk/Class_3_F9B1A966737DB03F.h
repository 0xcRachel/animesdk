#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimTrainEnergyGear; }

#define CLASS_3_F9B1A966737DB03F_METHOD_3_611E7447E4396CD7_OFFSET UNITYSDK_OFFSET(0x16D78230)
#define CLASS_3_F9B1A966737DB03F_METHOD_3_ABC666C07EB27386_OFFSET UNITYSDK_OFFSET(0x16D782B0)
#define CLASS_3_F9B1A966737DB03F__CTOR_OFFSET UNITYSDK_OFFSET(0x16D78280)

inline static constexpr unsigned int Class_3_F9B1A966737DB03F_TypeDefinitionIndex = 19675;

class Class_3_F9B1A966737DB03F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergyGear*>* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9B1A966737DB03F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_611E7447E4396CD7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F9B1A966737DB03F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F9B1A966737DB03F*&))((::PBYTE)hIl2Cpp + CLASS_3_F9B1A966737DB03F_METHOD_3_611E7447E4396CD7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABC666C07EB27386(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F9B1A966737DB03F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F9B1A966737DB03F*))((::PBYTE)hIl2Cpp + CLASS_3_F9B1A966737DB03F_METHOD_3_ABC666C07EB27386_OFFSET))(a1, a2);
	}
};
