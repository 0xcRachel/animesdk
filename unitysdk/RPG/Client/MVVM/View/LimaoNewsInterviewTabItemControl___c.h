#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122E3A70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122E3AB0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex = 68449;

	class LimaoNewsInterviewTabItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInterviewTabItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInterviewTabItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewTabItemControl___c_TypeDefinitionIndex)->GetStaticField(0x4DB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
