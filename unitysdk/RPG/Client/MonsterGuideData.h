#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterGuidePhaseData; }
namespace RPG::GameCore { class MonsterGuideConfigRow; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERGUIDEDATA_GETAVAILABLETAGLIST_OFFSET UNITYSDK_OFFSET(0x9D92FD0)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9D93160)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_PHASELIST_OFFSET UNITYSDK_OFFSET(0x9D931A0)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9D931C0)
#define RPG_CLIENT_MONSTERGUIDEDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x9D93180)
#define RPG_CLIENT_MONSTERGUIDEDATA_INITPHASEDATA_OFFSET UNITYSDK_OFFSET(0x9D92E10)
#define RPG_CLIENT_MONSTERGUIDEDATA_INITTAGDATA_OFFSET UNITYSDK_OFFSET(0x9D92C60)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9D93170)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_PHASELIST_OFFSET UNITYSDK_OFFSET(0x9D931B0)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9D931D0)
#define RPG_CLIENT_MONSTERGUIDEDATA_SET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x9D93190)
#define RPG_CLIENT_MONSTERGUIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D92C00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterGuideData_TypeDefinitionIndex = 51234;

	class MonsterGuideData : public ::System::Object
	{
	public:
		::RPG::GameCore::MonsterGuideConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* _TagList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>* _PhaseList_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void InitTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_INITTAGDATA_OFFSET))(this);
		}

		::System::Void InitPhaseData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_INITPHASEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* GetAvailableTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GETAVAILABLETAGLIST_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* get_TagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void set_TagList(::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideTagConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_TAGLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>* get_PhaseList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_PHASELIST_OFFSET))(this);
		}

		::System::Void set_PhaseList(::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterGuidePhaseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_PHASELIST_OFFSET))(this, value);
		}

		::RPG::GameCore::MonsterGuideConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonsterGuideConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonsterGuideConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEDATA_SET_ROW_OFFSET))(this, value);
		}
	};
}
