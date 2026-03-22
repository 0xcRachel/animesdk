#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_92E5F86395E0D76E_OFFSET UNITYSDK_OFFSET(0x16EE92D0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_9DACC63B845CACAA_OFFSET UNITYSDK_OFFSET(0x16EF8280)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE9270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_SetEmotion_TypeDefinitionIndex = 19085;

	class ST_Side_Hipplen_SetEmotion : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* MeshName; // 0x18
		::System::Int32 EmotionIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DACC63B845CACAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_9DACC63B845CACAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92E5F86395E0D76E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_SetEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETEMOTION_METHOD_4_92E5F86395E0D76E_OFFSET))(a1, a2);
		}
	};
}
