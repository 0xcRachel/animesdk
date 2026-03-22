#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_192DFC5B0D9188D7_OFFSET UNITYSDK_OFFSET(0x16FE2EF0)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_1A42AFEE654456C3_OFFSET UNITYSDK_OFFSET(0x16FE2DE0)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE2ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartToOwner_TypeDefinitionIndex = 21671;

	class TargetMapPartToOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveRepeat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A42AFEE654456C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartToOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartToOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_1A42AFEE654456C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_192DFC5B0D9188D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_192DFC5B0D9188D7_OFFSET))(a1, a2);
		}
	};
}
