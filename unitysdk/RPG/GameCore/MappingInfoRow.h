#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/RPG/GameCore/MappingInfoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_MAPPINGINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1739A6D0)
#define RPG_GAMECORE_MAPPINGINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1739B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoRow_TypeDefinitionIndex = 11450;

	class MappingInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ShowMonsterList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::MappingInfoType Type; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 WorldLevel; // 0x48
		::RPG::GameCore::FarmTypeConfig FarmType; // 0x4C
		::System::Boolean IsShowInFog; // 0x50
		::System::Boolean IsShowMonsterSummon; // 0x51
		::System::Boolean isShowCleared; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MappingInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MappingInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
