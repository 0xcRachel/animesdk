#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_UNITYTIMETOOL_METHOD_1_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x1A720F10)
#define RPG_UNITYTIMETOOL_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1A720EB0)
#define RPG_UNITYTIMETOOL_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1A721050)
#define RPG_UNITYTIMETOOL__INIT_OFFSET UNITYSDK_OFFSET(0x1A720F00)

namespace RPG
{
	inline static constexpr unsigned int UnityTimeTool_TypeDefinitionIndex = 9608;

	class UnityTimeTool : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_Field_1_0()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UnityTimeTool_TypeDefinitionIndex)->GetStaticField(0x780);
		}

		static ::System::Single Method_1_5323F2DF46A044DA()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_METHOD_1_5323F2DF46A044DA_OFFSET))();
		}

		static ::System::Void _Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL__INIT_OFFSET))();
		}

		static ::System::Void Method_1_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_METHOD_1_5790A55946AA509D_OFFSET))();
		}

		static ::System::Void Method_1_276036CDF4BFF5A6()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_METHOD_1_276036CDF4BFF5A6_OFFSET))();
		}
	};
}
