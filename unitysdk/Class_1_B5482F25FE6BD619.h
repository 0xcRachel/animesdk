#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsUserType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B5482F25FE6BD619_METHOD_1_092E633B9CD2BE71_OFFSET UNITYSDK_OFFSET(0x171CC0F0)
#define CLASS_1_B5482F25FE6BD619__CTOR_OFFSET UNITYSDK_OFFSET(0x171CC2E0)

inline static constexpr unsigned int Class_1_B5482F25FE6BD619_TypeDefinitionIndex = 12640;

class Class_1_B5482F25FE6BD619 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::RPG::GameCore::LimaoNewsUserType Field_1_3; // 0x28
	::System::UInt32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5482F25FE6BD619__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_092E633B9CD2BE71(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B5482F25FE6BD619*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B5482F25FE6BD619*&))((::PBYTE)hIl2Cpp + CLASS_1_B5482F25FE6BD619_METHOD_1_092E633B9CD2BE71_OFFSET))(a1, a2);
	}
};
