#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class InternalGlobals_TryArrayGet; }
namespace XLua { class InternalGlobals_TryArraySet; }
namespace XLua { class ObjectTranslatorPool; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_INTERNALGLOBALS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF829290)
#define XLUA_INTERNALGLOBALS__CTOR_OFFSET UNITYSDK_OFFSET(0xF82B3A0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals_TypeDefinitionIndex = 39430;

	class InternalGlobals : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_supportOp()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10710);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet_LazyReflectionWrap()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10718);
		}
		static ::XLua::ObjectTranslatorPool** StaticGet_objectTranslatorPool()
		{
			return (::XLua::ObjectTranslatorPool**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10720);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_strBuff()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10728);
		}
		static ::XLua::InternalGlobals_TryArraySet** StaticGet_genTryArraySetPtr()
		{
			return (::XLua::InternalGlobals_TryArraySet**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10730);
		}
		static ::XLua::InternalGlobals_TryArrayGet** StaticGet_genTryArrayGetPtr()
		{
			return (::XLua::InternalGlobals_TryArrayGet**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10738);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet_extensionMethodMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x10740);
		}
		static ::System::Int32* StaticGet_LUA_REGISTRYINDEX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x4620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS__CTOR_OFFSET))(this);
		}
	};
}
