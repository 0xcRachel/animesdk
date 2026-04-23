#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFPROGRESSATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7C170)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressAttributeData_TypeDefinitionIndex = 58712;

	class ElfProgressAttributeData : public ::System::Object
	{
	public:
		::RPG::Client::TextID AttributeName; // 0x10
		::System::Single AttributeValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTEDATA__CTOR_OFFSET))(this);
		}
	};
}
