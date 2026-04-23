#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildProtductType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildShopRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0x161CC590)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x161CC5B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x161CC640)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x161CC610)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x161CC570)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0x161C3B40)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x161CCA70)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISLEVELRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x161CCA10)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x161CC9D0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELDOWNPRICE_OFFSET UNITYSDK_OFFSET(0x161CC4E0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELUPPRICE_OFFSET UNITYSDK_OFFSET(0x161CC440)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x161CC9B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x161CC4C0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x161CC410)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x161CC5E0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_PRICES_OFFSET UNITYSDK_OFFSET(0x161CC430)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x161CC9F0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x161C36B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x161CC550)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYTITLE_OFFSET UNITYSDK_OFFSET(0x161CC660)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEFORMAT_OFFSET UNITYSDK_OFFSET(0x161CC690)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEPARAMS_OFFSET UNITYSDK_OFFSET(0x161CC6C0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x161CC9E0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x161CC9C0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x161CCA00)
#define RPG_CLIENT_EVOLVEBUILDSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x161C6FD0)
#define RPG_CLIENT_EVOLVEBUILDSKILL__ISREMOVESKILL_OFFSET UNITYSDK_OFFSET(0x161CCF60)
#define RPG_CLIENT_EVOLVEBUILDSKILL__ISRESETSKILL_OFFSET UNITYSDK_OFFSET(0x161CCEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSkill_TypeDefinitionIndex = 58800;

	class EvolveBuildSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildShopRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _Prices_k__BackingField; // 0x18
		::System::UInt32 _RecommendLevel_k__BackingField; // 0x20
		::System::Boolean _IsRecommended_k__BackingField; // 0x24
		::System::UInt32 _Level_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::EvolveBuildShopRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildShopRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Prices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_PRICES_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELUPPRICE_OFFSET))(this);
		}

		::System::UInt32 get_LevelDownPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELDOWNPRICE_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildProtductType get_SkillType()
		{
			return ((::RPG::GameCore::EvolveBuildProtductType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_BgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_BGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Category()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESCPARAMS_OFFSET))(this);
		}

		::RPG::Client::TextID get_SummaryTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SummaryValueFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEFORMAT_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SEASON_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SummaryValueParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEPARAMS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISRECOMMENDED_OFFSET))(this);
		}

		::System::Void set_IsRecommended(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_ISRECOMMENDED_OFFSET))(this, value);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::System::Void set_RecommendLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_RECOMMENDLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsLevelRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISLEVELRECOMMENDED_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsResetSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__ISRESETSKILL_OFFSET))(this);
		}

		::System::Boolean _IsRemoveSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__ISREMOVESKILL_OFFSET))(this);
		}
	};
}
