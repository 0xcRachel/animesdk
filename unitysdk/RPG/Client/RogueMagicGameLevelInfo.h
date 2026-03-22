#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_51.h"
#include "unitysdk/System/Object.h"

class Class_1_5CF1DDAFE12F0E87_6;
class Class_1_6949CBEE02AA8B1E_2;
class Class_1_6949CBEE02AA8B1E_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicGameLayerInfo; }
namespace RPG::Client { class RogueMagicGameRoomInfo; }
namespace RPG::Client { class RogueMagicLayerEffectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E04B20)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9E07E20)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET UNITYSDK_OFFSET(0x9E06960)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET UNITYSDK_OFFSET(0x9E06260)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9E07CC0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9E07FE0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9E08020)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0x9E08000)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0x9E08080)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9E07FC0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9E07FF0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0x9E08010)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0x9E08090)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9E07FD0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0x9E05250)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x9E05CD0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E04650)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET UNITYSDK_OFFSET(0x9E07820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameLevelInfo_TypeDefinitionIndex = 53551;

	class RogueMagicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* _LayerInfoCol_k__BackingField; // 0x10
		::RPG::Client::RogueMagicLayerEffectInfo* _OptionalLayerEffectInfo_k__BackingField; // 0x18
		::System::UInt32 _CurLayerIndex_k__BackingField; // 0x20
		::Enum_3_DB663931210BBC27_51 _Status_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_6949CBEE02AA8B1E_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET))(this, proto);
		}

		::System::Void SyncUpdate(::Class_1_6949CBEE02AA8B1E_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET))(this, proto);
		}

		::RPG::Client::RogueMagicGameLayerInfo* GetCurLayerInfo()
		{
			return ((::RPG::Client::RogueMagicGameLayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameRoomInfo* GetCurRoomInfo()
		{
			return ((::RPG::Client::RogueMagicGameRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET))(this);
		}

		::System::UInt32 GetFinishedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetAllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void _SyncLayers(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87_6*>* proto, ::System::Boolean isSyncAll)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5CF1DDAFE12F0E87_6*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET))(this, proto, isSyncAll);
		}

		::Enum_3_DB663931210BBC27_51 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_51(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_51 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_51))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_CurLayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* get_LayerInfoCol()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET))(this);
		}

		::System::Void set_LayerInfoCol(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET))(this, value);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET))(this);
		}

		::RPG::Client::RogueMagicLayerEffectInfo* get_OptionalLayerEffectInfo()
		{
			return ((::RPG::Client::RogueMagicLayerEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET))(this);
		}

		::System::Void set_OptionalLayerEffectInfo(::RPG::Client::RogueMagicLayerEffectInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicLayerEffectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET))(this, value);
		}
	};
}
