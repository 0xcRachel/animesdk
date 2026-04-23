#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_CALCULATEPROGRESSBYMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x17B2F4C0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x17B2F5F0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x17B2F570)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x17B2F5D0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERICONPATH_OFFSET UNITYSDK_OFFSET(0x17B2F590)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERID_OFFSET UNITYSDK_OFFSET(0x17B2F550)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDEROUTLINEICONPATH_OFFSET UNITYSDK_OFFSET(0x17B2F5B0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x17B2F580)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x17B2F5E0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERICONPATH_OFFSET UNITYSDK_OFFSET(0x17B2F5A0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERID_OFFSET UNITYSDK_OFFSET(0x17B2F560)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDEROUTLINEICONPATH_OFFSET UNITYSDK_OFFSET(0x17B2F5C0)
#define RPG_CLIENT_CHENLINGDAMAGESETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2F320)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingDamageSettleInfo_TypeDefinitionIndex = 56663;

	class ChenLingDamageSettleInfo : public ::System::Object
	{
	public:
		::System::String* _SoliderIconPath_k__BackingField; // 0x10
		::System::String* _SoliderOutlineIconPath_k__BackingField; // 0x18
		::System::UInt32 _Damage_k__BackingField; // 0x20
		::System::UInt32 _SoliderID_k__BackingField; // 0x24
		::RPG::GameCore::FixPoint _Progress_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 damage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO__CTOR_OFFSET))(this, id, damage);
		}

		::System::Void CalculateProgressByMaxDamage(::System::UInt32 maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_CALCULATEPROGRESSBYMAXDAMAGE_OFFSET))(this, maxDamage);
		}

		::System::UInt32 get_SoliderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERID_OFFSET))(this);
		}

		::System::Void set_SoliderID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Damage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_DAMAGE_OFFSET))(this);
		}

		::System::Void set_Damage(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_DAMAGE_OFFSET))(this, value);
		}

		::System::String* get_SoliderIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDERICONPATH_OFFSET))(this);
		}

		::System::Void set_SoliderIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDERICONPATH_OFFSET))(this, value);
		}

		::System::String* get_SoliderOutlineIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_SOLIDEROUTLINEICONPATH_OFFSET))(this);
		}

		::System::Void set_SoliderOutlineIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_SOLIDEROUTLINEICONPATH_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_Progress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Int32 CompareTo(::RPG::Client::ChenLingDamageSettleInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingDamageSettleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGDAMAGESETTLEINFO_COMPARETO_OFFSET))(this, other);
		}
	};
}
