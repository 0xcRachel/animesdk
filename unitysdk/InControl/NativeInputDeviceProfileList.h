#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A0F580)
#define INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x12A0F570)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceProfileList_TypeDefinitionIndex = 37906;

	class NativeInputDeviceProfileList : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Profiles()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NativeInputDeviceProfileList_TypeDefinitionIndex)->GetStaticField(0x153B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEPROFILELIST__CCTOR_OFFSET))();
		}
	};
}
