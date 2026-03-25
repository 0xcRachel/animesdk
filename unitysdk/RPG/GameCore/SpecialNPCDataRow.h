#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPECIALNPCDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17771E30)
#define RPG_GAMECORE_SPECIALNPCDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17772640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCDataRow_TypeDefinitionIndex = 13870;

	class SpecialNPCDataRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* JsonPath; // 0x18
		::System::String* ConfigEntityPath; // 0x20
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x28
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialNPCDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
