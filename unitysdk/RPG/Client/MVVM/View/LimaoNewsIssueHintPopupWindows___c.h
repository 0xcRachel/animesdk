#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122E8660)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122E86A0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueHintPopupWindows___c_TypeDefinitionIndex = 68442;

	class LimaoNewsIssueHintPopupWindows___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsIssueHintPopupWindows___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsIssueHintPopupWindows___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueHintPopupWindows___c_TypeDefinitionIndex)->GetStaticField(0x4DCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUEHINTPOPUPWINDOWS___C__CTOR_OFFSET))(this);
		}
	};
}
