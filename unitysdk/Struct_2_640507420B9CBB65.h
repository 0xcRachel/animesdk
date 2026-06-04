#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ProducerKind.h"
#include "unitysdk/RPG/Client/RegionSourceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_640507420B9CBB65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x37899C0)
#define STRUCT_2_640507420B9CBB65_EQUALS_OFFSET UNITYSDK_OFFSET(0x3789910)
#define STRUCT_2_640507420B9CBB65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x37899D0)
#define STRUCT_2_640507420B9CBB65_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0x66AF90)
#define STRUCT_2_640507420B9CBB65_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x72BC00)
#define STRUCT_2_640507420B9CBB65_GET_PRODUCER_OFFSET UNITYSDK_OFFSET(0x66C0A0)
#define STRUCT_2_640507420B9CBB65_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x66B8A0)
#define STRUCT_2_640507420B9CBB65_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x6668A0)
#define STRUCT_2_640507420B9CBB65__CTOR_OFFSET UNITYSDK_OFFSET(0x37898E0)
#define STRUCT_2_640507420B9CBB65___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x37899E0)
#define STRUCT_2_640507420B9CBB65___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3789A50)

inline static constexpr unsigned int Struct_2_640507420B9CBB65_TypeDefinitionIndex = 58137;

struct alignas(8) Struct_2_640507420B9CBB65
{
	::System::String* _BlockName_k__BackingField; // 0x10
	::System::Int32 _RegionId_k__BackingField; // 0x18
	::RPG::Client::ProducerKind _Producer_k__BackingField; // 0x1C
	::RPG::Client::RegionSourceType _SourceType_k__BackingField; // 0x20
	::System::Int32 _Channel_k__BackingField; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::RPG::Client::ProducerKind a3, ::RPG::Client::RegionSourceType a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::Client::ProducerKind, ::RPG::Client::RegionSourceType, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* get_BlockName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_GET_BLOCKNAME_OFFSET))(this);
	}

	::System::Int32 get_RegionId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_GET_REGIONID_OFFSET))(this);
	}

	::RPG::Client::ProducerKind get_Producer()
	{
		return ((::RPG::Client::ProducerKind(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_GET_PRODUCER_OFFSET))(this);
	}

	::RPG::Client::RegionSourceType get_SourceType()
	{
		return ((::RPG::Client::RegionSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Int32 get_Channel()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_GET_CHANNEL_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_640507420B9CBB65 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_640507420B9CBB65))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_640507420B9CBB65___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
