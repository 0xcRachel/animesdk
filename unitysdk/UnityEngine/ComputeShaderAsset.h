#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }

#define UNITYENGINE_COMPUTESHADERASSET_GET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x181E3420)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFERBYID_OFFSET UNITYSDK_OFFSET(0x181E3560)
#define UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x181E3570)
#define UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x181E3480)
#define UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x181E3440)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x181E3540)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x181E3550)
#define UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x181E34F0)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x181E34D0)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x181E34E0)
#define UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x181E3490)
#define UNITYENGINE_COMPUTESHADERASSET_SET_COMPUTESHADER_OFFSET UNITYSDK_OFFSET(0x181E3430)
#define UNITYENGINE_COMPUTESHADERASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x181E3580)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeShaderAsset_TypeDefinitionIndex = 3898;

	class ComputeShaderAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::ComputeShader* get_computeShader()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_GET_COMPUTESHADER_OFFSET))(this);
		}

		::System::Void set_computeShader(::UnityEngine::ComputeShader* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SET_COMPUTESHADER_OFFSET))(this, value);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_OFFSET))(this, name, val);
		}

		::System::Void SetFloat_1(::System::Int32 name, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETFLOAT_1_OFFSET))(this, name, val);
		}

		::System::Void SetVector(::System::String* name, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_OFFSET))(this, name, val);
		}

		::System::Void SetVector_1(::System::Int32 name, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_1_OFFSET))(this, name, val);
		}

		::System::Void SetMatrix(::System::String* name, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_OFFSET))(this, name, val);
		}

		::System::Void SetMatrix_1(::System::Int32 name, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_1_OFFSET))(this, name, val);
		}

		::System::Void SetBufferByID(::System::Int32 name, ::System::UInt64 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFERBYID_OFFSET))(this, name, val);
		}

		::System::Void SetBuffer(::System::Int32 name, ::UnityEngine::ComputeBuffer* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETBUFFER_OFFSET))(this, name, val);
		}

		::System::Void SetVector_Injected(::System::Int32 name, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETVECTOR_INJECTED_OFFSET))(this, name, val);
		}

		::System::Void SetMatrix_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTESHADERASSET_SETMATRIX_INJECTED_OFFSET))(this, name, val);
		}
	};
}
