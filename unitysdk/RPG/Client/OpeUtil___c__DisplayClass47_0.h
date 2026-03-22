#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A0B620)
#define RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS47_0__USECDKEY_B__0_OFFSET UNITYSDK_OFFSET(0x9A0DAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil___c__DisplayClass47_0_TypeDefinitionIndex = 46885;

	class OpeUtil___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* param; // 0x18
		::System::String* baseURL; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _UseCDKey_b__0(::System::String* authKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL___C__DISPLAYCLASS47_0__USECDKEY_B__0_OFFSET))(this, authKey);
		}
	};
}
