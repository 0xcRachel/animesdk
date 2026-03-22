#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_9DEC489B9B6A1E80_METHOD_1_565137FE23B0D177_OFFSET UNITYSDK_OFFSET(0xBEFFCE0)
#define CLASS_1_9DEC489B9B6A1E80_METHOD_1_B786D35BDA35790D_OFFSET UNITYSDK_OFFSET(0xBEFFD40)
#define CLASS_1_9DEC489B9B6A1E80__CTOR_OFFSET UNITYSDK_OFFSET(0xBEFFF40)

inline static constexpr unsigned int Class_1_9DEC489B9B6A1E80_TypeDefinitionIndex = 52111;

class Class_1_9DEC489B9B6A1E80 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DEC489B9B6A1E80__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_565137FE23B0D177(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_9DEC489B9B6A1E80_METHOD_1_565137FE23B0D177_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_B786D35BDA35790D(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_9DEC489B9B6A1E80_METHOD_1_B786D35BDA35790D_OFFSET))(this, a1);
	}
};
