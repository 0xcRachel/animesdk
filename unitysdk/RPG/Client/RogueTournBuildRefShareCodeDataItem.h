#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_EA34684135EFC9DB;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueMiracleData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E5D470)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E58F90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9E5D590)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALFORMULAS_OFFSET UNITYSDK_OFFSET(0x9E5D7D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0x9E5D890)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAINTOURNID_OFFSET UNITYSDK_OFFSET(0x9E5D710)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAXTITLELENGTHLIMIT_OFFSET UNITYSDK_OFFSET(0x9E5D950)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALFORMULAS_OFFSET UNITYSDK_OFFSET(0x9E5D830)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0x9E5D8F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_SUBTOURNID_OFFSET UNITYSDK_OFFSET(0x9E5D730)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0x9E5D770)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9E5D750)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_UNIONINDEX_OFFSET UNITYSDK_OFFSET(0x9E5D5B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9E58870)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x9E5D540)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_ARCHIVESLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9E5D5A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_MAINTOURNID_OFFSET UNITYSDK_OFFSET(0x9E5D720)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_SUBTOURNID_OFFSET UNITYSDK_OFFSET(0x9E5D740)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9E5D760)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E5D310)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E5DA30)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5D300)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E5DAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeDataItem_TypeDefinitionIndex = 53698;

	class RogueTournBuildRefShareCodeDataItem : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_DefaultTitle()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeDataItem_TypeDefinitionIndex)->GetStaticField(0x3BD0);
		}
		// static const ::System::UInt32 InvalidShareCodeBuildRefSlotIndex = 0xFFFFFFFF; // 0x0
		::System::String* _Title_k__BackingField; // 0x10
		::Class_1_EA34684135EFC9DB* _BuildRefContent; // 0x18
		::System::UInt32 _SubTournID_k__BackingField; // 0x20
		::System::UInt32 _ArchiveSlotIndex_k__BackingField; // 0x24
		::System::UInt32 _MainTournID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetContent(::Class_1_EA34684135EFC9DB* content)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA34684135EFC9DB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETCONTENT_OFFSET))(this, content);
		}

		::System::Void SetArchiveSlotIndex(::System::UInt32 archiveSlotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SETARCHIVESLOTINDEX_OFFSET))(this, archiveSlotIndex);
		}

		::System::UInt32 get_ArchiveSlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ARCHIVESLOTINDEX_OFFSET))(this);
		}

		::System::Void set_ArchiveSlotIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_ARCHIVESLOTINDEX_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournBuildRefUnionIndex get_UnionIndex()
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_UNIONINDEX_OFFSET))(this);
		}

		::System::UInt32 get_MainTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAINTOURNID_OFFSET))(this);
		}

		::System::Void set_MainTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_MAINTOURNID_OFFSET))(this, value);
		}

		::System::UInt32 get_SubTournID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_SUBTOURNID_OFFSET))(this);
		}

		::System::Void set_SubTournID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_SUBTOURNID_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_SET_TITLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* get_Teams()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_TEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_EssentialFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_OptionalFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>* get_EssentialHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>* get_OptionalHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueMiracleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET))(this);
		}

		static ::System::UInt32 get_MaxTitleLengthLimit()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM_GET_MAXTITLELENGTHLIMIT_OFFSET))();
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEDATAITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
