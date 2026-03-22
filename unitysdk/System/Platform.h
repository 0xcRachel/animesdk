#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_PLATFORM_CHECKOS_OFFSET UNITYSDK_OFFSET(0x17F19710)
#define SYSTEM_PLATFORM_GET_ISFREEBSD_OFFSET UNITYSDK_OFFSET(0x17F19A30)
#define SYSTEM_PLATFORM_GET_ISMACOS_OFFSET UNITYSDK_OFFSET(0x17F19970)
#define SYSTEM_PLATFORM_UNAME_OFFSET UNITYSDK_OFFSET(0x17F19690)

namespace System
{
	inline static constexpr unsigned int Platform_TypeDefinitionIndex = 2474;

	class Platform : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isMacOS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0x4F90);
		}
		static ::System::Boolean* StaticGet_checkedOS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0x4F91);
		}
		static ::System::Boolean* StaticGet_isFreeBSD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Platform_TypeDefinitionIndex)->GetStaticField(0x4F92);
		}

		static ::System::Int32 uname(::System::IntPtr buf)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_UNAME_OFFSET))(buf);
		}

		static ::System::Void CheckOS()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_CHECKOS_OFFSET))();
		}

		static ::System::Boolean get_IsMacOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_GET_ISMACOS_OFFSET))();
		}

		static ::System::Boolean get_IsFreeBSD()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_PLATFORM_GET_ISFREEBSD_OFFSET))();
		}
	};
}
