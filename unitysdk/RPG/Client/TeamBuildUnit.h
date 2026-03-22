#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBUILDUNIT_ADDALTERNATIVEAVATARID_OFFSET UNITYSDK_OFFSET(0xA04F0A0)
#define RPG_CLIENT_TEAMBUILDUNIT_CHECKMATCH_OFFSET UNITYSDK_OFFSET(0xA04F100)
#define RPG_CLIENT_TEAMBUILDUNIT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA04F210)
#define RPG_CLIENT_TEAMBUILDUNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA04DD30)
#define RPG_CLIENT_TEAMBUILDUNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA04DF70)
#define RPG_CLIENT_TEAMBUILDUNIT_GET_ALTERNATIVEAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA04F090)
#define RPG_CLIENT_TEAMBUILDUNIT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA04F080)
#define RPG_CLIENT_TEAMBUILDUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA04D450)
#define RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA04F2C0)
#define RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA04F2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildUnit_TypeDefinitionIndex = 54035;

	class TeamBuildUnit : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AlternativeAvatarIDs_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 avatarID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* alternativeAvatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT__CTOR_OFFSET))(this, avatarID, alternativeAvatarIDs);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_GET_AVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AlternativeAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_GET_ALTERNATIVEAVATARIDS_OFFSET))(this);
		}

		::System::Void AddAlternativeAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_ADDALTERNATIVEAVATARID_OFFSET))(this, avatarID);
		}

		::System::Boolean CheckMatch(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_CHECKMATCH_OFFSET))(this, avatarID);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuildUnit* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
