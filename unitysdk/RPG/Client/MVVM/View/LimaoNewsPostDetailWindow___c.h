#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122F44F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122F4530)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostDetailWindow___c_TypeDefinitionIndex = 68478;

	class LimaoNewsPostDetailWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostDetailWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostDetailWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostDetailWindow___c_TypeDefinitionIndex)->GetStaticField(0x4E1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTDETAILWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
