#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define RPG_CUSTOMRP_PASSRTRES_FIND_OFFSET UNITYSDK_OFFSET(0x15A6BF50)
#define RPG_CUSTOMRP_PASSRTRES_GETRTID_OFFSET UNITYSDK_OFFSET(0x15A6C480)
#define RPG_CUSTOMRP_PASSRTRES_GETRT_OFFSET UNITYSDK_OFFSET(0x15A6C2F0)
#define RPG_CUSTOMRP_PASSRTRES_GET_1_OFFSET UNITYSDK_OFFSET(0x15A67DA0)
#define RPG_CUSTOMRP_PASSRTRES_GET_OFFSET UNITYSDK_OFFSET(0x15A6BD60)
#define RPG_CUSTOMRP_PASSRTRES_INIT_OFFSET UNITYSDK_OFFSET(0x15A6C050)
#define RPG_CUSTOMRP_PASSRTRES_ISEQUAL_1_OFFSET UNITYSDK_OFFSET(0x15A6C230)
#define RPG_CUSTOMRP_PASSRTRES_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x15A6C1F0)
#define RPG_CUSTOMRP_PASSRTRES_ISVALID_OFFSET UNITYSDK_OFFSET(0x15A6C430)
#define RPG_CUSTOMRP_PASSRTRES_RESETALL_OFFSET UNITYSDK_OFFSET(0x15A6C120)
#define RPG_CUSTOMRP_PASSRTRES_RESET_OFFSET UNITYSDK_OFFSET(0x15A6BD50)
#define RPG_CUSTOMRP_PASSRTRES_RTRELEASE_OFFSET UNITYSDK_OFFSET(0x15A6C3F0)
#define RPG_CUSTOMRP_PASSRTRES_SETTEX_OFFSET UNITYSDK_OFFSET(0x15A66F20)
#define RPG_CUSTOMRP_PASSRTRES__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A6C4E0)
#define RPG_CUSTOMRP_PASSRTRES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A6BC50)
#define RPG_CUSTOMRP_PASSRTRES__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6BC40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PassRTRes_TypeDefinitionIndex = 35242;

	class PassRTRes : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::PassRTRes** StaticGet_CameraRT()
		{
			return (::RPG::CustomRP::PassRTRes**)Il2CppClass::FromTypeDefinitionIndex(PassRTRes_TypeDefinitionIndex)->GetStaticField(0x5E780);
		}
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::PassRTRes*>** StaticGet__InternalRTPool()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::PassRTRes*>**)Il2CppClass::FromTypeDefinitionIndex(PassRTRes_TypeDefinitionIndex)->GetStaticField(0x5E788);
		}
		static ::System::Int32* StaticGet_NullTarget()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PassRTRes_TypeDefinitionIndex)->GetStaticField(0x10720);
		}
		static ::System::Int32* StaticGet_CameraTarget()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PassRTRes_TypeDefinitionIndex)->GetStaticField(0x10724);
		}
		::RPG::CustomRP::RTIDHandle rtHandler; // 0x10
		::System::Int32 index; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Int32 mip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES__CTOR_1_OFFSET))(this, name, mip);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_RESET_OFFSET))(this);
		}

		static ::System::Int32 Get(::System::String* name, ::System::Int32 mip, ::System::Boolean userCreate)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GET_OFFSET))(name, mip, userCreate);
		}

		static ::System::Int32 Find(::System::String* name, ::System::Int32 mip)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_FIND_OFFSET))(name, mip);
		}

		static ::RPG::CustomRP::PassRTRes* Get_1(::System::Int32 index)
		{
			return ((::RPG::CustomRP::PassRTRes*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GET_1_OFFSET))(index);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_INIT_OFFSET))();
		}

		static ::System::Void ResetAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_RESETALL_OFFSET))();
		}

		static ::System::Boolean IsEqual(::RPG::CustomRP::PassRTRes* rtRes, ::System::Int32 rt)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PassRTRes*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_ISEQUAL_OFFSET))(rtRes, rt);
		}

		static ::System::Boolean IsEqual_1(::RPG::CustomRP::PassRTRes* rtRes, ::UnityEngine::Rendering::RenderTargetIdentifier& rtID)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PassRTRes*, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_ISEQUAL_1_OFFSET))(rtRes, rtID);
		}

		static ::System::Int32 GetRT(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GETRT_OFFSET))(name);
		}

		static ::System::Void SetTex(::System::Int32 index, ::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_SETTEX_OFFSET))(index, tex);
		}

		static ::System::Void RTRelease(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_RTRELEASE_OFFSET))(index);
		}

		static ::System::Boolean IsValid(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_ISVALID_OFFSET))(id);
		}

		static ::System::Void GetRTID(::System::Int32 id, ::UnityEngine::Rendering::RenderTargetIdentifier& rtID)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GETRTID_OFFSET))(id, rtID);
		}
	};
}
