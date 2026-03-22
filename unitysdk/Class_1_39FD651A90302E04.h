#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E012177D06C0B2FD;
namespace RPG::GameCore { class DeviceSettingConfig; }

#define CLASS_1_39FD651A90302E04_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x84A1EF0)
#define CLASS_1_39FD651A90302E04_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x84A21E0)
#define CLASS_1_39FD651A90302E04_METHOD_1_BAD4FD950C310B05_OFFSET UNITYSDK_OFFSET(0x84A2180)

inline static constexpr unsigned int Class_1_39FD651A90302E04_TypeDefinitionIndex = 54175;

class Class_1_39FD651A90302E04 : public ::System::Object
{
public:
	static ::Class_1_E012177D06C0B2FD** StaticGet_Field_1_1()
	{
		return (::Class_1_E012177D06C0B2FD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_39FD651A90302E04_TypeDefinitionIndex)->GetStaticField(0x456B0);
	}
	static ::RPG::GameCore::DeviceSettingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::DeviceSettingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_39FD651A90302E04_TypeDefinitionIndex)->GetStaticField(0x456B8);
	}

	static ::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_39FD651A90302E04_METHOD_1_41A074549EF25F63_OFFSET))();
	}

	static ::RPG::GameCore::DeviceSettingConfig* Method_1_BAD4FD950C310B05()
	{
		return ((::RPG::GameCore::DeviceSettingConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_39FD651A90302E04_METHOD_1_BAD4FD950C310B05_OFFSET))();
	}

	static ::Class_1_E012177D06C0B2FD* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_E012177D06C0B2FD*(*)())((::PBYTE)hIl2Cpp + CLASS_1_39FD651A90302E04_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}
};
