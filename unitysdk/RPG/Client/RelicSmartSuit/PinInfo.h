#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9592B34F41301777_2;
class Class_1_99BD961747420BEB_50;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define RPG_CLIENT_RELICSMARTSUIT_PININFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9D9A490)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_1_OFFSET UNITYSDK_OFFSET(0x9D9A9F0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_2_OFFSET UNITYSDK_OFFSET(0x9D9AAA0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_OFFSET UNITYSDK_OFFSET(0x9D9A980)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GETPINDATA_OFFSET UNITYSDK_OFFSET(0x9D9A630)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9D9A3F0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_PINDATAKEYS_OFFSET UNITYSDK_OFFSET(0x9D9A410)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9D9A400)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_1_OFFSET UNITYSDK_OFFSET(0x9D9A790)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_OFFSET UNITYSDK_OFFSET(0x9D9A720)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9A5A0)
#define RPG_CLIENT_RELICSMARTSUIT_PININFO__GETORCREATEPINDATA_OFFSET UNITYSDK_OFFSET(0x9D9A810)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int PinInfo_TypeDefinitionIndex = 59415;

	class PinInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RelicSmartSuit::PinDataKey*, ::RPG::Client::RelicSmartSuit::PinData*>* _PinDatas; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::RelicSmartSuit::PinDataKey*>* get_PinDataKeys()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::RelicSmartSuit::PinDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GET_PINDATAKEYS_OFFSET))(this);
		}

		static ::RPG::Client::RelicSmartSuit::PinInfo* Create(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_CREATE_OFFSET))(avatarID);
		}

		::RPG::Client::RelicSmartSuit::PinData* GetPinData(::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_GETPINDATA_OFFSET))(this, pinDataKey);
		}

		::System::Void SyncPinData(::Class_1_99BD961747420BEB_50* severPinData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_OFFSET))(this, severPinData);
		}

		::System::Void SyncPinData_1(::Class_1_9592B34F41301777_2* serverPinDataKey, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* relicUIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9592B34F41301777_2*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_SYNCPINDATA_1_OFFSET))(this, serverPinDataKey, relicUIDs);
		}

		::System::Void DeletePinData(::Class_1_99BD961747420BEB_50* serverPinData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_OFFSET))(this, serverPinData);
		}

		::System::Void DeletePinData_1(::Class_1_9592B34F41301777_2* serverPinKey)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9592B34F41301777_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_1_OFFSET))(this, serverPinKey);
		}

		::System::Void DeletePinData_2(::RPG::Client::RelicSmartSuit::PinDataKey* pinDataKey)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO_DELETEPINDATA_2_OFFSET))(this, pinDataKey);
		}

		::RPG::Client::RelicSmartSuit::PinData* _GetOrCreatePinData(::RPG::Client::RelicSmartSuit::PinDataKey* key)
		{
			return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_PININFO__GETORCREATEPINDATA_OFFSET))(this, key);
		}
	};
}
