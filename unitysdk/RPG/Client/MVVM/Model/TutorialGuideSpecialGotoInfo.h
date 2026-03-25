#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_9788BF934C00DE98;
namespace System { class String; }

#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x9A92BD0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0x9A92BC0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_NEEDREDDOT_OFFSET UNITYSDK_OFFSET(0x9A92C00)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x9A92BE0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTSUBKEY_OFFSET UNITYSDK_OFFSET(0x9A92BF0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9A92B80)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int TutorialGuideSpecialGotoInfo_TypeDefinitionIndex = 61077;

	class TutorialGuideSpecialGotoInfo : public ::System::Object
	{
	public:
		::System::String* _ReddotSubKey_k__BackingField; // 0x10
		::System::String* _ReddotKey_k__BackingField; // 0x18
		::System::UInt32 _GotoID_k__BackingField; // 0x20
		::RPG::Client::TextID _HintText_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_9788BF934C00DE98* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9788BF934C00DE98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::TextID get_HintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_HINTTEXT_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_GOTOID_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::String* get_ReddotSubKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_REDDOTSUBKEY_OFFSET))(this);
		}

		::System::Boolean get_NeedReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDESPECIALGOTOINFO_GET_NEEDREDDOT_OFFSET))(this);
		}
	};
}
