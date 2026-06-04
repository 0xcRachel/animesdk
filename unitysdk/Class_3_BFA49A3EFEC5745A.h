#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagContainer.h"

#define CLASS_3_BFA49A3EFEC5745A_CLEAR_OFFSET UNITYSDK_OFFSET(0x185FF3F0)
#define CLASS_3_BFA49A3EFEC5745A_METHOD_3_991DF666F365930A_OFFSET UNITYSDK_OFFSET(0x185FF440)
#define CLASS_3_BFA49A3EFEC5745A__CTOR_OFFSET UNITYSDK_OFFSET(0x185FF5B0)
#define CLASS_3_BFA49A3EFEC5745A___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x185FF5C0)

inline static constexpr unsigned int Class_3_BFA49A3EFEC5745A_TypeDefinitionIndex = 38765;

class Class_3_BFA49A3EFEC5745A : public ::RPG::GameCore::HoyoTagContainer
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_3_991DF666F365930A(::RPG::GameCore::HoyoTagContainer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A_METHOD_3_991DF666F365930A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFA49A3EFEC5745A___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
