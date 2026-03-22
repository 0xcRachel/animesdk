#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFC0EDA0)
#define XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFC0EDD0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_0_OFFSET UNITYSDK_OFFSET(0xFC0EF00)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_1_OFFSET UNITYSDK_OFFSET(0xFC0EDE0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_2_OFFSET UNITYSDK_OFFSET(0xFC0EE40)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_3_OFFSET UNITYSDK_OFFSET(0xFC0EE70)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_4_OFFSET UNITYSDK_OFFSET(0xFC0EED0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_5_OFFSET UNITYSDK_OFFSET(0xFC0EF10)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_6_OFFSET UNITYSDK_OFFSET(0xFC0EF20)
#define XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6071_0_OFFSET UNITYSDK_OFFSET(0xFC0EF50)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c_TypeDefinitionIndex = 39418;

	class ObjectTranslator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6071_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46C90);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6070_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46C98);
		}
		static ::XLua::ObjectTranslator___c** StaticGet___9()
		{
			return (::XLua::ObjectTranslator___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CA0);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6070_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CA8);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6070_5()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CB0);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__6070_6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CB8);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6070_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CC0);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6070_0()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CC8);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6070_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x46CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6070_1(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_1_OFFSET))(this, m);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6070_2(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_2_OFFSET))(this, m);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6070_3(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_3_OFFSET))(this, m);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6070_4(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_4_OFFSET))(this, m);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6070_0(::XLua::DelegateBridgeBase* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_0_OFFSET))(this, x);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6070_5(::XLua::DelegateBridgeBase* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_5_OFFSET))(this, x);
		}

		::System::Type* _getCreatorUsingGeneric_b__6070_6(::System::Reflection::ParameterInfo* pinfo)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6070_6_OFFSET))(this, pinfo);
		}

		::System::Boolean _getDelegate_b__6071_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6071_0_OFFSET))(this, m);
		}
	};
}
