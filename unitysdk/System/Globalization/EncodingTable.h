#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/InternalCodePageDataItem.h"
#include "unitysdk/System/Globalization/InternalEncodingDataItem.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Globalization { class CodePageDataItem; }
namespace System::Text { class EncodingInfo; }

#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET UNITYSDK_OFFSET(0x15C4F120)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x15C57A00)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x15C57870)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETENCODINGS_OFFSET UNITYSDK_OFFSET(0x15C57470)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET UNITYSDK_OFFSET(0x15C4F0D0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET UNITYSDK_OFFSET(0x15C571C0)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x15C4F140)
#define SYSTEM_GLOBALIZATION_ENCODINGTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C4F160)

namespace System::Globalization
{
	inline static constexpr unsigned int EncodingTable_TypeDefinitionIndex = 780;

	class EncodingTable : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_hashByName()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x8560);
		}
		static ::Il2CppArray<::System::Globalization::InternalCodePageDataItem>** StaticGet_codePageDataPtr()
		{
			return (::Il2CppArray<::System::Globalization::InternalCodePageDataItem>**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x8568);
		}
		static ::System::Collections::Hashtable** StaticGet_hashByCodePage()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x8570);
		}
		static ::Il2CppArray<::System::Globalization::InternalEncodingDataItem>** StaticGet_encodingDataPtr()
		{
			return (::Il2CppArray<::System::Globalization::InternalEncodingDataItem>**)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x8578);
		}
		static ::System::Int32* StaticGet_lastCodePageItem()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x2B70);
		}
		static ::System::Int32* StaticGet_lastEncodingItem()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EncodingTable_TypeDefinitionIndex)->GetStaticField(0x2B74);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetNumEncodingItems()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETNUMENCODINGITEMS_OFFSET))();
		}

		static ::System::Globalization::InternalEncodingDataItem ENC(::System::String* name, ::System::UInt16 cp)
		{
			return ((::System::Globalization::InternalEncodingDataItem(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_ENC_OFFSET))(name, cp);
		}

		static ::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(::System::UInt16 cp, ::System::UInt16 fcp, ::System::String* names, ::System::UInt32 flags)
		{
			return ((::System::Globalization::InternalCodePageDataItem(*)(::System::UInt16, ::System::UInt16, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_MAPCODEPAGEDATAITEM_OFFSET))(cp, fcp, names, flags);
		}

		static ::System::Int32 internalGetCodePageFromName(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_INTERNALGETCODEPAGEFROMNAME_OFFSET))(name);
		}

		static ::Il2CppArray<::System::Text::EncodingInfo*>* GetEncodings()
		{
			return ((::Il2CppArray<::System::Text::EncodingInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETENCODINGS_OFFSET))();
		}

		static ::System::Int32 GetCodePageFromName(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEFROMNAME_OFFSET))(name);
		}

		static ::System::Globalization::CodePageDataItem* GetCodePageDataItem(::System::Int32 codepage)
		{
			return ((::System::Globalization::CodePageDataItem*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ENCODINGTABLE_GETCODEPAGEDATAITEM_OFFSET))(codepage);
		}
	};
}
