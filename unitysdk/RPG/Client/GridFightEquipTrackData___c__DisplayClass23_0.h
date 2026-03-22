#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_35.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x935DF30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__ISTRACKSAME_B__0_OFFSET UNITYSDK_OFFSET(0x9360680)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass23_0_TypeDefinitionIndex = 51922;

	class GridFightEquipTrackData___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList; // 0x10
		::System::UInt32 roleID; // 0x18
		::Enum_3_0A3761FE34514D6C_35 trackSource; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTrackSame_b__0(::RPG::Client::GridFightEquipTrack* track)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__ISTRACKSAME_B__0_OFFSET))(this, track);
		}
	};
}
