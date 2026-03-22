#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMISCCONFIG_METHOD_2_E68FEBA2247B1313_OFFSET UNITYSDK_OFFSET(0x16ABEED0)
#define RPG_GAMECORE_FIVEDIMMISCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC6490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMiscConfig_TypeDefinitionIndex = 15026;

	class FiveDimMiscConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EmptyViewPath; // 0x10
		::System::Single PhantomPlayerDefaultDither; // 0x18
		::System::Single ForceExitDeathInterval; // 0x1C
		::System::Int32 ForceExitDeathCount; // 0x20
		::System::Boolean AcceptInputWhenTimeStop; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E68FEBA2247B1313(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMiscConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMiscConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISCCONFIG_METHOD_2_E68FEBA2247B1313_OFFSET))(a1, a2);
		}
	};
}
