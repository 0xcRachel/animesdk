#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1956DD70)
#define RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1956E180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEnhanceConfigRow_TypeDefinitionIndex = 12872;

	class GridFightEnhanceConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x24
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x28
		::RPG::Client::TextID EnhanceName; // 0x38
		::RPG::Client::TextID EnhanceDesc; // 0x48
		::System::UInt32 GroupID; // 0x58
		::System::UInt32 Cost; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightEnhanceConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEnhanceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTENHANCECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
