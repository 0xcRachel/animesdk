#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/DisposeUtility.h"
#include "unitysdk/UnityEngine/Rendering/GrowableBuffer_GrowMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_GROWABLEBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18AF7C00)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AF79E0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18B120A0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_GETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x18B120B0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_GETSRCBUFFER_OFFSET UNITYSDK_OFFSET(0x18B120C0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_1_OFFSET UNITYSDK_OFFSET(0x18AFEA80)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_2_OFFSET UNITYSDK_OFFSET(0x18B129A0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_3_OFFSET UNITYSDK_OFFSET(0x18B12B80)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x18AFEC20)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_1_OFFSET UNITYSDK_OFFSET(0x18AF9C10)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_2_OFFSET UNITYSDK_OFFSET(0x18AF80D0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_3_OFFSET UNITYSDK_OFFSET(0x18AF81F0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_4_OFFSET UNITYSDK_OFFSET(0x18AF8730)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_5_OFFSET UNITYSDK_OFFSET(0x18B126F0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_6_OFFSET UNITYSDK_OFFSET(0x18B12850)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_7_OFFSET UNITYSDK_OFFSET(0x18AF90F0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_8_OFFSET UNITYSDK_OFFSET(0x18AF8CA0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x18AFE710)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B12F50)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF7750)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__ENLARGEBUFFER_OFFSET UNITYSDK_OFFSET(0x18B12C30)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__GETWRITEDATAPOINTER_OFFSET UNITYSDK_OFFSET(0x18B12D50)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x18B12C00)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUENOALIGN_OFFSET UNITYSDK_OFFSET(0x18B12360)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_1_OFFSET UNITYSDK_OFFSET(0x18B12DE0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_2_OFFSET UNITYSDK_OFFSET(0x18B12400)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_3_OFFSET UNITYSDK_OFFSET(0x18B12570)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x18B120D0)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x18B12240)
#define UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITE_OFFSET UNITYSDK_OFFSET(0x18B12CA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GrowableBuffer_TypeDefinitionIndex = 33476;

	class GrowableBuffer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet__TmpBuffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(GrowableBuffer_TypeDefinitionIndex)->GetStaticField(0x52A70);
		}
		::UnityEngine::Rendering::GrowableBuffer_GrowMode _GrowMode; // 0x10
		::System::Int32 _Size; // 0x14
		::UnityEngine::Rendering::DisposeUtility _Dispose; // 0x18
		::System::Int32 _Capacity; // 0x1C
		::System::Int32 _GrowStepSize; // 0x20
		::System::Byte* _Buffer; // 0x28

		::System::Void _ctor(::System::Int32 initialSize, ::System::Int32 growIncrement, ::UnityEngine::Rendering::GrowableBuffer_GrowMode growMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::GrowableBuffer_GrowMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__CTOR_OFFSET))(this, initialSize, growIncrement, growMode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_CLEAR_OFFSET))(this);
		}

		::System::Int32 GetBufferSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_GETBUFFERSIZE_OFFSET))(this);
		}

		::System::Void* GetSrcBuffer()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_GETSRCBUFFER_OFFSET))(this);
		}

		::System::Void WriteValueType(::System::Boolean val, ::System::Boolean align)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_OFFSET))(this, val, align);
		}

		::System::Void WriteValueType_1(::System::Int16 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_1_OFFSET))(this, val);
		}

		::System::Void WriteValueType_2(::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_2_OFFSET))(this, val);
		}

		::System::Void WriteValueType_3(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_3_OFFSET))(this, val);
		}

		::System::Void WriteValueType_4(::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_4_OFFSET))(this, val);
		}

		::System::Void WriteValueType_5(::UnityEngine::Vector3& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_5_OFFSET))(this, val);
		}

		::System::Void WriteValueType_6(::UnityEngine::Vector2& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_6_OFFSET))(this, val);
		}

		::System::Void WriteValueType_7(::UnityEngine::Matrix4x4& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_7_OFFSET))(this, val);
		}

		::System::Void WriteValueType_8(::UnityEngine::Color& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEVALUETYPE_8_OFFSET))(this, val);
		}

		::System::Void WriteArrayType(::Il2CppArray<::System::Int32>* val)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_OFFSET))(this, val);
		}

		::System::Void WriteArrayType_1(::Il2CppArray<::System::UInt32>* val)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_1_OFFSET))(this, val);
		}

		::System::Void WriteArrayType_2(::Il2CppArray<::UnityEngine::Vector4>* val)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_2_OFFSET))(this, val);
		}

		::System::Void WriteArrayType_3(::Il2CppArray<::UnityEngine::Matrix4x4>* val)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER_WRITEARRAYTYPE_3_OFFSET))(this, val);
		}

		::System::Void _ReleaseBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__RELEASEBUFFER_OFFSET))(this);
		}

		::System::Void _EnlargeBuffer(::System::Int32 dataPos, ::System::Int32 dataEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__ENLARGEBUFFER_OFFSET))(this, dataPos, dataEnd);
		}

		::System::Void _Write(::System::Byte* des, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITE_OFFSET))(this, des, length);
		}

		::System::Byte* _GetWriteDataPointer(::System::Int32 size)
		{
			return ((::System::Byte*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__GETWRITEDATAPOINTER_OFFSET))(this, size);
		}

		::System::Void _WriteValueType(::System::Int32 typeSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__WRITEVALUETYPE_OFFSET))(this, typeSize);
		}

		::System::Void _SerializeValueNoAlign(::System::Boolean v, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUENOALIGN_OFFSET))(this, v, offset);
		}

		::System::Void _SerializeValue(::System::Boolean v, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_OFFSET))(this, v, offset);
		}

		::System::Void _SerializeValue_1(::System::UInt32 v, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_1_OFFSET))(this, v, offset);
		}

		::System::Void _SerializeValue_2(::System::Int32 v, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_2_OFFSET))(this, v, offset);
		}

		::System::Void _SerializeValue_3(::System::Single v, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GROWABLEBUFFER__SERIALIZEVALUE_3_OFFSET))(this, v, offset);
		}
	};
}
