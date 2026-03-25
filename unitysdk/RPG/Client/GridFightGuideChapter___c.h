#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x985DFA0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x985DFE0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_0_OFFSET UNITYSDK_OFFSET(0x985E140)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_1_OFFSET UNITYSDK_OFFSET(0x985E150)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_0_OFFSET UNITYSDK_OFFSET(0x985E0B0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_1_OFFSET UNITYSDK_OFFSET(0x985E120)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_CHAPTERQUESTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x985DFF0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_COMPLETEDQUESTCNT_B__20_0_OFFSET UNITYSDK_OFFSET(0x985E080)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_HASREWARD_B__24_0_OFFSET UNITYSDK_OFFSET(0x985E0A0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_ISCHAPTERCLEAR_B__18_0_OFFSET UNITYSDK_OFFSET(0x985E070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideChapter___c_TypeDefinitionIndex = 52686;

	class GridFightGuideChapter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AC0);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AC8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AD0);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AD8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AE0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AE8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AF0);
		}
		static ::RPG::Client::GridFightGuideChapter___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGuideChapter___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26AF8);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGuideChapter___c_TypeDefinitionIndex)->GetStaticField(0x26B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::QuestData* _get_ChapterQuests_b__8_0(::System::UInt32 questID)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_CHAPTERQUESTS_B__8_0_OFFSET))(this, questID);
		}

		::System::Boolean _get_IsChapterClear_b__18_0(::RPG::Client::QuestData* questData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_ISCHAPTERCLEAR_B__18_0_OFFSET))(this, questData);
		}

		::System::Boolean _get_CompletedQuestCnt_b__20_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_COMPLETEDQUESTCNT_B__20_0_OFFSET))(this, quest);
		}

		::System::Boolean _get_HasReward_b__24_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GET_HASREWARD_B__24_0_OFFSET))(this, quest);
		}

		::System::Int32 _GetQuestByIndex_b__26_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_0_OFFSET))(this, quest);
		}

		::System::UInt32 _GetQuestByIndex_b__26_1(::RPG::Client::QuestData* quest)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETQUESTBYINDEX_B__26_1_OFFSET))(this, quest);
		}

		::System::Boolean _GetChapterQuestListReward_b__27_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_0_OFFSET))(this, quest);
		}

		::System::UInt32 _GetChapterQuestListReward_b__27_1(::RPG::Client::QuestData* quest)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER___C__GETCHAPTERQUESTLISTREWARD_B__27_1_OFFSET))(this, quest);
		}
	};
}
