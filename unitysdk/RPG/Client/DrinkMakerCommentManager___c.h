#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerGuestCommentRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CE8290)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE82D0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C___GETRANDOMSUCCESSCOMMENT_B__4_0_OFFSET UNITYSDK_OFFSET(0x18CE82E0)
#define RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C___GETRANDOMSUCCESSCOMMENT_B__4_1_OFFSET UNITYSDK_OFFSET(0x18CE8300)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCommentManager___c_TypeDefinitionIndex = 59559;

	class DrinkMakerCommentManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DrinkMakerCommentManager___c** StaticGet___9()
		{
			return (::RPG::Client::DrinkMakerCommentManager___c**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerCommentManager___c_TypeDefinitionIndex)->GetStaticField(0x8D80);
		}
		static ::System::Func_2<::RPG::GameCore::DrinkMakerGuestCommentRow*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::GameCore::DrinkMakerGuestCommentRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerCommentManager___c_TypeDefinitionIndex)->GetStaticField(0x8D88);
		}
		static ::System::Func_2<::RPG::GameCore::DrinkMakerGuestCommentRow*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::GameCore::DrinkMakerGuestCommentRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerCommentManager___c_TypeDefinitionIndex)->GetStaticField(0x8D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetRandomSuccessComment_b__4_0(::RPG::GameCore::DrinkMakerGuestCommentRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DrinkMakerGuestCommentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C___GETRANDOMSUCCESSCOMMENT_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetRandomSuccessComment_b__4_1(::RPG::GameCore::DrinkMakerGuestCommentRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DrinkMakerGuestCommentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCOMMENTMANAGER___C___GETRANDOMSUCCESSCOMMENT_B__4_1_OFFSET))(this, a1);
		}
	};
}
