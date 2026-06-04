#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }

#define CLASS_3_01FB158BC8A8CDA0_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1930B790)
#define CLASS_3_01FB158BC8A8CDA0_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1930B810)
#define CLASS_3_01FB158BC8A8CDA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1930B7E0)

inline static constexpr unsigned int Class_3_01FB158BC8A8CDA0_TypeDefinitionIndex = 22768;

class Class_3_01FB158BC8A8CDA0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::RtCharacterVisual* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01FB158BC8A8CDA0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_01FB158BC8A8CDA0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_01FB158BC8A8CDA0*&))((::PBYTE)hIl2Cpp + CLASS_3_01FB158BC8A8CDA0_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_01FB158BC8A8CDA0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_01FB158BC8A8CDA0*))((::PBYTE)hIl2Cpp + CLASS_3_01FB158BC8A8CDA0_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
