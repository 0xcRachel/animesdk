#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET UNITYSDK_OFFSET(0x17B32F50)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x17B33020)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET UNITYSDK_OFFSET(0x17B33040)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x17B33080)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17B330E0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x17B33000)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17B330A0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x17B33060)
#define RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x17B330C0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET UNITYSDK_OFFSET(0x17B33030)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET UNITYSDK_OFFSET(0x17B33050)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x17B33090)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17B330F0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET UNITYSDK_OFFSET(0x17B33010)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17B330B0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x17B33070)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x17B330D0)
#define RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET UNITYSDK_OFFSET(0x17B32F00)
#define RPG_CLIENT_CHENLINGPRIVILEGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B32EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingPrivilege_TypeDefinitionIndex = 56668;

	class ChenLingPrivilege : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _NextIDList_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _SkillDesc_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Boolean _Activated_k__BackingField; // 0x34
		::System::UInt32 _Cost_k__BackingField; // 0x38
		::System::UInt32 _EffectID_k__BackingField; // 0x3C
		::RPG::Client::TextID _Name_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::ChenLingPrivilegeRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingPrivilegeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE__CTOR_OFFSET))(this, row);
		}

		::System::Void SyncActivated(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SYNCACTIVATED_OFFSET))(this, activated);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_Activated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ACTIVATED_OFFSET))(this);
		}

		::System::Void set_Activated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ACTIVATED_OFFSET))(this, value);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_COST_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_NextIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_NEXTIDLIST_OFFSET))(this);
		}

		::System::Void set_NextIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_NEXTIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_EFFECTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Void set_SkillDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_SKILLDESC_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGPRIVILEGE_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
