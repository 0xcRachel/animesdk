#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Value; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156EE6D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156EE710)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__55_0_OFFSET UNITYSDK_OFFSET(0x156EE720)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value___c_TypeDefinitionIndex = 27302;

	class Value___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Protobuf::WellKnownTypes::Value___c**)Il2CppClass::FromTypeDefinitionIndex(Value___c_TypeDefinitionIndex)->GetStaticField(0x2B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Value* __cctor_b__55_0()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE___C___CCTOR_B__55_0_OFFSET))(this);
		}
	};
}
