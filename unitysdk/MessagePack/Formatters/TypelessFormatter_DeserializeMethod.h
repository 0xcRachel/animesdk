#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1563FA70)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1563FB00)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1563EF80)
#define MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1563FA40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int TypelessFormatter_DeserializeMethod_TypeDefinitionIndex = 9840;

	class TypelessFormatter_DeserializeMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* dynamicContractlessFormatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD_INVOKE_OFFSET))(this, dynamicContractlessFormatter, reader, options);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* dynamicContractlessFormatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD_BEGININVOKE_OFFSET))(this, dynamicContractlessFormatter, reader, options, callback, object);
		}

		::System::Object* EndInvoke(::MessagePack::MessagePackReader& reader, ::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_TYPELESSFORMATTER_DESERIALIZEMETHOD_ENDINVOKE_OFFSET))(this, reader, result);
		}
	};
}
