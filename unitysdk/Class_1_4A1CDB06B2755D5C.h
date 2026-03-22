#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class EventHandler; }
namespace System { class Type; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_4A1CDB06B2755D5C_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x17B85500)
#define CLASS_1_4A1CDB06B2755D5C_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x17B85590)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_11A1C4DD280FAD83_OFFSET UNITYSDK_OFFSET(0x17B85490)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_696069542463DCB7_OFFSET UNITYSDK_OFFSET(0x17B85380)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_760F75C6A9E1313D_OFFSET UNITYSDK_OFFSET(0x17B856E0)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x17B85410)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x17B85400)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_BDE09E9911BF904B_OFFSET UNITYSDK_OFFSET(0x17B85320)
#define CLASS_1_4A1CDB06B2755D5C_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x17B851D0)
#define CLASS_1_4A1CDB06B2755D5C_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x17B855F0)
#define CLASS_1_4A1CDB06B2755D5C_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x17B85680)
#define CLASS_1_4A1CDB06B2755D5C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B851C0)

inline static constexpr unsigned int Class_1_4A1CDB06B2755D5C_TypeDefinitionIndex = 32987;

class Class_1_4A1CDB06B2755D5C : public ::System::Object
{
public:
	::System::EventHandler* _ValueChanged; // 0x10
	::System::Object* Field_1_0; // 0x18
	::System::Reflection::PropertyInfo* Field_1_1; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_1_BDE09E9911BF904B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_BDE09E9911BF904B_OFFSET))(this);
	}

	::System::TypeCode Method_1_696069542463DCB7()
	{
		return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_696069542463DCB7_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Object* Method_1_11A1C4DD280FAD83()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_11A1C4DD280FAD83_OFFSET))(this);
	}

	::System::Void add_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_ADD_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_REMOVE_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_760F75C6A9E1313D(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_METHOD_1_760F75C6A9E1313D_OFFSET))(this, a1, a2);
	}

	::System::Void add__ValueChanged(::System::EventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_ADD__VALUECHANGED_OFFSET))(this, value);
	}

	::System::Void remove__ValueChanged(::System::EventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_4A1CDB06B2755D5C_REMOVE__VALUECHANGED_OFFSET))(this, value);
	}
};
