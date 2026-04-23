#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TextMeshProUGUI; }

#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12EB1D10)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12EB1D80)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12EB1DE0)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12EB1D90)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12EB1D00)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAEE50)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshProUGUI__DelayedMaterialRebuild_d__90_TypeDefinitionIndex = 40249;

	class TextMeshProUGUI__DelayedMaterialRebuild_d__90 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::TMPro::TextMeshProUGUI* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
