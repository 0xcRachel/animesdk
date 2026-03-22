#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }

#define SRDEBUGGER_INTERNAL_BUGREPORTSCREENSHOTUTIL_SCREENSHOTCAPTURECO_OFFSET UNITYSDK_OFFSET(0x17C2F9E0)
#define SRDEBUGGER_INTERNAL_BUGREPORTSCREENSHOTUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2FA30)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int BugReportScreenshotUtil_TypeDefinitionIndex = 28871;

	class BugReportScreenshotUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_ScreenshotData()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BugReportScreenshotUtil_TypeDefinitionIndex)->GetStaticField(0x3C780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTSCREENSHOTUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* ScreenshotCaptureCo()
		{
			return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTSCREENSHOTUTIL_SCREENSHOTCAPTURECO_OFFSET))();
		}
	};
}
