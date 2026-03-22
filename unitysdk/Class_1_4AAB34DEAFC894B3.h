#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x10354CF0)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_D641EE135D66971B_OFFSET UNITYSDK_OFFSET(0x10354D70)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_E4B80B3FC2F92ACA_1_OFFSET UNITYSDK_OFFSET(0x10354C10)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_E4B80B3FC2F92ACA_2_OFFSET UNITYSDK_OFFSET(0x10354C80)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_E4B80B3FC2F92ACA_OFFSET UNITYSDK_OFFSET(0x10354BA0)
#define CLASS_1_4AAB34DEAFC894B3_METHOD_1_F1F5CF477C14872A_OFFSET UNITYSDK_OFFSET(0x10354DF0)
#define CLASS_1_4AAB34DEAFC894B3__CTOR_OFFSET UNITYSDK_OFFSET(0x10354EE0)

inline static constexpr unsigned int Class_1_4AAB34DEAFC894B3_TypeDefinitionIndex = 44099;

class Class_1_4AAB34DEAFC894B3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_3; // 0x14
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E4B80B3FC2F92ACA()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_E4B80B3FC2F92ACA_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E4B80B3FC2F92ACA_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_E4B80B3FC2F92ACA_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E4B80B3FC2F92ACA_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_E4B80B3FC2F92ACA_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::RPG::GameCore::AvatarBaseType Method_1_D641EE135D66971B()
	{
		return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_D641EE135D66971B_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* Method_1_F1F5CF477C14872A()
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AAB34DEAFC894B3_METHOD_1_F1F5CF477C14872A_OFFSET))(this);
	}
};
