#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_107;
class Class_1_075C34D03AFA1215_90;
namespace RPG::Client { class IRogueTournHex; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET UNITYSDK_OFFSET(0x17560330)
#define RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x17560200)
#define RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175602A0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0x175604E0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET UNITYSDK_OFFSET(0x175601F0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET UNITYSDK_OFFSET(0x175606E0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET UNITYSDK_OFFSET(0x175603F0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x17560AF0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0x17560740)
#define RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17560270)
#define RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET UNITYSDK_OFFSET(0x175607B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexInfo_TypeDefinitionIndex = 62377;

	class RogueTournHexInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AchivedHexIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_AchivedHexIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHexInfo* Create()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AddHex(::System::UInt32 hexID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET))(this, hexID);
		}

		::System::Boolean RemoveHex(::System::UInt32 hexID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET))(this, hexID);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>* GetAchivedHexes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET))(this);
		}

		::System::Boolean IsHexAchieved(::System::UInt32 hexID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET))(this, hexID);
		}

		::System::Void SyncFull(::Class_1_075C34D03AFA1215_107* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_107*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Void SyncEquipment(::Class_1_075C34D03AFA1215_90* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET))(this, proto);
		}

		::System::Void _SyncHexes(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* hexIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET))(this, hexIDs);
		}
	};
}
