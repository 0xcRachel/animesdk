#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }
namespace System::Text::RegularExpressions { class Regex; }

#define IFIX_MANIFESTCONFIG_GET_ANONYMOUSTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1545FF30)
#define IFIX_MANIFESTCONFIG_GET_CODECOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE70)
#define IFIX_MANIFESTCONFIG_GET_EXTERNMETHODCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE50)
#define IFIX_MANIFESTCONFIG_GET_EXTERNTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE30)
#define IFIX_MANIFESTCONFIG_GET_FIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FEB0)
#define IFIX_MANIFESTCONFIG_GET_INTERNSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE90)
#define IFIX_MANIFESTCONFIG_GET_INTERPRETMETHODSCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FEF0)
#define IFIX_MANIFESTCONFIG_GET_NEWCLASSESCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FF10)
#define IFIX_MANIFESTCONFIG_GET_STATICFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FED0)
#define IFIX_MANIFESTCONFIG_PARSEMANIFEST_OFFSET UNITYSDK_OFFSET(0x15444490)
#define IFIX_MANIFESTCONFIG_SET_ANONYMOUSTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1545FF40)
#define IFIX_MANIFESTCONFIG_SET_CODECOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE80)
#define IFIX_MANIFESTCONFIG_SET_EXTERNMETHODCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE60)
#define IFIX_MANIFESTCONFIG_SET_EXTERNTYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1545FE40)
#define IFIX_MANIFESTCONFIG_SET_FIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FEC0)
#define IFIX_MANIFESTCONFIG_SET_INTERNSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FEA0)
#define IFIX_MANIFESTCONFIG_SET_INTERPRETMETHODSCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FF00)
#define IFIX_MANIFESTCONFIG_SET_NEWCLASSESCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FF20)
#define IFIX_MANIFESTCONFIG_SET_STATICFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x1545FEE0)
#define IFIX_MANIFESTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1545FF50)
#define IFIX_MANIFESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1545FD90)

namespace IFix
{
	inline static constexpr unsigned int ManifestConfig_TypeDefinitionIndex = 9320;

	class ManifestConfig : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_AnonymousTypeCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_InternStringCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7C8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_IgnroeCellExp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_IgnroeListExp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7D8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_PatchRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7E0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_ExternMethodCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7E8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_FieldCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7F0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_ExternTypeCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x7F8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_InterpretMethodsCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x800);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_CodeCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x808);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_NewClassesCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x810);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_StaticFieldCountRegexp()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ManifestConfig_TypeDefinitionIndex)->GetStaticField(0x818);
		}
		::System::Collections::Generic::List_1<::System::String*>* NewClasses; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* IgnoreMethods; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* Patches; // 0x20
		::System::Int32 _ExternTypeCount_k__BackingField; // 0x28
		::System::Int32 _AnonymousTypeCount_k__BackingField; // 0x2C
		::System::Int32 _CodeCount_k__BackingField; // 0x30
		::System::Int32 _FieldCount_k__BackingField; // 0x34
		::System::Int32 _InterpretMethodsCount_k__BackingField; // 0x38
		::System::Int32 _NewClassesCount_k__BackingField; // 0x3C
		::System::Int32 _ExternMethodCount_k__BackingField; // 0x40
		::System::Int32 _StaticFieldCount_k__BackingField; // 0x44
		::System::Int32 _InternStringCount_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG__CCTOR_OFFSET))();
		}

		::System::Int32 get_ExternTypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_EXTERNTYPECOUNT_OFFSET))(this);
		}

		::System::Void set_ExternTypeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_EXTERNTYPECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_ExternMethodCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_EXTERNMETHODCOUNT_OFFSET))(this);
		}

		::System::Void set_ExternMethodCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_EXTERNMETHODCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_CODECOUNT_OFFSET))(this);
		}

		::System::Void set_CodeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_CODECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_InternStringCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_INTERNSTRINGCOUNT_OFFSET))(this);
		}

		::System::Void set_InternStringCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_INTERNSTRINGCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_FieldCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_FIELDCOUNT_OFFSET))(this);
		}

		::System::Void set_FieldCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_FIELDCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_StaticFieldCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_STATICFIELDCOUNT_OFFSET))(this);
		}

		::System::Void set_StaticFieldCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_STATICFIELDCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_InterpretMethodsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_INTERPRETMETHODSCOUNT_OFFSET))(this);
		}

		::System::Void set_InterpretMethodsCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_INTERPRETMETHODSCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_NewClassesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_NEWCLASSESCOUNT_OFFSET))(this);
		}

		::System::Void set_NewClassesCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_NEWCLASSESCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_AnonymousTypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_GET_ANONYMOUSTYPECOUNT_OFFSET))(this);
		}

		::System::Void set_AnonymousTypeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_SET_ANONYMOUSTYPECOUNT_OFFSET))(this, value);
		}

		static ::IFix::ManifestConfig* ParseManifest(::System::IO::Stream* stream)
		{
			return ((::IFix::ManifestConfig*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + IFIX_MANIFESTCONFIG_PARSEMANIFEST_OFFSET))(stream);
		}
	};
}
