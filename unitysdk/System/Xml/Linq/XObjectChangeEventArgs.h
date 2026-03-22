#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
#include "unitysdk/System/Xml/Linq/XObjectChange.h"

#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D43D60)
#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17D43D30)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChangeEventArgs_TypeDefinitionIndex = 4802;

	class XObjectChangeEventArgs : public ::System::EventArgs
	{
	public:
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Remove()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x1E0);
		}
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Add()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x1E8);
		}
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Name()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x1F0);
		}
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Value()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)Il2CppClass::FromTypeDefinitionIndex(XObjectChangeEventArgs_TypeDefinitionIndex)->GetStaticField(0x1F8);
		}
		::System::Xml::Linq::XObjectChange objectChange; // 0x10

		::System::Void _ctor(::System::Xml::Linq::XObjectChange objectChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XObjectChange))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CTOR_OFFSET))(this, objectChange);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS__CCTOR_OFFSET))();
		}
	};
}
