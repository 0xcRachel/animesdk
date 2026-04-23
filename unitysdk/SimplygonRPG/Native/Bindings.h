#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIMPLYGONRPG_NATIVE_BINDINGS_REDUCE_OFFSET UNITYSDK_OFFSET(0x1A5F1050)
#define SIMPLYGONRPG_NATIVE_BINDINGS_REMESH_OFFSET UNITYSDK_OFFSET(0x1A5F1110)
#define SIMPLYGONRPG_NATIVE_BINDINGS_RUNPIPELINE_OFFSET UNITYSDK_OFFSET(0x1A5F0F70)
#define SIMPLYGONRPG_NATIVE_BINDINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F11D0)

namespace SimplygonRPG::Native
{
	inline static constexpr unsigned int Bindings_TypeDefinitionIndex = 40988;

	class Bindings : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 RunPipeline(::System::String* inputPath, ::System::String* outputPath, ::System::String* pipelinePath)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS_RUNPIPELINE_OFFSET))(inputPath, outputPath, pipelinePath);
		}

		static ::System::Int32 Reduce(::System::String* inputPath, ::System::String* outputPath)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS_REDUCE_OFFSET))(inputPath, outputPath);
		}

		static ::System::Int32 Remesh(::System::String* inputPath, ::System::String* outputPath)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGONRPG_NATIVE_BINDINGS_REMESH_OFFSET))(inputPath, outputPath);
		}
	};
}
