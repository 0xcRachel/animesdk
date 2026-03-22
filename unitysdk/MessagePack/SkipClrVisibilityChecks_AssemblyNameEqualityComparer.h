#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class AssemblyName; }

#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x156A8640)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x156A8690)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A8740)
#define MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x156A8630)

namespace MessagePack
{
	inline static constexpr unsigned int SkipClrVisibilityChecks_AssemblyNameEqualityComparer_TypeDefinitionIndex = 9488;

	class SkipClrVisibilityChecks_AssemblyNameEqualityComparer : public ::System::Object
	{
	public:
		static ::MessagePack::SkipClrVisibilityChecks_AssemblyNameEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::SkipClrVisibilityChecks_AssemblyNameEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(SkipClrVisibilityChecks_AssemblyNameEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x27990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Reflection::AssemblyName* x, ::System::Reflection::AssemblyName* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::AssemblyName*, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Reflection::AssemblyName* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + MESSAGEPACK_SKIPCLRVISIBILITYCHECKS_ASSEMBLYNAMEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
