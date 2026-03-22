#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46015F4592C6DCEA_METHOD_1_4A81CBD5297CB573_OFFSET UNITYSDK_OFFSET(0x8779EA0)
#define CLASS_1_46015F4592C6DCEA_METHOD_1_B9DC8CAD712C25E9_OFFSET UNITYSDK_OFFSET(0x8779FF0)
#define CLASS_1_46015F4592C6DCEA__CTOR_OFFSET UNITYSDK_OFFSET(0x877A090)

inline static constexpr unsigned int Class_1_46015F4592C6DCEA_TypeDefinitionIndex = 50159;

class Class_1_46015F4592C6DCEA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46015F4592C6DCEA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* Method_1_4A81CBD5297CB573()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46015F4592C6DCEA_METHOD_1_4A81CBD5297CB573_OFFSET))(this);
	}

	::RPG::Client::AvatarData* Method_1_B9DC8CAD712C25E9(::RPG::Client::AvatarRoleType a1)
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + CLASS_1_46015F4592C6DCEA_METHOD_1_B9DC8CAD712C25E9_OFFSET))(this, a1);
	}
};
