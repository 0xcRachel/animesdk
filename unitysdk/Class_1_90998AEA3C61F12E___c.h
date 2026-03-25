#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_90998AEA3C61F12E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD7E0D60)
#define CLASS_1_90998AEA3C61F12E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E0DA0)
#define CLASS_1_90998AEA3C61F12E___C__GETSHEETVALUES_B__4_0_OFFSET UNITYSDK_OFFSET(0xD7E0DB0)
#define CLASS_1_90998AEA3C61F12E___C__GETSHEETVALUES_B__4_1_OFFSET UNITYSDK_OFFSET(0xD7E0DD0)

inline static constexpr unsigned int Class_1_90998AEA3C61F12E___c_TypeDefinitionIndex = 40364;

class Class_1_90998AEA3C61F12E___c : public ::System::Object
{
public:
	static ::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>** StaticGet___9__4_1()
	{
		return (::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90998AEA3C61F12E___c_TypeDefinitionIndex)->GetStaticField(0x3F190);
	}
	static ::Class_1_90998AEA3C61F12E___c** StaticGet___9()
	{
		return (::Class_1_90998AEA3C61F12E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90998AEA3C61F12E___c_TypeDefinitionIndex)->GetStaticField(0x3F198);
	}
	static ::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>** StaticGet___9__4_0()
	{
		return (::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90998AEA3C61F12E___c_TypeDefinitionIndex)->GetStaticField(0x3F1A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E___C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32> _GetSheetValues_b__4_0(::Newtonsoft::Json::Linq::JToken* v, ::System::Int32 i)
	{
		return ((::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E___C__GETSHEETVALUES_B__4_0_OFFSET))(this, v, i);
	}

	::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32> _GetSheetValues_b__4_1(::Newtonsoft::Json::Linq::JToken* v, ::System::Int32 i)
	{
		return ((::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E___C__GETSHEETVALUES_B__4_1_OFFSET))(this, v, i);
	}
};
