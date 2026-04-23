#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B8C100)
#define RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8C500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpecialGoodsConfigRow_TypeDefinitionIndex = 12868;

	class GridFightSpecialGoodsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::System::String* MiniIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* JsonPath; // 0x28
		::System::UInt32 Quality; // 0x30
		::System::UInt32 GroupID; // 0x34
		::System::UInt32 ID; // 0x38
		::System::UInt32 Cost; // 0x3C
		::RPG::Client::TextID GoodDesc; // 0x40
		::RPG::Client::TextID GoodName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALGOODSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
