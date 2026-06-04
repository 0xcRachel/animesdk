#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_3AEDD65FFA5B9EF2_OFFSET UNITYSDK_OFFSET(0x19A79790)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_74B100017F376B7F_OFFSET UNITYSDK_OFFSET(0x19A79670)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_B3796A0521369888_OFFSET UNITYSDK_OFFSET(0x19A79630)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_D55369E7B66B9749_OFFSET UNITYSDK_OFFSET(0x19A797C0)
#define RPG_GAMECORE_VP_LINEARMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A79660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_LinearMap_TypeDefinitionIndex = 22737;

	class VP_LinearMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3796A0521369888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_LinearMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_B3796A0521369888_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74B100017F376B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_74B100017F376B7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AEDD65FFA5B9EF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_3AEDD65FFA5B9EF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D55369E7B66B9749(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_D55369E7B66B9749_OFFSET))(a1, a2);
		}
	};
}
