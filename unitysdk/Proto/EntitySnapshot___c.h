#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class EntitySnapshot; }

#define PROTO_ENTITYSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4416D0)
#define PROTO_ENTITYSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A441710)
#define PROTO_ENTITYSNAPSHOT___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1A441720)

namespace Proto
{
	inline static constexpr unsigned int EntitySnapshot___c_TypeDefinitionIndex = 24391;

	class EntitySnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::EntitySnapshot___c** StaticGet___9()
		{
			return (::Proto::EntitySnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(EntitySnapshot___c_TypeDefinitionIndex)->GetStaticField(0x3C5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::EntitySnapshot* __cctor_b__48_0()
		{
			return ((::Proto::EntitySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT___C___CCTOR_B__48_0_OFFSET))(this);
		}
	};
}
