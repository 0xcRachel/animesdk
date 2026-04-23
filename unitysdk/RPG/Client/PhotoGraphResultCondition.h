#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PhotoGraphResultPredicate; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF6B3BC0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0xF6B3C60)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONNAME_OFFSET UNITYSDK_OFFSET(0xF6B3CA0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CURRENTRESULT_OFFSET UNITYSDK_OFFSET(0xF6B3C80)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0xF6B3C70)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONNAME_OFFSET UNITYSDK_OFFSET(0xF6B3CB0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CURRENTRESULT_OFFSET UNITYSDK_OFFSET(0xF6B3C90)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_TICK_OFFSET UNITYSDK_OFFSET(0xF6B3A90)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xF6B37F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphResultCondition_TypeDefinitionIndex = 64003;

	class PhotoGraphResultCondition : public ::System::Object
	{
	public:
		::Class_3_E21F6DE9B7FA4D05* _OnSuccessSeq; // 0x10
		::Il2CppArray<::RPG::GameCore::StringHash>* FlagNames; // 0x18
		::Class_1_5F51D4049EA87B7B* _PredicateTask; // 0x20
		::System::Int32 _ConditionIndex_k__BackingField; // 0x28
		::System::Boolean _CurrentResult_k__BackingField; // 0x2C
		::RPG::Client::TextID _ConditionName_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::PhotoGraphResultPredicate* predicate, ::RPG::GameCore::TaskContext* context, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphResultPredicate*, ::RPG::GameCore::TaskContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION__CTOR_OFFSET))(this, predicate, context, index);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_TICK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_ConditionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONINDEX_OFFSET))(this);
		}

		::System::Void set_ConditionIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_CurrentResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CURRENTRESULT_OFFSET))(this);
		}

		::System::Void set_CurrentResult(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CURRENTRESULT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ConditionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_GET_CONDITIONNAME_OFFSET))(this);
		}

		::System::Void set_ConditionName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITION_SET_CONDITIONNAME_OFFSET))(this, value);
		}
	};
}
