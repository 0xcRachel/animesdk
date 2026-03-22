#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BD570EF86E624FB1_3;
namespace RPG::GameCore { class HeadFrameConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_HEADFRAMEINFO_COPY_OFFSET UNITYSDK_OFFSET(0x949CF50)
#define RPG_CLIENT_HEADFRAMEINFO_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x949CD50)
#define RPG_CLIENT_HEADFRAMEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x949CDE0)
#define RPG_CLIENT_HEADFRAMEINFO_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x949CD30)
#define RPG_CLIENT_HEADFRAMEINFO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x949CD70)
#define RPG_CLIENT_HEADFRAMEINFO_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x949CD60)
#define RPG_CLIENT_HEADFRAMEINFO_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x949CD40)
#define RPG_CLIENT_HEADFRAMEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x949CEC0)
#define RPG_CLIENT_HEADFRAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x949D000)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadFrameInfo_TypeDefinitionIndex = 52179;

	class HeadFrameInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::HeadFrameConfigRow* _Meta; // 0x10
		::System::Int64 _ExpireTime_k__BackingField; // 0x18
		::System::UInt32 _ItemID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_SET_EXPIRETIME_OFFSET))(this, value);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Update(::Class_1_BD570EF86E624FB1_3* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD570EF86E624FB1_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_UPDATE_OFFSET))(this, info);
		}

		::System::Void Copy(::RPG::Client::HeadFrameInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeadFrameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_COPY_OFFSET))(this, info);
		}
	};
}
