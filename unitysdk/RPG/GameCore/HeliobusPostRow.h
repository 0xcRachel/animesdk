#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172B60F0)
#define RPG_GAMECORE_HELIOBUSPOSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172B7A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostRow_TypeDefinitionIndex = 12577;

	class HeliobusPostRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PostUnlockSubMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* PlayerCommentIDList; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_8*>* Likes; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PostFansReward; // 0x28
		::System::UInt32 ReplyIncomeReward; // 0x30
		::System::UInt32 PostIncomeReward; // 0x34
		::System::UInt32 PostUnlockPhase; // 0x38
		::RPG::Client::TextID HeliobusPostContent; // 0x40
		::System::UInt32 HeliobusUserID; // 0x50
		::System::Boolean IsClosePanel; // 0x54
		::RPG::Client::TextID HeliobusPostTitle; // 0x58
		::System::UInt32 PostImgID; // 0x68
		::System::UInt32 HeliobusPostID; // 0x6C
		::RPG::Client::TextID PostFansPreview; // 0x70
		::RPG::GameCore::HeliobusPostType PostType; // 0x80
		::System::UInt32 PostTypeParameter; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusPostRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusPostRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
