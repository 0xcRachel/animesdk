#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeBloomMappingConfig; }
namespace System { class String; }

#define CLASS_1_D025A505589DE81C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE1756F0)
#define CLASS_1_D025A505589DE81C_METHOD_1_DC21AF5416ED0753_OFFSET UNITYSDK_OFFSET(0xE175740)
#define CLASS_1_D025A505589DE81C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xE175650)

inline static constexpr unsigned int Class_1_D025A505589DE81C_TypeDefinitionIndex = 67494;

class Class_1_D025A505589DE81C : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterEyeBloomMappingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterEyeBloomMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D025A505589DE81C_TypeDefinitionIndex)->GetStaticField(0x6A850);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D025A505589DE81C_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D025A505589DE81C_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::CharacterEyeBloomConfig* Method_1_DC21AF5416ED0753(::System::String* a1)
	{
		return ((::RPG::GameCore::CharacterEyeBloomConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D025A505589DE81C_METHOD_1_DC21AF5416ED0753_OFFSET))(a1);
	}
};
