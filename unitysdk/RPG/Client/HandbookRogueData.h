#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideRogueType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class GuideRogueDataConfigRow; }
namespace RPG::GameCore { class GuideRogueTabRow; }

#define RPG_CLIENT_HANDBOOKROGUEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x15214F20)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0x152176B0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x15217620)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x152176D0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x152164D0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x15213C50)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15217660)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_OPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0x15217580)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15216530)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_RELATEDID_OFFSET UNITYSDK_OFFSET(0x15214AE0)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x15217640)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x15217500)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEROW_OFFSET UNITYSDK_OFFSET(0x15217690)
#define RPG_CLIENT_HANDBOOKROGUEDATA_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0x15217600)
#define RPG_CLIENT_HANDBOOKROGUEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x15217630)
#define RPG_CLIENT_HANDBOOKROGUEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x15217650)
#define RPG_CLIENT_HANDBOOKROGUEDATA_SET_TYPEROW_OFFSET UNITYSDK_OFFSET(0x152176A0)
#define RPG_CLIENT_HANDBOOKROGUEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x152174F0)
#define RPG_CLIENT_HANDBOOKROGUEDATA__ISOPENCONDTIONSATISFIED_OFFSET UNITYSDK_OFFSET(0x15217520)
#define RPG_CLIENT_HANDBOOKROGUEDATA__ISUNLOCKCONDITIONSSATISFIED_OFFSET UNITYSDK_OFFSET(0x152175A0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookRogueData_TypeDefinitionIndex = 60446;

	class HandbookRogueData : public ::System::Object
	{
	public:
		::RPG::GameCore::GuideRogueTabRow* _TypeRow_k__BackingField; // 0x10
		::RPG::GameCore::GuideRogueDataConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::HandbookRogueData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::HandbookRogueData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_CREATE_OFFSET))(id);
		}

		::System::Boolean _IsOpenCondtionSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA__ISOPENCONDTIONSATISFIED_OFFSET))(this);
		}

		::System::Boolean _IsUnlockConditionsSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA__ISUNLOCKCONDITIONSSATISFIED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEID_OFFSET))(this);
		}

		::RPG::GameCore::GuideRogueDataConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GuideRogueDataConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::GuideRogueDataConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GuideRogueDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_UnlockConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_UNLOCKCONDITIONS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_OpenConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_OPENCONDITIONS_OFFSET))(this);
		}

		::System::UInt32 get_RelatedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_RELATEDID_OFFSET))(this);
		}

		::RPG::GameCore::GuideRogueTabRow* get_TypeRow()
		{
			return ((::RPG::GameCore::GuideRogueTabRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_TYPEROW_OFFSET))(this);
		}

		::System::Void set_TypeRow(::RPG::GameCore::GuideRogueTabRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GuideRogueTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_SET_TYPEROW_OFFSET))(this, value);
		}

		::RPG::GameCore::GuideRogueType get_GuideType()
		{
			return ((::RPG::GameCore::GuideRogueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKROGUEDATA_GET_ISOPEN_OFFSET))(this);
		}
	};
}
