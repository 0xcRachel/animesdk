#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_38;
class Class_1_5728D1BA9A6E1148;
class Class_1_BD2C8496C23D4C2D_3;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueTournGameData; }
namespace RPG::Client { class RogueTournSeasonData; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9E4FD20)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E4F0E0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9E50210)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9E50420)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9E502F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9E50360)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E50280)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9E503D0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9E50B80)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9E50BC0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0x9E50CA0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9E50A20)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9E50C00)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ISNAMEEMPTY_OFFSET UNITYSDK_OFFSET(0x9E50AE0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9E50C80)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_LOCALTIME_OFFSET UNITYSDK_OFFSET(0x9E50AC0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E50BE0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E505A0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0x9E50BA0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SEASONDATA_OFFSET UNITYSDK_OFFSET(0x9E50B60)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9E509E0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9E50A00)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9E50C20)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x9E509A0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_RENAME_OFFSET UNITYSDK_OFFSET(0x9E4FC30)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SETLOCALTIME_OFFSET UNITYSDK_OFFSET(0x9E50050)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9E50B90)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_LOCALTIME_OFFSET UNITYSDK_OFFSET(0x9E50AD0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9E50740)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0x9E50BB0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SEASONDATA_OFFSET UNITYSDK_OFFSET(0x9E50B70)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9E509F0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9E50A10)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9E4FDD0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E50CC0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E501B0)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9E50890)
#define RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0x9E507B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournArchiveData_TypeDefinitionIndex = 53650;

	class RogueTournArchiveData : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_DefaultArchiveName()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(RogueTournArchiveData_TypeDefinitionIndex)->GetStaticField(0x2F90);
		}
		::RPG::Client::RogueTournSeasonData* _SeasonData_k__BackingField; // 0x10
		::System::String* _Name; // 0x18
		::RPG::Client::RogueTournGameData* _GameData; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _AvatarDataList_k__BackingField; // 0x28
		::System::Int64 _LocalTime_k__BackingField; // 0x30
		::RPG::Client::DateTimePro _Time_k__BackingField; // 0x38
		::System::UInt32 _SlotIndex_k__BackingField; // 0x40
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournArchiveData* Create(::System::UInt32 slotIndex)
		{
			return ((::RPG::Client::RogueTournArchiveData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_CREATE_OFFSET))(slotIndex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_21DCD4640D389503_38* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_ISEXPIRED_OFFSET))(this);
		}

		::System::Void SetLocalTime(::System::UInt32 localTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SETLOCALTIME_OFFSET))(this, localTime);
		}

		::System::Void Rename(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_RENAME_OFFSET))(this, name);
		}

		::System::Void _SyncRogueCoin(::Class_1_BD2C8496C23D4C2D_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCROGUECOIN_OFFSET))(this, proto);
		}

		::System::Void _SyncAvatarData(::Class_1_5728D1BA9A6E1148* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5728D1BA9A6E1148*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA__SYNCAVATARDATA_OFFSET))(this, proto);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SLOTINDEX_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_Time()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_TIME_OFFSET))(this, value);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENDTIME_OFFSET))(this);
		}

		::System::Int64 get_LocalTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_LOCALTIME_OFFSET))(this);
		}

		::System::Void set_LocalTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_LOCALTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsNameEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ISNAMEEMPTY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournSeasonData* get_SeasonData()
		{
			return ((::RPG::Client::RogueTournSeasonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_SEASONDATA_OFFSET))(this);
		}

		::System::Void set_SeasonData(::RPG::Client::RogueTournSeasonData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournSeasonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_SEASONDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* get_AvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_AVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_AvatarDataList(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_AVATARDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_SET_ROGUECOINNUM_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::System::Boolean get_EnableGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVEDATA_GET_ENABLEGODMODE_OFFSET))(this);
		}
	};
}
