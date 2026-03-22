#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS60_0__APPLYREF_B__0_OFFSET UNITYSDK_OFFSET(0x9378630)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS60_0__APPLYREF_B__1_OFFSET UNITYSDK_OFFSET(0x9378690)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9375180)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass60_0_TypeDefinitionIndex = 51392;

	class GridFightGameRef___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::String* refID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyRef_b__0(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS60_0__APPLYREF_B__0_OFFSET))(this, refData);
		}

		::System::Boolean _ApplyRef_b__1(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS60_0__APPLYREF_B__1_OFFSET))(this, refData);
		}
	};
}
