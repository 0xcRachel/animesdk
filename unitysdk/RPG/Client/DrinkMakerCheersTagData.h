#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GETQUANTIFYDESCBYVALUE_OFFSET UNITYSDK_OFFSET(0x160C2060)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x160C2190)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_NEGATIVETAGNAME_OFFSET UNITYSDK_OFFSET(0x160C22D0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_POSITIVETAGNAME_OFFSET UNITYSDK_OFFSET(0x160C2210)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_QUANTIFYTAGTYPE_OFFSET UNITYSDK_OFFSET(0x160C21B0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_SLIDERCOLOR_OFFSET UNITYSDK_OFFSET(0x160C2390)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x160C21D0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x160C21F0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x160C21A0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_QUANTIFYTAGTYPE_OFFSET UNITYSDK_OFFSET(0x160C21C0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x160C21E0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x160BCA40)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersTagData_TypeDefinitionIndex = 58620;

	class DrinkMakerCheersTagData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* _TypeTextMapConfigRow; // 0x10
		::System::UInt32 _GroupId_k__BackingField; // 0x18
		::RPG::GameCore::DrinkMakerQuantifyTagType _QuantifyTagType_k__BackingField; // 0x1C
		::RPG::Client::TextID _TagName_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 groupId, ::RPG::GameCore::DrinkMakerQuantifyTagType quantifyTagType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA__CTOR_OFFSET))(this, groupId, quantifyTagType);
		}

		::RPG::Client::TextID GetQuantifyDescByValue(::System::Int32 value)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GETQUANTIFYDESCBYVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::RPG::GameCore::DrinkMakerQuantifyTagType get_QuantifyTagType()
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_QUANTIFYTAGTYPE_OFFSET))(this);
		}

		::System::Void set_QuantifyTagType(::RPG::GameCore::DrinkMakerQuantifyTagType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_QUANTIFYTAGTYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TAGNAME_OFFSET))(this);
		}

		::System::Void set_TagName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_TAGNAME_OFFSET))(this, value);
		}

		::System::String* get_TypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TYPEICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_PositiveTagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_POSITIVETAGNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NegativeTagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_NEGATIVETAGNAME_OFFSET))(this);
		}

		::System::String* get_SliderColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_SLIDERCOLOR_OFFSET))(this);
		}
	};
}
