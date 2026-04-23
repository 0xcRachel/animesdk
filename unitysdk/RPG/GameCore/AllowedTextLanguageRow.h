#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AD4970)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD5520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedTextLanguageRow_TypeDefinitionIndex = 11942;

	class AllowedTextLanguageRow : public ::System::Object
	{
	public:
		::System::String* LogoImgPath; // 0x10
		::System::String* LanguageCultureCode; // 0x18
		::System::String* Ellipsis; // 0x20
		::System::String* TextLanguageKey; // 0x28
		::System::String* FontName; // 0x30
		::System::String* PSFontName; // 0x38
		::System::String* PSFont; // 0x40
		::System::String* NoLeading; // 0x48
		::System::String* CondensedFont; // 0x50
		::System::String* SDKkey; // 0x58
		::System::String* Font; // 0x60
		::System::String* CondensedFontName; // 0x68
		::System::Single RubyStrRatio; // 0x70
		::System::UInt32 LanguageType; // 0x74
		::System::Single TextureScale; // 0x78
		::RPG::Client::TextID ShowString; // 0x80
		::System::UInt32 FontGrowSize; // 0x90
		::System::Boolean NoWrap; // 0x94
		::System::Boolean RubyHoldAlignSpace; // 0x95
		::System::Boolean Justify; // 0x96
		::System::Boolean ReplaceSpaceWithNBSPInRuby; // 0x97

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AllowedTextLanguageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AllowedTextLanguageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
