#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkBaseArray_1.h"

class AkExternalSourceInfo;

#define AKEXTERNALSOURCEINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x192CAD80)
#define AKEXTERNALSOURCEINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x192CAD20)
#define AKEXTERNALSOURCEINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x192CABC0)
#define AKEXTERNALSOURCEINFOARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x192CAB10)
#define AKEXTERNALSOURCEINFOARRAY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET UNITYSDK_OFFSET(0x192CAC70)
#define AKEXTERNALSOURCEINFOARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x192CAB00)
#define AKEXTERNALSOURCEINFOARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x192CAEA0)
#define AKEXTERNALSOURCEINFOARRAY___IFIXBASEPROXY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET UNITYSDK_OFFSET(0x192CAF50)

inline static constexpr unsigned int AkExternalSourceInfoArray_TypeDefinitionIndex = 40421;

class AkExternalSourceInfoArray : public ::AkBaseArray_1<::AkExternalSourceInfo*>
{
public:
	::System::Void _ctor(::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY__CTOR_OFFSET))(this, count);
	}

	::System::Int32 get_StructureSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_GET_STRUCTURESIZE_OFFSET))(this);
	}

	::System::Void DefaultConstructAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, address);
	}

	::System::Void ReleaseAllocatedMemoryFromReferenceAtIntPtr(::System::IntPtr address)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET))(this, address);
	}

	::AkExternalSourceInfo* CreateNewReferenceFromIntPtr(::System::IntPtr address)
	{
		return ((::AkExternalSourceInfo*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, address);
	}

	::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr address, ::AkExternalSourceInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, address, other);
	}

	::System::Void __iFixBaseProxy_DefaultConstructAtIntPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY___IFIXBASEPROXY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_ReleaseAllocatedMemoryFromReferenceAtIntPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFOARRAY___IFIXBASEPROXY_RELEASEALLOCATEDMEMORYFROMREFERENCEATINTPTR_OFFSET))(this, P0);
	}
};
