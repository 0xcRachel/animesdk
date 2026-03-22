#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_600;
class Class_1_43BD383C98B4C0C5_135;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GETVARIABLECOMPILER_OFFSET UNITYSDK_OFFSET(0x9470FE0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x9471710)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_VALUEMAP_OFFSET UNITYSDK_OFFSET(0x94716F0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x9471720)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_VALUEMAP_OFFSET UNITYSDK_OFFSET(0x9471700)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUEFROMTEAM_OFFSET UNITYSDK_OFFSET(0x94707C0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x9470290)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9470370)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9470200)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__GETVALUEMAP_OFFSET UNITYSDK_OFFSET(0x94710E0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__INITVALUE_OFFSET UNITYSDK_OFFSET(0x94703C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightValueComponent_TypeDefinitionIndex = 51797;

	class GridFightValueComponent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_600* _DataContext; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _ValueMap_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightRole* role, ::Class_0_16E4307DCC419505_600* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__CTOR_OFFSET))(this, role, context);
		}

		::System::Boolean TryGetValue(::System::String* key, ::RPG::GameCore::FixPoint& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Void UpdateValue(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_UPDATEVALUE_OFFSET))(this, map);
		}

		::System::Boolean TryGetValueFromTeam(::System::String* key, ::RPG::GameCore::FixPoint& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUEFROMTEAM_OFFSET))(this, key, value);
		}

		::System::Void _InitValue(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* valueMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__INITVALUE_OFFSET))(this, valueMap);
		}

		::Class_1_43BD383C98B4C0C5_135* GetVariableCompiler()
		{
			return ((::Class_1_43BD383C98B4C0C5_135*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GETVARIABLECOMPILER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _GetValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__GETVALUEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_ValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_VALUEMAP_OFFSET))(this);
		}

		::System::Void set_ValueMap(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_VALUEMAP_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_ROLE_OFFSET))(this, value);
		}
	};
}
