#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_85CDC97563BA896D_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0xADB8B10)
#define CLASS_3_85CDC97563BA896D_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0xADB8B90)
#define CLASS_3_85CDC97563BA896D__CTOR_OFFSET UNITYSDK_OFFSET(0xADB8B60)

inline static constexpr unsigned int Class_3_85CDC97563BA896D_TypeDefinitionIndex = 20293;

class Class_3_85CDC97563BA896D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::Client::TextID Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x28
	::RPG::Client::TextID Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85CDC97563BA896D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85CDC97563BA896D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85CDC97563BA896D*&))((::PBYTE)hIl2Cpp + CLASS_3_85CDC97563BA896D_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85CDC97563BA896D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85CDC97563BA896D*))((::PBYTE)hIl2Cpp + CLASS_3_85CDC97563BA896D_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
