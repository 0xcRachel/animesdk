#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B19ED0)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1A4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentConfigRow_TypeDefinitionIndex = 12174;

	class GridFightAugmentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::Il2CppArray<::System::UInt32>* AugmentGameRefScore; // 0x18
		::System::String* AugmentSearchKey; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x30
		::Il2CppArray<::System::String*>* AugmentSavedValueList; // 0x38
		::System::String* MiniIconPath; // 0x40
		::Il2CppArray<::System::UInt32>* AugmentGameRefTrait; // 0x48
		::Il2CppArray<::System::UInt32>* ChapterLimitList; // 0x50
		::System::String* JsonPath; // 0x58
		::System::UInt32 ID; // 0x60
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x64
		::RPG::Client::TextID HexDesc; // 0x68
		::System::UInt32 IsOCEffective; // 0x78
		::System::UInt32 CategoryID; // 0x7C
		::RPG::Client::TextID HexName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightAugmentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAugmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
