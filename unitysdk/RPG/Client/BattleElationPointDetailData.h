#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43B182500A10FC7B;
class Class_1_A59B7F9F9FB23BBE;
class Class_1_B18A39CC32B5DD22;
namespace RPG::Client { class BattleElationPointDetailItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xF3BCBD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET UNITYSDK_OFFSET(0xF3BD2E0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET UNITYSDK_OFFSET(0xF3BD010)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET UNITYSDK_OFFSET(0xF3BCDD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xF3BDAB0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET UNITYSDK_OFFSET(0xF3BDA40)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET UNITYSDK_OFFSET(0xF3BDAC0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF3BCDC0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET UNITYSDK_OFFSET(0xF3BD440)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0xF3BD4E0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET UNITYSDK_OFFSET(0xF3BD1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailData_TypeDefinitionIndex = 66462;

	class BattleElationPointDetailData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DEFAULT_START_ELATION_TIME_SKILL_ID = 0x6AD025; // 0x0
		// static const ::System::UInt32 _DEFAULT_ELATION_SKILL_ID = 0x6AD027; // 0x0
		::Class_1_B18A39CC32B5DD22* _ElationPreviewCharacterData; // 0x10
		::Class_1_43B182500A10FC7B* _ElationPointManager; // 0x18
		::System::Boolean _IsGridFight_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationPointDetailData* Create()
		{
			return ((::RPG::Client::BattleElationPointDetailData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_CREATE_OFFSET))();
		}

		::RPG::Client::BattleElationPointDetailItemData* GetElationTimeSkillData()
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETELATIONTIMESKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* GetDetailItemsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDETAILITEMSDATA_OFFSET))(this);
		}

		::RPG::Client::BattleElationPointDetailItemData* GetDefaultSkillData()
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GETDEFAULTSKILLDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>* _GetDetailSkillData(::Class_1_A59B7F9F9FB23BBE* skillData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleElationPointDetailItemData*>*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILSKILLDATA_OFFSET))(this, skillData);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailAvatarData(::Class_1_A59B7F9F9FB23BBE* previewData)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILAVATARDATA_OFFSET))(this, previewData);
		}

		::RPG::Client::BattleElationPointDetailItemData* _GetDetailBattleEventData(::Class_1_A59B7F9F9FB23BBE* previewData)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::PVOID, ::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA__GETDETAILBATTLEEVENTDATA_OFFSET))(this, previewData);
		}

		::System::Int32 get_PointNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_POINTNUM_OFFSET))(this);
		}

		::System::Boolean get_IsGridFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_GET_ISGRIDFIGHT_OFFSET))(this);
		}

		::System::Void set_IsGridFight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILDATA_SET_ISGRIDFIGHT_OFFSET))(this, value);
		}
	};
}
