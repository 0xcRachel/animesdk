#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x17F85E30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROYBYPATH_OFFSET UNITYSDK_OFFSET(0x17F845C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0x2036D60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETAPPLICATION_OFFSET UNITYSDK_OFFSET(0x2035730)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x20357E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x2035620)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TIMESAMPLINGCOUNT_OFFSET UNITYSDK_OFFSET(0x20355A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x2035520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_ISHDF5_OFFSET UNITYSDK_OFFSET(0x20356B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_LOAD_OFFSET UNITYSDK_OFFSET(0x2036DF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17F88080)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x2036EA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_TOBOOL_OFFSET UNITYSDK_OFFSET(0x17F90770)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_UPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x2036F20)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiContext_TypeDefinitionIndex = 34054;

	struct alignas(8) aiContext
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiContext v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiContext))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_OP_IMPLICIT_OFFSET))(v);
		}

		static ::System::Boolean ToBool(::UnityEngine::Formats::Alembic::Sdk::aiContext v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiContext))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_TOBOOL_OFFSET))(v);
		}

		static ::UnityEngine::Formats::Alembic::Sdk::aiContext Create(::System::Int32 uid)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_CREATE_OFFSET))(uid);
		}

		static ::System::Void DestroyByPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROYBYPATH_OFFSET))(path);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Boolean Load(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_LOAD_OFFSET))(this, path);
		}

		::System::Boolean IsHDF5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_ISHDF5_OFFSET))(this);
		}

		::System::String* GetApplication()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETAPPLICATION_OFFSET))(this);
		}

		/*
		::System::Void SetConfig(::UnityEngine::Formats::Alembic::Sdk::aiConfig& conf)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_SETCONFIG_OFFSET))(this, conf);
		}
		*/

		::System::Void UpdateSamples(::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_UPDATESAMPLES_OFFSET))(this, time);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiObject get_topObject()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TOPOBJECT_OFFSET))(this);
		}
		*/

		::System::Int32 get_timeSamplingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TIMESAMPLINGCOUNT_OFFSET))(this);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling GetTimeSampling(::System::Int32 i)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMESAMPLING_OFFSET))(this, i);
		}
		*/

		::System::Void GetTimeRange(::System::Double& begin, ::System::Double& end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMERANGE_OFFSET))(this, begin, end);
		}
	};
}
