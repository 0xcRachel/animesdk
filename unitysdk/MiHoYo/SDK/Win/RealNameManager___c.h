#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157A7A10)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157A7A50)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTMAIL_B__38_4_OFFSET UNITYSDK_OFFSET(0x157A7B10)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTPHONE_B__35_4_OFFSET UNITYSDK_OFFSET(0x157A7A60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c_TypeDefinitionIndex = 7839;

	class RealNameManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::RealNameManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::RealNameManager___c**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager___c_TypeDefinitionIndex)->GetStaticField(0x23330);
		}
		static ::System::Action** StaticGet___9__38_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager___c_TypeDefinitionIndex)->GetStaticField(0x23338);
		}
		static ::System::Action** StaticGet___9__35_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager___c_TypeDefinitionIndex)->GetStaticField(0x23340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhone_b__35_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTPHONE_B__35_4_OFFSET))(this);
		}

		::System::Void _ShowGrantMail_b__38_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__SHOWGRANTMAIL_B__38_4_OFFSET))(this);
		}
	};
}
