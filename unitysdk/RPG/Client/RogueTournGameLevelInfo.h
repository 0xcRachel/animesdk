#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_54.h"
#include "unitysdk/System/Object.h"

class Class_1_2AF2F5628A9B57FA;
class Class_1_9592B34F41301777_3;
namespace RPG::Client { class RogueTournGameLayerItem; }
namespace RPG::Client { class RogueTournGameRoomItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E70690)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9E73B70)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETCURROGUETOURNGAMELAYER_OFFSET UNITYSDK_OFFSET(0x9E70AB0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETCURROGUETOURNGAMEROOM_OFFSET UNITYSDK_OFFSET(0x9E708D0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETCURROOMPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E5A1B0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0x9E73CF0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_SET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0x9E73D00)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_SYNCALLLEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E72950)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E725F0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E70310)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO__GETCURROGUETOURNGAMELAYER_B__3_0_OFFSET UNITYSDK_OFFSET(0x9E73D10)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO__GETROGUETOURNGAMELAYERITEM_OFFSET UNITYSDK_OFFSET(0x9E73AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelInfo_TypeDefinitionIndex = 53740;

	class RogueTournGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournGameLayerItem*>* LayerList; // 0x10
		::Enum_3_DB663931210BBC27_54 CurLevelStatus; // 0x18
		::System::UInt32 CurLayerIndex; // 0x1C
		::System::Boolean _EnableGodMode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO__CTOR_OFFSET))(this);
		}

		::System::Void SyncAllLevelInfo(::Class_1_2AF2F5628A9B57FA* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2AF2F5628A9B57FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_SYNCALLLEVELINFO_OFFSET))(this, proto);
		}

		::System::Void UpdateLevelInfo(::Class_1_9592B34F41301777_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9592B34F41301777_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_UPDATELEVELINFO_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournGameLayerItem* GetCurRogueTournGameLayer()
		{
			return ((::RPG::Client::RogueTournGameLayerItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETCURROGUETOURNGAMELAYER_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameRoomItem* GetCurRogueTournGameRoom()
		{
			return ((::RPG::Client::RogueTournGameRoomItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETCURROGUETOURNGAMEROOM_OFFSET))(this);
		}

		::System::UInt32 GetAllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETALLROOMCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GETCURROOMPROGRESS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameLayerItem* _GetRogueTournGameLayerItem(::System::UInt32 LayerIndex)
		{
			return ((::RPG::Client::RogueTournGameLayerItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO__GETROGUETOURNGAMELAYERITEM_OFFSET))(this, LayerIndex);
		}

		::System::Boolean get_EnableGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_GET_ENABLEGODMODE_OFFSET))(this);
		}

		::System::Void set_EnableGodMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO_SET_ENABLEGODMODE_OFFSET))(this, value);
		}

		::System::Boolean _GetCurRogueTournGameLayer_b__3_0(::RPG::Client::RogueTournGameLayerItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournGameLayerItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO__GETCURROGUETOURNGAMELAYER_B__3_0_OFFSET))(this, x);
		}
	};
}
