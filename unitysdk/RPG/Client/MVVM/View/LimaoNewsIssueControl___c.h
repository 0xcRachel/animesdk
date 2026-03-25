#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AA91D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA9210)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueControl___c_TypeDefinitionIndex = 61005;

	class LimaoNewsIssueControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsIssueControl___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsIssueControl___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueControl___c_TypeDefinitionIndex)->GetStaticField(0x37D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
