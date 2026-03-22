#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"

class Class_1_99BD961747420BEB_28;
namespace RPG::Client { class GridFightForgeAwardData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_CREATEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x936CBB0)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_AWARDDATALIST_OFFSET UNITYSDK_OFFSET(0x936DC30)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_AWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x936DC10)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_FORGECONFIG_OFFSET UNITYSDK_OFFSET(0x936DC50)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x936DBF0)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x936DBE0)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_AWARDDATALIST_OFFSET UNITYSDK_OFFSET(0x936DC40)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_AWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x936DC20)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_FORGECONFIG_OFFSET UNITYSDK_OFFSET(0x936DC60)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x936DC00)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x936D040)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_USEFORGE_OFFSET UNITYSDK_OFFSET(0x936DB20)
#define RPG_CLIENT_GRIDFIGHTFORGEITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x936D810)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeItemData_TypeDefinitionIndex = 51643;

	class GridFightForgeItemData : public ::RPG::Client::GridFightGridMember
	{
	public:
		::RPG::Client::GridFightForgeConfig* _ForgeConfig_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AwardIDList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeAwardData*>* _AwardDataList_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA__CTOR_OFFSET))(this, id, uid);
		}

		static ::RPG::Client::GridFightForgeItemData* CreateFromServer(::Class_1_99BD961747420BEB_28* forge)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::Class_1_99BD961747420BEB_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_CREATEFROMSERVER_OFFSET))(forge);
		}

		::System::Void Sync(::Class_1_99BD961747420BEB_28* forge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SYNC_OFFSET))(this, forge);
		}

		::System::Void UseForge(::System::UInt32 awardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_USEFORGE_OFFSET))(this, awardIndex);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AwardIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_AWARDIDLIST_OFFSET))(this);
		}

		::System::Void set_AwardIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_AWARDIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeAwardData*>* get_AwardDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeAwardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_AWARDDATALIST_OFFSET))(this);
		}

		::System::Void set_AwardDataList(::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeAwardData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeAwardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_AWARDDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::GridFightForgeConfig* get_ForgeConfig()
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_GET_FORGECONFIG_OFFSET))(this);
		}

		::System::Void set_ForgeConfig(::RPG::Client::GridFightForgeConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightForgeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEITEMDATA_SET_FORGECONFIG_OFFSET))(this, value);
		}
	};
}
