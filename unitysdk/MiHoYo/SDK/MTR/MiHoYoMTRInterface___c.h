#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17272380)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CHECKURLUSAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x172729F0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172723C0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DOMTR_B__3_0_OFFSET UNITYSDK_OFFSET(0x172723D0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface___c_TypeDefinitionIndex = 43247;

	class MiHoYoMTRInterface___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface___c_TypeDefinitionIndex)->GetStaticField(0x4C260);
		}
		static ::System::Threading::WaitCallback** StaticGet___9__3_0()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface___c_TypeDefinitionIndex)->GetStaticField(0x4C268);
		}
		static ::System::Threading::WaitCallback** StaticGet___9__5_0()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface___c_TypeDefinitionIndex)->GetStaticField(0x4C270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoMTR_b__3_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__DOMTR_B__3_0_OFFSET))(this, _);
		}

		::System::Void _CheckUrlUsage_b__5_0(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE___C__CHECKURLUSAGE_B__5_0_OFFSET))(this, _);
		}
	};
}
