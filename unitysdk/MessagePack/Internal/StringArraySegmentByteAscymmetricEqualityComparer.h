#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1566B4B0)
#define MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1566B420)
#define MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1566B6D0)
#define MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1566B650)
#define MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1566BA00)
#define MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1566B9F0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int StringArraySegmentByteAscymmetricEqualityComparer_TypeDefinitionIndex = 9571;

	class StringArraySegmentByteAscymmetricEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Is32Bit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StringArraySegmentByteAscymmetricEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x8100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::Il2CppArray<::System::Byte>* x, ::Il2CppArray<::System::Byte>* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Boolean Equals_1(::Il2CppArray<::System::Byte>* x, ::System::ArraySegment_1<::System::Byte> y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_EQUALS_1_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::Il2CppArray<::System::Byte>* key1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, key1);
		}

		::System::Int32 GetHashCode_1(::System::ArraySegment_1<::System::Byte> key2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_STRINGARRAYSEGMENTBYTEASCYMMETRICEQUALITYCOMPARER_GETHASHCODE_1_OFFSET))(this, key2);
		}
	};
}
