#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaFunction; }
namespace XLua { class LuaTable; }
namespace XLua::LuaDLL { class lua_CSFunction; }
namespace XLua::TemplateEngine { class Chunk; }

#define XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_1_OFFSET UNITYSDK_OFFSET(0xFCFDF60)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_OFFSET UNITYSDK_OFFSET(0xFCFE5F0)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPOSECODE_OFFSET UNITYSDK_OFFSET(0xFCFE3C0)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xFCFF0E0)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0xFCFE100)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFCFF060)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE_OPENLIB_OFFSET UNITYSDK_OFFSET(0xFCFF150)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFCFF3F0)
#define XLUA_TEMPLATEENGINE_LUATEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xFCFF3E0)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int LuaTemplate_TypeDefinitionIndex = 39545;

	class LuaTemplate : public ::System::Object
	{
	public:
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet_templateExecuteFunction()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaTemplate_TypeDefinitionIndex)->GetStaticField(0x1C270);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet_templateCompileFunction()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaTemplate_TypeDefinitionIndex)->GetStaticField(0x1C278);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE__CCTOR_OFFSET))();
		}

		static ::System::String* ComposeCode(::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>* chunks)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::XLua::TemplateEngine::Chunk*>*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPOSECODE_OFFSET))(chunks);
		}

		static ::XLua::LuaFunction* Compile(::XLua::LuaEnv* luaenv, ::System::String* snippet)
		{
			return ((::XLua::LuaFunction*(*)(::XLua::LuaEnv*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_OFFSET))(luaenv, snippet);
		}

		static ::System::String* Execute(::XLua::LuaFunction* compiledTemplate, ::XLua::LuaTable* parameters)
		{
			return ((::System::String*(*)(::XLua::LuaFunction*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_OFFSET))(compiledTemplate, parameters);
		}

		static ::System::String* Execute_1(::XLua::LuaFunction* compiledTemplate)
		{
			return ((::System::String*(*)(::XLua::LuaFunction*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_1_OFFSET))(compiledTemplate);
		}

		static ::System::Int32 Compile_1(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_COMPILE_1_OFFSET))(L);
		}

		static ::System::Int32 Execute_2(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_EXECUTE_2_OFFSET))(L);
		}

		static ::System::Void OpenLib(::System::IntPtr L)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_LUATEMPLATE_OPENLIB_OFFSET))(L);
		}
	};
}
