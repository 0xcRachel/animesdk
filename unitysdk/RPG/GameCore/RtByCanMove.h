#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_0FA7FDE8DDF819B7_OFFSET UNITYSDK_OFFSET(0x1941A5C0)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_1E94D5CB286341D4_OFFSET UNITYSDK_OFFSET(0x1941A370)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_26B96C0DD749EC5E_OFFSET UNITYSDK_OFFSET(0x1941A640)
#define RPG_GAMECORE_RTBYCANMOVE_METHOD_4_CD974240ACE3F31A_OFFSET UNITYSDK_OFFSET(0x1941A440)
#define RPG_GAMECORE_RTBYCANMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1941A3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByCanMove_TypeDefinitionIndex = 22796;

	class RtByCanMove : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E94D5CB286341D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCanMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_1E94D5CB286341D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD974240ACE3F31A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_CD974240ACE3F31A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FA7FDE8DDF819B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_0FA7FDE8DDF819B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26B96C0DD749EC5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYCANMOVE_METHOD_4_26B96C0DD749EC5E_OFFSET))(a1, a2);
		}
	};
}
