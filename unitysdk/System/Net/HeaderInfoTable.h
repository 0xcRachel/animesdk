#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Net { class HeaderInfo; }
namespace System::Net { class HeaderParser; }

#define SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17EC9600)
#define SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET UNITYSDK_OFFSET(0x17EC6FC0)
#define SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET UNITYSDK_OFFSET(0x17EC6F70)
#define SYSTEM_NET_HEADERINFOTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EC72A0)
#define SYSTEM_NET_HEADERINFOTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC96C0)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfoTable_TypeDefinitionIndex = 2757;

	class HeaderInfoTable : public ::System::Object
	{
	public:
		static ::System::Net::HeaderParser** StaticGet_SingleParser()
		{
			return (::System::Net::HeaderParser**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x17720);
		}
		static ::System::Net::HeaderInfo** StaticGet_UnknownHeaderInfo()
		{
			return (::System::Net::HeaderInfo**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x17728);
		}
		static ::System::Net::HeaderParser** StaticGet_MultiParser()
		{
			return (::System::Net::HeaderParser**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x17730);
		}
		static ::System::Collections::Hashtable** StaticGet_HeaderHashTable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(HeaderInfoTable_TypeDefinitionIndex)->GetStaticField(0x17738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* ParseSingleValue(::System::String* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSESINGLEVALUE_OFFSET))(value);
		}

		static ::Il2CppArray<::System::String*>* ParseMultiValue(::System::String* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_PARSEMULTIVALUE_OFFSET))(value);
		}

		::System::Net::HeaderInfo* get_Item(::System::String* name)
		{
			return ((::System::Net::HeaderInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFOTABLE_GET_ITEM_OFFSET))(this, name);
		}
	};
}
