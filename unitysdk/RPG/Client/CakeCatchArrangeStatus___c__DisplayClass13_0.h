#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchFreeAreaPosition; }

#define RPG_CLIENT_CAKECATCHARRANGESTATUS___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCA7A0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS___C__DISPLAYCLASS13_0__ISPLACEDINFREEAREA_B__0_OFFSET UNITYSDK_OFFSET(0x15FCA8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeStatus___c__DisplayClass13_0_TypeDefinitionIndex = 58011;

	class CakeCatchArrangeStatus___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::UInt32 slotId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPlacedInFreeArea_b__0(::RPG::Client::CakeCatchFreeAreaPosition* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeCatchFreeAreaPosition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS___C__DISPLAYCLASS13_0__ISPLACEDINFREEAREA_B__0_OFFSET))(this, x);
		}
	};
}
