#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_3B1D79A446B1AAF5_OFFSET UNITYSDK_OFFSET(0x1AC3FC00)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_8C8A62858DE9CD2C_OFFSET UNITYSDK_OFFSET(0x1AC53B40)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_D961EF0C3A20EB09_OFFSET UNITYSDK_OFFSET(0x1AC53AD0)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_FA9C5B477D5B12A4_OFFSET UNITYSDK_OFFSET(0x1AC4D0F0)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3FBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllCustomUnselectable_TypeDefinitionIndex = 22620;

	class TargetFetchAllCustomUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10
		::System::Boolean RemoveForceUnselectable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D961EF0C3A20EB09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_D961EF0C3A20EB09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B1D79A446B1AAF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_3B1D79A446B1AAF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA9C5B477D5B12A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_FA9C5B477D5B12A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C8A62858DE9CD2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_8C8A62858DE9CD2C_OFFSET))(a1, a2);
		}
	};
}
