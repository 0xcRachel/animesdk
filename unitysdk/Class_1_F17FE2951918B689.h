#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_F17FE2951918B689_METHOD_1_D7FD80F0A66781EF_OFFSET UNITYSDK_OFFSET(0x1642CA50)
#define CLASS_1_F17FE2951918B689__CTOR_OFFSET UNITYSDK_OFFSET(0x1642CC30)

inline static constexpr unsigned int Class_1_F17FE2951918B689_TypeDefinitionIndex = 12663;

class Class_1_F17FE2951918B689 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F17FE2951918B689__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D7FD80F0A66781EF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_F17FE2951918B689*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_F17FE2951918B689*&))((::PBYTE)hIl2Cpp + CLASS_1_F17FE2951918B689_METHOD_1_D7FD80F0A66781EF_OFFSET))(a1, a2);
	}
};
