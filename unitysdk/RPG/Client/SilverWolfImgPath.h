#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA48D690)
#define RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xA48E150)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfImgPath_TypeDefinitionIndex = 55457;

	class SilverWolfImgPath : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::String* IconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* iconPath, ::System::String* figurePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFIMGPATH__CTOR_1_OFFSET))(this, iconPath, figurePath);
		}
	};
}
