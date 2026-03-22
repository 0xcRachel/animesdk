#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0x15664DF0)
#define MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0x15664E00)
#define MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_RESOLVERTYPE_OFFSET UNITYSDK_OFFSET(0x15664DE0)
#define MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x15664DD0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int GeneratedAssemblyMessagePackResolverAttribute_TypeDefinitionIndex = 9591;

	class GeneratedAssemblyMessagePackResolverAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _ResolverType_k__BackingField; // 0x10
		::System::Int32 _MinorVersion_k__BackingField; // 0x18
		::System::Int32 _MajorVersion_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Type* resolverType, ::System::Int32 majorVersion, ::System::Int32 minorVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE__CTOR_OFFSET))(this, resolverType, majorVersion, minorVersion);
		}

		::System::Type* get_ResolverType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_RESOLVERTYPE_OFFSET))(this);
		}

		::System::Int32 get_MajorVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_MAJORVERSION_OFFSET))(this);
		}

		::System::Int32 get_MinorVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GENERATEDASSEMBLYMESSAGEPACKRESOLVERATTRIBUTE_GET_MINORVERSION_OFFSET))(this);
		}
	};
}
