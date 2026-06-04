#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2ACD63F96B5B2027_METHOD_1_5B1FE5ED00D5C572_OFFSET UNITYSDK_OFFSET(0x132F32E0)
#define CLASS_1_2ACD63F96B5B2027_METHOD_1_9B80C900B5E0AFBD_OFFSET UNITYSDK_OFFSET(0x132F3080)
#define CLASS_1_2ACD63F96B5B2027_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x132F32D0)
#define CLASS_1_2ACD63F96B5B2027_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x132F3150)
#define CLASS_1_2ACD63F96B5B2027_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x132F3210)
#define CLASS_1_2ACD63F96B5B2027_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x132F30F0)
#define CLASS_1_2ACD63F96B5B2027_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x132F3250)
#define CLASS_1_2ACD63F96B5B2027_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x132F3290)
#define CLASS_1_2ACD63F96B5B2027_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x132F31D0)
#define CLASS_1_2ACD63F96B5B2027_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x132F3190)
#define CLASS_1_2ACD63F96B5B2027__CTOR_OFFSET UNITYSDK_OFFSET(0x132F32F0)

inline static constexpr unsigned int Class_1_2ACD63F96B5B2027_TypeDefinitionIndex = 53431;

class Class_1_2ACD63F96B5B2027 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterModelComponent* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B80C900B5E0AFBD(::RPG::GameCore::CharacterModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_METHOD_1_9B80C900B5E0AFBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::CharacterModelComponent* Method_1_5B1FE5ED00D5C572()
	{
		return ((::RPG::GameCore::CharacterModelComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2ACD63F96B5B2027_METHOD_1_5B1FE5ED00D5C572_OFFSET))(this);
	}
};
