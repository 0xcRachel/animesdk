#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAGALLERYTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194CB530)
#define RPG_GAMECORE_CHIMERAGALLERYTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194CB770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraGalleryTalkRow_TypeDefinitionIndex = 12334;

	class ChimeraGalleryTalkRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::RPG::GameCore::ChimeraTalkConditionType ConditionType; // 0x20
		::System::Single Sort; // 0x24
		::RPG::Client::TextID NumberedTitle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraGalleryTalkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraGalleryTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYTALKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
