#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueTournTitanBlessRow; }
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNTITANBLESS_CREATEDISPLAYITEMBYROW_OFFSET UNITYSDK_OFFSET(0x9F1B040)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_CREATE_OFFSET UNITYSDK_OFFSET(0x9F1AFE0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F1B0A0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GETBLESSESOFALLLEVELOFSAMETYPE_OFFSET UNITYSDK_OFFSET(0x9F1B0E0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONMIDPATH_OFFSET UNITYSDK_OFFSET(0x9F1BD50)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONSMALLPATH_OFFSET UNITYSDK_OFFSET(0x9F1BCA0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BATTLEDISPLAYTITANCATEGORIES_OFFSET UNITYSDK_OFFSET(0x9F1C180)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0x9F1C410)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAMEWITHAVATARNAME_OFFSET UNITYSDK_OFFSET(0x9F1B370)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0x9F1C380)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x9F1C4F0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x9F1B9C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_DAYNIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x9F1BFA0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x9F1C0E0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x9F1BF00)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_ROGUETITANTYPE_OFFSET UNITYSDK_OFFSET(0x9F1B2C0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_SPEEDUPRATIO_OFFSET UNITYSDK_OFFSET(0x9F1C040)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSID_OFFSET UNITYSDK_OFFSET(0x9F1B360)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSLEVEL_OFFSET UNITYSDK_OFFSET(0x9F1BE60)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDICONPATH_OFFSET UNITYSDK_OFFSET(0x9F1BB40)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDSHADOWPATH_OFFSET UNITYSDK_OFFSET(0x9F1BBF0)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCATEGORY_OFFSET UNITYSDK_OFFSET(0x9F1BA90)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x9F1B870)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9F1BE00)
#define RPG_CLIENT_ROGUETOURNTITANBLESS_GET__TITANROW_OFFSET UNITYSDK_OFFSET(0x9F1B800)
#define RPG_CLIENT_ROGUETOURNTITANBLESS__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1B030)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTitanBless_TypeDefinitionIndex = 53818;

	class RogueTournTitanBless : public ::System::Object
	{
	public:
		::System::UInt32 _TitanBlessID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 blessID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS__CTOR_OFFSET))(this, blessID);
		}

		static ::RPG::Client::RogueTournTitanBless* Create(::System::UInt32 titanBlessID)
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_CREATE_OFFSET))(titanBlessID);
		}

		static ::RPG::Client::RogueTournTitanBless* CreateDisplayItemByRow(::RPG::GameCore::RogueTournTitanBlessRow* row)
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::RPG::GameCore::RogueTournTitanBlessRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_CREATEDISPLAYITEMBYROW_OFFSET))(row);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* GetBlessesOfAllLevelOfSameType()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GETBLESSESOFALLLEVELOFSAMETYPE_OFFSET))(this);
		}

		::System::UInt32 get_TitanBlessID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSID_OFFSET))(this);
		}

		::System::String* get_BuffNameWithAvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAMEWITHAVATARNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::GameCore::RogueTitanCategory get_TitanCategory()
		{
			return ((::RPG::GameCore::RogueTitanCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCATEGORY_OFFSET))(this);
		}

		::System::String* get_TitanCardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDICONPATH_OFFSET))(this);
		}

		::System::String* get_TitanCardShadowPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANCARDSHADOWPATH_OFFSET))(this);
		}

		::System::String* get_AvatarRoundIconSmallPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONSMALLPATH_OFFSET))(this);
		}

		::System::String* get_AvatarRoundIconMidPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_AVATARROUNDICONMIDPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueTitanType get_RogueTitanType()
		{
			return ((::RPG::GameCore::RogueTitanType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_ROGUETITANTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TitanBlessLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_TITANBLESSLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Int32 get_DayNightRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_DAYNIGHTRATIO_OFFSET))(this);
		}

		::System::UInt32 get_SpeedUpRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_SPEEDUPRATIO_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::RogueTitanCategory>* get_BattleDisplayTitanCategories()
		{
			return ((::Il2CppArray<::RPG::GameCore::RogueTitanCategory>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BATTLEDISPLAYTITANCATEGORIES_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFNAME_OFFSET))(this);
		}

		::System::String* get_BuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFDESC_OFFSET))(this);
		}

		::System::String* get_BuffSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET_BUFFSIMPLEDESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournTitanTypeRow* get__TitanRow()
		{
			return ((::RPG::GameCore::RogueTournTitanTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET__TITANROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournTitanBlessRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournTitanBlessRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTITANBLESS_GET__MAZEBUFFROW_OFFSET))(this);
		}
	};
}
