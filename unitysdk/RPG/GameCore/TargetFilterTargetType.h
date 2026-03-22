#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_BC71E2910CD61BB5_OFFSET UNITYSDK_OFFSET(0x16FE0760)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_D196456F770F0121_OFFSET UNITYSDK_OFFSET(0x16FE0660)
#define RPG_GAMECORE_TARGETFILTERTARGETTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE0740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFilterTargetType_TypeDefinitionIndex = 21621;

	class TargetFilterTargetType : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D196456F770F0121(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterTargetType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterTargetType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_D196456F770F0121_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC71E2910CD61BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFILTERTARGETTYPE_METHOD_3_BC71E2910CD61BB5_OFFSET))(a1, a2);
		}
	};
}
