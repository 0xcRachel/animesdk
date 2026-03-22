#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F8030)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x96F80D0)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96F7E80)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x96F80E0)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96F8020)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x96F7E90)
#define RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x96F7EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentImageBlock_TypeDefinitionIndex = 50195;

	class MessageContentImageBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 imageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_OFFSET))(this, imageID);
		}

		::System::Void _ctor_1(::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__CTOR_1_OFFSET))(this, imagePath);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::String* _GetImagePath(::System::UInt32 imageID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK__GETIMAGEPATH_OFFSET))(this, imageID);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTIMAGEBLOCK_SET_IMAGEPATH_OFFSET))(this, value);
		}
	};
}
