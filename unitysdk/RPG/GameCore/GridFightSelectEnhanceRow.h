#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSelectEnhanceConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B48360)
#define RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B48810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSelectEnhanceRow_TypeDefinitionIndex = 12462;

	class GridFightSelectEnhanceRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::Double>* ParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::RPG::Client::TextID EnhanceName; // 0x28
		::System::UInt32 Count; // 0x38
		::RPG::GameCore::GridFightSelectEnhanceConditionType SelectCondition; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::UInt32 TraitEffectID; // 0x44
		::RPG::Client::TextID EnhanceDesc; // 0x48
		::RPG::Client::TextID EnhanceSimpleDesc; // 0x58
		::System::UInt32 Cost; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSelectEnhanceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSelectEnhanceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSELECTENHANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
