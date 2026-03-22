#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F89B0)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x96F8A50)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96F8990)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x96F89A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentPlainTextBlock_TypeDefinitionIndex = 50189;

	class MessageContentPlainTextBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _Content_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK__CTOR_OFFSET))(this, content);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_CONTENT_OFFSET))(this);
		}
	};
}
