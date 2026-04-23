#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }
namespace System { class String; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x197EFF70)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x197EA0D0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCONDITION_OFFSET UNITYSDK_OFFSET(0x197EA4A0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHEDITOR_OFFSET UNITYSDK_OFFSET(0x197E9DA0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHMODELNAMEREGEX_OFFSET UNITYSDK_OFFSET(0x197EB3D0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_USEFORCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x197E9A10)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultConsoleConfigReader_ConditionDetail_TypeDefinitionIndex = 3879;

	class DefaultConsoleConfigReader_ConditionDetail : public ::System::Object
	{
	public:
		static ::System::String* GetPlatformName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_GETPLATFORMNAME_OFFSET))();
		}

		static ::System::Boolean UseForCurrentPlatform(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_USEFORCURRENTPLATFORM_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchEditor(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHEDITOR_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchCloudPlatform(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCLOUDPLATFORM_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchCondition(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHCONDITION_OFFSET))(section, iniPath);
		}

		static ::System::Boolean MatchModelNameRegEx(::IniParserEx::IniFile_Section* section, ::System::String* iniPath)
		{
			return ((::System::Boolean(*)(::IniParserEx::IniFile_Section*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL_MATCHMODELNAMEREGEX_OFFSET))(section, iniPath);
		}
	};
}
