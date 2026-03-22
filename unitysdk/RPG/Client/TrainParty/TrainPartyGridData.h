#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_900;
namespace RPG::GameCore { class TrainPartyGridConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA0E4DE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETGRIDICONPATH_OFFSET UNITYSDK_OFFSET(0xA0E5110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETSPECIALSHOWIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA0E5050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETTIPSCONTENT_OFFSET UNITYSDK_OFFSET(0xA0E54D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0xA0E5380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ISRARE_OFFSET UNITYSDK_OFFSET(0xA0E5770)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_MUSTSTOP_OFFSET UNITYSDK_OFFSET(0xA0E5650)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA0E5320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA0E5630)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_OVERRITIPS_OFFSET UNITYSDK_OFFSET(0xA0E4F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_RESETTIPS_OFFSET UNITYSDK_OFFSET(0xA0E4F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA0E5640)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA0E4E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xA0E4FB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E4DD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGridData_TypeDefinitionIndex = 59355;

	class TrainPartyGridData : public ::System::Object
	{
	public:
		::System::String* _OverrideTipsContent; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x18
		::System::UInt32 _GridID; // 0x1C
		::RPG::GameCore::TrainPartyGridType _GridType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartyGridData* Create(::Class_1_FA4F4A67B1C04320_900* serverInfo)
		{
			return ((::RPG::Client::TrainParty::TrainPartyGridData*(*)(::Class_1_FA4F4A67B1C04320_900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_CREATE_OFFSET))(serverInfo);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_900* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_900*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void OverriTips(::System::String* tips)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_OVERRITIPS_OFFSET))(this, tips);
		}

		::System::Void ResetTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_RESETTIPS_OFFSET))(this);
		}

		::System::Void TryTriggerTutorial(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_TRYTRIGGERTUTORIAL_OFFSET))(this, index);
		}

		::System::String* GetSpecialShowImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETSPECIALSHOWIMAGEPATH_OFFSET))(this);
		}

		::System::String* GetGridIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETGRIDICONPATH_OFFSET))(this);
		}

		::System::String* GetTipsContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GETTIPSCONTENT_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyGridType get_GridType()
		{
			return ((::RPG::GameCore::TrainPartyGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_GRIDTYPE_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyGridConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyGridConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_MustStop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_MUSTSTOP_OFFSET))(this);
		}

		::System::Boolean get_IsRare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGRIDDATA_GET_ISRARE_OFFSET))(this);
		}
	};
}
