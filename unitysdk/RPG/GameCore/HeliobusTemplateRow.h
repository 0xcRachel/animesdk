#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusTemplateType.h"
#include "unitysdk/RPG/GameCore/HeliobusTendencyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B6CEF0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6D690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusTemplateRow_TypeDefinitionIndex = 12513;

	class HeliobusTemplateRow : public ::System::Object
	{
	public:
		::System::String* PrefabPathNormal; // 0x10
		::System::String* PrefabPathSmall; // 0x18
		::RPG::Client::TextID HeliobusTemplateContent; // 0x20
		::RPG::Client::TextID HeliobusTemplateTitle; // 0x30
		::RPG::GameCore::HeliobusTendencyType TemplateTendency; // 0x40
		::System::UInt32 PostImgID; // 0x44
		::System::UInt32 HeliobusTemplateID; // 0x48
		::RPG::GameCore::HeliobusTemplateType TemplateType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusTemplateRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusTemplateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
