#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D31DA0)
#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19D32380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionDetailRow_TypeDefinitionIndex = 11548;

	class PhotoExhibitionDetailRow : public ::System::Object
	{
	public:
		::System::String* UnlockPicPath; // 0x10
		::Il2CppArray<::System::String*>* MalePicPath; // 0x18
		::Il2CppArray<::System::UInt32>* TaskOption; // 0x20
		::Il2CppArray<::System::String*>* FemalePicPath; // 0x28
		::RPG::Client::TextID AuthorName; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 MissionID; // 0x44
		::RPG::Client::TextID GroupphotoDesc; // 0x48
		::RPG::Client::TextID RuikeReply; // 0x58
		::RPG::Client::TextID Unlock; // 0x68
		::RPG::Client::TextID Name; // 0x78
		::System::UInt32 FinishSubMissionID; // 0x88
		::System::Boolean ShowRuikeName; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoExhibitionDetailRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoExhibitionDetailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
