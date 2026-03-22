#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x95CF2E0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x95CF320)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostInfoRowControl___c_TypeDefinitionIndex = 59259;

	class LimaoNewsPostInfoRowControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsPostInfoRowControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsPostInfoRowControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsPostInfoRowControl___c_TypeDefinitionIndex)->GetStaticField(0x26850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTINFOROWCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
