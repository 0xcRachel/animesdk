#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class MessageContentGotoBlock_IGotoCommand; }

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F7840)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x96F78E0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96F7780)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET UNITYSDK_OFFSET(0x96F7790)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x96F7830)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_TypeDefinitionIndex = 50192;

	class MessageContentGotoBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::MessageContentGotoBlock_IGotoCommand* _Command; // 0x18

		::System::Void _ctor(::RPG::Client::MessageContentGotoBlock_IGotoCommand* command)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentGotoBlock_IGotoCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET))(this, command);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET))(this);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenGameTool(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET))(avatarID);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET))(this);
		}
	};
}
