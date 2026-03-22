#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_83;
namespace System { class String; }

#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARICON_OFFSET UNITYSDK_OFFSET(0x9AF8D30)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x9AF8CE0)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_ITEMICON_OFFSET UNITYSDK_OFFSET(0x9AF8E40)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LANDID_OFFSET UNITYSDK_OFFSET(0x9AF8F50)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LEFTNUM_OFFSET UNITYSDK_OFFSET(0x9AF9150)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_TOTALNUM_OFFSET UNITYSDK_OFFSET(0x9AF9100)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM_REQUESTDELIVER_OFFSET UNITYSDK_OFFSET(0x9AF8BD0)
#define RPG_CLIENT_PLANETFESPAMEVENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF8960)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPamEventItem_TypeDefinitionIndex = 53016;

	class PlanetFesPamEventItem : public ::System::Object
	{
	public:
		::Class_1_120319518E6F6581_83* _Cargo; // 0x10

		::System::Void _ctor(::Class_1_120319518E6F6581_83* cargo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM__CTOR_OFFSET))(this, cargo);
		}

		::System::Void RequestDeliver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_REQUESTDELIVER_OFFSET))(this);
		}

		::System::String* get_AvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARICON_OFFSET))(this);
		}

		::System::String* get_ItemIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_ITEMICON_OFFSET))(this);
		}

		::System::UInt32 get_LandID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LANDID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_TOTALNUM_OFFSET))(this);
		}

		::System::UInt32 get_LeftNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPAMEVENTITEM_GET_LEFTNUM_OFFSET))(this);
		}
	};
}
