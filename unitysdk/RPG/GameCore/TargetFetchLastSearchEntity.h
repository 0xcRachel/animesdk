#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_07C1FA8E468E80F1_OFFSET UNITYSDK_OFFSET(0x16FD76E0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_90B9C8A918CA3D0F_OFFSET UNITYSDK_OFFSET(0x16FDDA30)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD7690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastSearchEntity_TypeDefinitionIndex = 21590;

	class TargetFetchLastSearchEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90B9C8A918CA3D0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_90B9C8A918CA3D0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07C1FA8E468E80F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_07C1FA8E468E80F1_OFFSET))(a1, a2);
		}
	};
}
