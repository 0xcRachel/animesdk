#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JSONOBJECT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x15D6E7C0)
#define JSONOBJECT_GETCMD_OFFSET UNITYSDK_OFFSET(0x15D6E4B0)
#define JSONOBJECT_GETDICTVALUE_OFFSET UNITYSDK_OFFSET(0x15D6E520)
#define JSONOBJECT_GETENUM_OFFSET UNITYSDK_OFFSET(0x15D6EB80)
#define JSONOBJECT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x15D6E9C0)
#define JSONOBJECT_GETINT_OFFSET UNITYSDK_OFFSET(0x15D6E8C0)
#define JSONOBJECT_GETJSONDICT_OFFSET UNITYSDK_OFFSET(0x15D6E640)
#define JSONOBJECT_GETJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x15D6E770)
#define JSONOBJECT_GETLISTJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x15D6ECE0)
#define JSONOBJECT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x15D6EAC0)
#define JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15D6E410)
#define JSONOBJECT_KEYEXIST_OFFSET UNITYSDK_OFFSET(0x15D6E5C0)
#define JSONOBJECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D6E500)
#define JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x15D6E440)
#define JSONOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15D6E390)
#define JSONOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15D6E400)
#define JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D6E310)

inline static constexpr unsigned int JsonObject_TypeDefinitionIndex = 31047;

class JsonObject : public ::UnityEngine::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* objectDict; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONOBJECT__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* strJson)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT__CTOR_1_OFFSET))(this, strJson);
	}

	::System::Void _ctor_2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + JSONOBJECT__CTOR_2_OFFSET))(this, dict);
	}

	::System::Object* get_Item(::System::String* key)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GET_ITEM_OFFSET))(this, key);
	}

	::System::Void set_Item(::System::String* key, ::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + JSONOBJECT_SET_ITEM_OFFSET))(this, key, value);
	}

	::System::String* getCmd()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONOBJECT_GETCMD_OFFSET))(this);
	}

	::System::String* Serialize()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONOBJECT_SERIALIZE_OFFSET))(this);
	}

	::System::Object* GetDictValue(::System::String* key)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETDICTVALUE_OFFSET))(this, key);
	}

	::System::Boolean KeyExist(::System::String* key)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_KEYEXIST_OFFSET))(this, key);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GetJsonDict(::System::String* key)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETJSONDICT_OFFSET))(this, key);
	}

	::JsonObject* GetJsonObject(::System::String* key)
	{
		return ((::JsonObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETJSONOBJECT_OFFSET))(this, key);
	}

	::System::Boolean GetBool(::System::String* key)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETBOOL_OFFSET))(this, key);
	}

	::System::Int32 GetInt(::System::String* key)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETINT_OFFSET))(this, key);
	}

	::System::Single GetFloat(::System::String* key)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETFLOAT_OFFSET))(this, key);
	}

	::System::String* GetString(::System::String* key)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETSTRING_OFFSET))(this, key);
	}

	::System::Object* GetEnum(::System::Type* type, ::System::String* key)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETENUM_OFFSET))(this, type, key);
	}

	::System::Collections::Generic::List_1<::JsonObject*>* GetListJsonObject(::System::String* key)
	{
		return ((::System::Collections::Generic::List_1<::JsonObject*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JSONOBJECT_GETLISTJSONOBJECT_OFFSET))(this, key);
	}
};
