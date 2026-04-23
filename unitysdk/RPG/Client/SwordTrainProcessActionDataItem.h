#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_34.h"
#include "unitysdk/RPG/Client/SwordTrainProcessActionStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingActionRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x16FDE040)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x16FDDFA0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x16FDE180)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x16FDE570)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16FDE1A0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16FDE3B0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16FDE630)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET UNITYSDK_OFFSET(0x16FDE670)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x16FDE650)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET UNITYSDK_OFFSET(0x16FDE490)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16FDE740)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x16FDE340)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16FDE0D0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x16FDE190)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16FDE640)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x16FDE660)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0x16FDE120)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDE030)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionDataItem_TypeDefinitionIndex = 57161;

	class SwordTrainProcessActionDataItem : public ::System::Object
	{
	public:
		::System::String* _PerformancePrefabPath_k__BackingField; // 0x10
		::RPG::Client::SwordTrainProcessActionStatus _Status_k__BackingField; // 0x18
		::Enum_3_4608E37A1B3D374A_34 Time; // 0x1C
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* Create(::System::UInt32 ID, ::Enum_3_4608E37A1B3D374A_34 time, ::RPG::Client::SwordTrainProcessActionStatus status)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::System::UInt32, ::Enum_3_4608E37A1B3D374A_34, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATE_OFFSET))(ID, time, status);
		}

		static ::RPG::Client::SwordTrainProcessActionDataItem* CreateEmpty(::Enum_3_4608E37A1B3D374A_34 time)
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_CREATEEMPTY_OFFSET))(time);
		}

		::System::Void SetPrefabPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SETPREFABPATH_OFFSET))(this, path);
		}

		::System::Void TransferToNextState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_TRANSFERTONEXTSTATE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingActionRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingActionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SubName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_SUBNAME_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_PerformancePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PERFORMANCEPREFABPATH_OFFSET))(this);
		}

		::System::Void set_PerformancePrefabPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_PERFORMANCEPREFABPATH_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainProcessActionStatus get_Status()
		{
			return ((::RPG::Client::SwordTrainProcessActionStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::SwordTrainProcessActionStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainProcessActionStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_PhaseName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_PHASENAME_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingActionType get_Type()
		{
			return ((::RPG::GameCore::SwordTrainingActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONDATAITEM_GET_TYPE_OFFSET))(this);
		}
	};
}
