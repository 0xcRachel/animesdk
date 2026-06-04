#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mirrorment/MirrormentTool_OpModuleType.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class OpticalIllusionPuzzleItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MIRRORMENT_MIRRORMENTTOOL_CLASS_1_A02263FE1D25F653__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7B710)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_Class_1_A02263FE1D25F653_TypeDefinitionIndex = 45085;

	class MirrormentTool_Class_1_A02263FE1D25F653 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_0; // 0x10
		::RPG::Client::Prop::OpticalIllusionPuzzleItem* Field_1_1; // 0x18
		::System::String* Field_1_2; // 0x20
		::System::String* Field_1_3; // 0x28
		::UnityEngine::GameObject* Field_1_4; // 0x30
		::System::Single Field_1_5; // 0x38
		::System::Single Field_1_6; // 0x3C
		::UnityEngine::Vector3 Field_1_7; // 0x40
		::Mirrorment::MirrormentTool_OpModuleType Field_1_8; // 0x4C
		::UnityEngine::Vector3 Field_1_9; // 0x50
		::UnityEngine::Vector3 Field_1_10; // 0x5C
		::RPG::Client::Prop::OpticalIllusionAxis Field_1_11; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_CLASS_1_A02263FE1D25F653__CTOR_OFFSET))(this);
		}
	};
}
