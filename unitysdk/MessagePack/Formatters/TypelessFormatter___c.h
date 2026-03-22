#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class TypelessFormatter_DeserializeMethod; }
namespace MessagePack::Formatters { class TypelessFormatter_SerializeMethod; }
namespace System { class Type; }

#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1563F820)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1563F860)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_0_OFFSET UNITYSDK_OFFSET(0x1563F870)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_1_OFFSET UNITYSDK_OFFSET(0x1563F970)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_2_OFFSET UNITYSDK_OFFSET(0x1563F960)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_3_OFFSET UNITYSDK_OFFSET(0x1563FA60)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TypelessFormatter___c_TypeDefinitionIndex = 9841;

	class TypelessFormatter___c : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::TypelessFormatter_SerializeMethod** StaticGet___9__10_2()
		{
			return (::MessagePack::Formatters::TypelessFormatter_SerializeMethod**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter___c_TypeDefinitionIndex)->GetStaticField(0x24370);
		}
		static ::MessagePack::Formatters::TypelessFormatter_DeserializeMethod** StaticGet___9__10_3()
		{
			return (::MessagePack::Formatters::TypelessFormatter_DeserializeMethod**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter___c_TypeDefinitionIndex)->GetStaticField(0x24378);
		}
		static ::MessagePack::Formatters::TypelessFormatter___c** StaticGet___9()
		{
			return (::MessagePack::Formatters::TypelessFormatter___c**)Il2CppClass::FromTypeDefinitionIndex(TypelessFormatter___c_TypeDefinitionIndex)->GetStaticField(0x24380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::Formatters::TypelessFormatter_SerializeMethod* __cctor_b__10_0(::System::Type* _)
		{
			return ((::MessagePack::Formatters::TypelessFormatter_SerializeMethod*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_0_OFFSET))(this, _);
		}

		::System::Void __cctor_b__10_2(::System::Object* p1, ::MessagePack::MessagePackWriter& p2, ::System::Object* p3, ::MessagePack::MessagePackSerializerOptions* p4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_2_OFFSET))(this, p1, p2, p3, p4);
		}

		::MessagePack::Formatters::TypelessFormatter_DeserializeMethod* __cctor_b__10_1(::System::Type* _)
		{
			return ((::MessagePack::Formatters::TypelessFormatter_DeserializeMethod*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_1_OFFSET))(this, _);
		}

		::System::Object* __cctor_b__10_3(::System::Object* p1, ::MessagePack::MessagePackReader& p2, ::MessagePack::MessagePackSerializerOptions* p3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER___C___CCTOR_B__10_3_OFFSET))(this, p1, p2, p3);
		}
	};
}
