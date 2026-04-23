#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x15E00710)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_ABILITYJSON_OFFSET UNITYSDK_OFFSET(0x15E008B0)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15E00B70)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x15E00A30)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x15E00DB0)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15E00CE0)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15E00A40)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x15E00C40)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x15E00D90)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x15E00B10)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_SET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x15E00DC0)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM_SET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x15E00DA0)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15E00800)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM__INITFIGHTEFFECTSHOWINFO_OFFSET UNITYSDK_OFFSET(0x15E00960)
#define RPG_CLIENT_CAKERACEEFFECTDATAITEM__INIT_OFFSET UNITYSDK_OFFSET(0x15E00810)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceEffectDataItem_TypeDefinitionIndex = 58039;

	class CakeRaceEffectDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceAbilityConfig* _AbilityConfig; // 0x10
		::System::Boolean _ExecuteBeforeBeginDelay_k__BackingField; // 0x18
		::System::UInt32 _ShowDurationMs_k__BackingField; // 0x1C
		::System::UInt32 _EffectID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM__CTOR_OFFSET))(this, effectID);
		}

		static ::RPG::Client::CakeRaceEffectDataItem* Create(::System::UInt32 effectID)
		{
			return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_CREATE_OFFSET))(effectID);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM__INIT_OFFSET))(this);
		}

		::System::Void _InitFightEffectShowInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM__INITFIGHTEFFECTSHOWINFO_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_EFFECTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_PARAMLIST_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_AbilityJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_ABILITYJSON_OFFSET))(this);
		}

		::System::UInt32 get_ShowDurationMs()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_SHOWDURATIONMS_OFFSET))(this);
		}

		::System::Void set_ShowDurationMs(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_SET_SHOWDURATIONMS_OFFSET))(this, value);
		}

		::System::Boolean get_ExecuteBeforeBeginDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET_EXECUTEBEFOREBEGINDELAY_OFFSET))(this);
		}

		::System::Void set_ExecuteBeforeBeginDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_SET_EXECUTEBEFOREBEGINDELAY_OFFSET))(this, value);
		}

		::RPG::GameCore::CakeRaceEffectRow* get__Row()
		{
			return ((::RPG::GameCore::CakeRaceEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
