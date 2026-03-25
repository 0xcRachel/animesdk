#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerTagSourceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerMixTagRow; }
namespace RPG::GameCore { class DrinkMakerQuantifyTagRow; }
namespace RPG::GameCore { class DrinkMakerTagRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERTAG_GETALLTAGNAMESBYTYPE_OFFSET UNITYSDK_OFFSET(0x9527C90)
#define RPG_CLIENT_DRINKMAKERTAG_GETCHEERSICONPATH_OFFSET UNITYSDK_OFFSET(0x9528390)
#define RPG_CLIENT_DRINKMAKERTAG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x95281E0)
#define RPG_CLIENT_DRINKMAKERTAG_GET_INCLUDETAGIDS_OFFSET UNITYSDK_OFFSET(0x9528160)
#define RPG_CLIENT_DRINKMAKERTAG_GET_ISMIXTAG_OFFSET UNITYSDK_OFFSET(0x9527C00)
#define RPG_CLIENT_DRINKMAKERTAG_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x950D0C0)
#define RPG_CLIENT_DRINKMAKERTAG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x950D1E0)
#define RPG_CLIENT_DRINKMAKERTAG_GET_QUANTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x9528140)
#define RPG_CLIENT_DRINKMAKERTAG_GET_QUANTITY_OFFSET UNITYSDK_OFFSET(0x95280A0)
#define RPG_CLIENT_DRINKMAKERTAG_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x950B4A0)
#define RPG_CLIENT_DRINKMAKERTAG_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x9527FF0)
#define RPG_CLIENT_DRINKMAKERTAG_GET_TAGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x95280F0)
#define RPG_CLIENT_DRINKMAKERTAG_SET_QUANTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x9528150)
#define RPG_CLIENT_DRINKMAKERTAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x9528410)
#define RPG_CLIENT_DRINKMAKERTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x950CCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerTag_TypeDefinitionIndex = 51683;

	class DrinkMakerTag : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__EMPTY_QUANTITY_TAG_NAME()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTag_TypeDefinitionIndex)->GetStaticField(0x12230);
		}
		::RPG::GameCore::DrinkMakerQuantifyTagRow* _QuantifyTagRow; // 0x10
		::RPG::GameCore::DrinkMakerMixTagRow* _MixTagRow; // 0x18
		::RPG::GameCore::DrinkMakerTagRow* _Row; // 0x20
		::RPG::GameCore::DrinkMakerQuantifyTagType _QuantifyType_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 tagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG__CTOR_OFFSET))(this, tagID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetAllTagNamesByType(::RPG::GameCore::DrinkMakerQuantifyTagType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GETALLTAGNAMESBYTYPE_OFFSET))(type);
		}

		::System::UInt32 get_TagID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_TAGID_OFFSET))(this);
		}

		::System::Int32 get_Quantity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_QUANTITY_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerTagSourceType get_TagSourceType()
		{
			return ((::RPG::GameCore::DrinkMakerTagSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_TAGSOURCETYPE_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerQuantifyTagType get_QuantifyType()
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_QUANTIFYTYPE_OFFSET))(this);
		}

		::System::Void set_QuantifyType(::RPG::GameCore::DrinkMakerQuantifyTagType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_SET_QUANTIFYTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMixTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_ISMIXTAG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_IncludeTagIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_INCLUDETAGIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_TagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_TAGNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* GetCheersIconPath(::System::UInt32 drinkId)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG_GETCHEERSICONPATH_OFFSET))(this, drinkId);
		}
	};
}
