#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9424D90)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9424DA0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x94249C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER__GETISACTIVE_OFFSET UNITYSDK_OFFSET(0x9424A10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineAvatarActivateStateParser_TypeDefinitionIndex = 52024;

	class GridFightTraitRemarkLineAvatarActivateStateParser : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _avatarIDs; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* avatarIDs, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER__CTOR_OFFSET))(this, avatarIDs, trait);
		}

		::System::Boolean _GetIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER__GETISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER_GET_ISSHOW_OFFSET))(this);
		}
	};
}
