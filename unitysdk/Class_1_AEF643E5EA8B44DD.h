#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_AEF643E5EA8B44DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15266F00)

inline static constexpr unsigned int Class_1_AEF643E5EA8B44DD_TypeDefinitionIndex = 50277;

class Class_1_AEF643E5EA8B44DD : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonEnum** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_TypeDefinitionIndex)->GetStaticField(0x67DB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF643E5EA8B44DD__CCTOR_OFFSET))();
	}
};
