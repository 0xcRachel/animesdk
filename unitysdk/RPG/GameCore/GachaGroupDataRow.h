#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GACHAGROUPDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1723BD20)
#define RPG_GAMECORE_GACHAGROUPDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1723CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaGroupDataRow_TypeDefinitionIndex = 12204;

	class GachaGroupDataRow : public ::System::Object
	{
	public:
		::System::String* PoolLabelIcon; // 0x10
		::Il2CppArray<::System::UInt32>* GachaIDList; // 0x18
		::System::String* PoolLabelIconSelected; // 0x20
		::System::UInt32 GroupID; // 0x28
		::RPG::GameCore::GachaGroupType GroupType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GachaGroupDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaGroupDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
