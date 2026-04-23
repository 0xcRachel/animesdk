#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectCheckers; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OVERLOADMETHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0x8C67F50)
#define XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET UNITYSDK_OFFSET(0x8C67D80)
#define XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x8C66C60)
#define XLUA_OVERLOADMETHODWRAP_INIT_OFFSET UNITYSDK_OFFSET(0x8C66CA0)
#define XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x8C66C70)
#define XLUA_OVERLOADMETHODWRAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C68B70)
#define XLUA_OVERLOADMETHODWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x8C66C80)

namespace XLua
{
	inline static constexpr unsigned int OverloadMethodWrap_TypeDefinitionIndex = 46406;

	class OverloadMethodWrap : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::XLua::ObjectCast*>** StaticGet_paramsCasts()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCast*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x20880);
		}
		static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_isOptionalList()
		{
			return (::System::Collections::Generic::List_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x20888);
		}
		static ::System::Collections::Generic::List_1<::XLua::ObjectCheck*>** StaticGet_paramsChecks()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCheck*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x20890);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_outPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x20898);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_defaultValueList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x208A0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_inPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x208A8);
		}
		::Il2CppArray<::System::Object*>* defaultValueArray; // 0x10
		::Il2CppArray<::System::Int32>* inPosArray; // 0x18
		::System::Type* paramsType; // 0x20
		::Il2CppArray<::XLua::ObjectCast*>* castArray; // 0x28
		::Il2CppArray<::XLua::ObjectCheck*>* checkArray; // 0x30
		::System::Reflection::MethodBase* method; // 0x38
		::Il2CppArray<::System::Int32>* refPos; // 0x40
		::Il2CppArray<::System::Int32>* outPosArray; // 0x48
		::Il2CppArray<::System::Object*>* args; // 0x50
		::System::Type* targetType; // 0x58
		::Il2CppArray<::System::Boolean>* isOptionalArray; // 0x60
		::XLua::ObjectTranslator* translator; // 0x68
		::System::Boolean targetNeeded; // 0x70
		::System::Boolean _HasDefalutValue_k__BackingField; // 0x71
		::System::Boolean isVoid; // 0x72
		::System::Int32 luaStackPosStart; // 0x74

		::System::Void _ctor(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP__CTOR_OFFSET))(this, translator, targetType, method);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasDefalutValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET))(this);
		}

		::System::Void set_HasDefalutValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET))(this, value);
		}

		::System::Void Init(::XLua::ObjectCheckers* objCheckers, ::XLua::ObjectCasters* objCasters)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectCheckers*, ::XLua::ObjectCasters*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_INIT_OFFSET))(this, objCheckers, objCasters);
		}

		::System::Boolean Check(::System::IntPtr L)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET))(this, L);
		}

		::System::Int32 Call(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CALL_OFFSET))(this, L);
		}
	};
}
