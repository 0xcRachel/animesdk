#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Diagnostics/Tracing/ConcurrentSetItem_2.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x15C28270)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_2_OFFSET UNITYSDK_OFFSET(0x15C281E0)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0x15C28140)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_RESERVEEVENTIDSBELOW_OFFSET UNITYSDK_OFFSET(0x15C1FB10)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C28300)
#define SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15C28000)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 1592;

	class NameInfo : public ::System::Diagnostics::Tracing::ConcurrentSetItem_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*>
	{
	public:
		static ::System::Int32* StaticGet_lastIdentity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NameInfo_TypeDefinitionIndex)->GetStaticField(0x2B20);
		}
		::System::String* name; // 0x10
		::Il2CppArray<::System::Byte>* nameMetadata; // 0x18
		::System::Int32 identity; // 0x20
		::System::Diagnostics::Tracing::EventTags tags; // 0x24

		::System::Void _ctor(::System::String* name, ::System::Diagnostics::Tracing::EventTags tags, ::System::Int32 typeMetadataSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CTOR_OFFSET))(this, name, tags, typeMetadataSize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO__CCTOR_OFFSET))();
		}

		static ::System::Void ReserveEventIDsBelow(::System::Int32 eventId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_RESERVEEVENTIDSBELOW_OFFSET))(eventId);
		}

		::System::Int32 Compare(::System::Diagnostics::Tracing::NameInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::Tracing::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_OFFSET))(this, other);
		}

		::System::Int32 Compare_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags> key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Diagnostics::Tracing::EventTags>))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_1_OFFSET))(this, key);
		}

		::System::Int32 Compare_2(::System::String* otherName, ::System::Diagnostics::Tracing::EventTags otherTags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Diagnostics::Tracing::EventTags))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_NAMEINFO_COMPARE_2_OFFSET))(this, otherName, otherTags);
		}
	};
}
