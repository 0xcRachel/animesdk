#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_790;
namespace RPG::Client { class RogueTournDivisionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_ACCUMULATEDIVISIONEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x9E6A850)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6A630)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GETDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9E6A6A0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURACCUMULATEEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x9E6B0C0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9E6AE20)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9E6ADE0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E6AE00)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_DIVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9E6A7D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_ISDIVISIONMAX_OFFSET UNITYSDK_OFFSET(0x9E6B060)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_MAXDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0x9E6AE70)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9E6ADF0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E6AE10)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0x9E6A5D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9E6A5C0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__GENERATEDIVISIONINFO_OFFSET UNITYSDK_OFFSET(0x9E6AAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionCollection_TypeDefinitionIndex = 53725;

	class RogueTournDivisionCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>* _DivisionDataList; // 0x10
		::System::UInt32 _CurDivisionProgress_k__BackingField; // 0x18
		::System::UInt32 _CurDivisionLevel_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_790* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_790*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SYNC_OFFSET))(this, proto);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueTournDivisionData* GetDivisionData(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GETDIVISIONDATA_OFFSET))(this, divisionLevel);
		}

		::System::String* AccumulateDivisionEffectDesc(::System::UInt32 divisionLevel)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_ACCUMULATEDIVISIONEFFECTDESC_OFFSET))(this, divisionLevel);
		}

		::System::Void _GenerateDivisionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION__GENERATEDIVISIONINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_CurDivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_CurDivisionProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurDivisionProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_SET_CURDIVISIONPROGRESS_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournDivisionData* get_CurDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURDIVISIONDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTournDivisionData* get_MaxDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_MAXDIVISIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsDivisionMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_ISDIVISIONMAX_OFFSET))(this);
		}

		::System::String* get_CurAccumulateEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_CURACCUMULATEEFFECTDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>* get_DivisionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournDivisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION_GET_DIVISIONDATALIST_OFFSET))(this);
		}
	};
}
