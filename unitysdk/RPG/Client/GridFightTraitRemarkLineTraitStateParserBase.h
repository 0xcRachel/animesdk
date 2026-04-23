#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x174389C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x174389D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17438730)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__GETISACTIVE_OFFSET UNITYSDK_OFFSET(0x17438840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineTraitStateParserBase_TypeDefinitionIndex = 60297;

	class GridFightTraitRemarkLineTraitStateParserBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _Layers; // 0x10
		::RPG::Client::GridFightTrait* _trait; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* layers, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__CTOR_OFFSET))(this, layers, trait);
		}

		::System::Boolean _GetIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__GETISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISSHOW_OFFSET))(this);
		}
	};
}
