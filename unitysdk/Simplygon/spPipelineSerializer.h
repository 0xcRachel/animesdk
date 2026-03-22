#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spPipeline; }
namespace System { class String; }

#define SIMPLYGON_SPPIPELINESERIALIZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B6F030)
#define SIMPLYGON_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET UNITYSDK_OFFSET(0x17B6F1B0)
#define SIMPLYGON_SPPIPELINESERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5D840)

namespace Simplygon
{
	inline static constexpr unsigned int spPipelineSerializer_TypeDefinitionIndex = 28702;

	class spPipelineSerializer : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINESERIALIZER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINESERIALIZER_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::spPipeline* LoadPipelineFromFile(::System::String* path)
		{
			return ((::Simplygon::spPipeline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPPIPELINESERIALIZER_LOADPIPELINEFROMFILE_OFFSET))(this, path);
		}
	};
}
