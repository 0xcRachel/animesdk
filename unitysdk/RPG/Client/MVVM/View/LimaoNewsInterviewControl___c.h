#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x122DFD50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x122DFD90)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewControl___c_TypeDefinitionIndex = 68456;

	class LimaoNewsInterviewControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsInterviewControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsInterviewControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsInterviewControl___c_TypeDefinitionIndex)->GetStaticField(0x4D960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
