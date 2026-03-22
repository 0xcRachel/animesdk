#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA022C50)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA022B80)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA022D60)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xA022580)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA022B20)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xA022790)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS__CTOR_OFFSET UNITYSDK_OFFSET(0xA022DF0)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA022E00)
#define RPG_CLIENT_TAUTILS_RENDERERSLOTS___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA022E10)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlots_TypeDefinitionIndex = 58649;

	class RendererSlots : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x10
		::Il2CppArray<::System::Int32>* indices; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_GET_MATERIALS_OFFSET))(this);
		}

		::System::Void set_materials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_SET_MATERIALS_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TAUtils::RendererSlots* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TAUtils::RendererSlots*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_RENDERERSLOTS___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
