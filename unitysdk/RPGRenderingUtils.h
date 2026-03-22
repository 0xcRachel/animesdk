#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGRENDERINGUTILS_ISCLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7400)
#define RPGRENDERINGUTILS_ISCURRENTGLESCONFIG_OFFSET UNITYSDK_OFFSET(0x163E6010)
#define RPGRENDERINGUTILS_ISCURRENTVULKANCONFIG_OFFSET UNITYSDK_OFFSET(0x163E6520)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7630)
#define RPGRENDERINGUTILS_ISENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7550)
#define RPGRENDERINGUTILS_ISENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7470)
#define RPGRENDERINGUTILS_ISENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E75C0)
#define RPGRENDERINGUTILS_ISENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E74E0)
#define RPGRENDERINGUTILS_ISVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7320)
#define RPGRENDERINGUTILS_ISVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7080)
#define RPGRENDERINGUTILS_ISVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7390)
#define RPGRENDERINGUTILS_MAKECLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E73D0)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7600)
#define RPGRENDERINGUTILS_MAKEENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7520)
#define RPGRENDERINGUTILS_MAKEENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7440)
#define RPGRENDERINGUTILS_MAKEENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7590)
#define RPGRENDERINGUTILS_MAKEENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E74B0)
#define RPGRENDERINGUTILS_MAKEFORCEGLESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E62A0)
#define RPGRENDERINGUTILS_MAKEFORCEVULKANCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E67E0)
#define RPGRENDERINGUTILS_MAKEVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E72F0)
#define RPGRENDERINGUTILS_MAKEVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E6CB0)
#define RPGRENDERINGUTILS_MAKEVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E7360)
#define RPGRENDERINGUTILS_MAKEVULKANRBACONFIGFILE_OFFSET UNITYSDK_OFFSET(0x163E72C0)
#define RPGRENDERINGUTILS_SETINVULKANWHITELIST_OFFSET UNITYSDK_OFFSET(0x163E67B0)
#define RPGRENDERINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E7670)

inline static constexpr unsigned int RPGRenderingUtils_TypeDefinitionIndex = 28251;

class RPGRenderingUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_vkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BD0);
	}
	static ::System::String** StaticGet_ActiveStageName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BD8);
	}
	static ::System::String** StaticGet_customVkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BE0);
	}
	static ::System::String** StaticGet_vulkanFeaturesFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x2BE8);
	}
	static ::System::UInt32* StaticGet_enableVKShaderModuleCache()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB70);
	}
	static ::System::UInt32* StaticGet_closeVkPreTransform()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB74);
	}
	static ::System::UInt32* StaticGet_enableVKMemoryReport()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB78);
	}
	static ::System::UInt32* StaticGet_enableVulkanIndirectDrawCount()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB7C);
	}
	static ::System::UInt32* StaticGet_enableVulkanRBA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB80);
	}
	static ::System::Byte* StaticGet_customFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB84);
	}
	static ::System::Byte* StaticGet_glesForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB85);
	}
	static ::System::Boolean* StaticGet_isGlesConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB86);
	}
	static ::System::Boolean* StaticGet_vulkanConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB87);
	}
	static ::System::Boolean* StaticGet_isInVulkanWhitelist()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB88);
	}
	static ::System::Boolean* StaticGet_isVulkanConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB89);
	}
	static ::System::UInt32* StaticGet_enableVulkanDynamicVertexState()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB8C);
	}
	static ::System::UInt32* StaticGet_enableVKAttachmentStoreNoneForNonAdreonGPU()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB90);
	}
	static ::System::Boolean* StaticGet_glesConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB94);
	}
	static ::System::Byte* StaticGet_vulkanForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB95);
	}
	static ::System::Byte* StaticGet_glesForceVulkanFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB96);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeap()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB98);
	}
	static ::System::UInt32* StaticGet_enableVKGPUCrashCheck()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xB9C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsCurrentGlesConfig()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISCURRENTGLESCONFIG_OFFSET))();
	}

	static ::System::Void MakeForceGlesConfigFile(::System::Boolean forcegles)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEFORCEGLESCONFIGFILE_OFFSET))(forcegles);
	}

	static ::System::Boolean IsCurrentVulkanConfig()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISCURRENTVULKANCONFIG_OFFSET))();
	}

	static ::System::Void SetInVulkanWhitelist(::System::Boolean v)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_SETINVULKANWHITELIST_OFFSET))(v);
	}

	static ::System::Void MakeForceVulkanConfigFile(::System::Boolean forceVulkan, ::System::Boolean userSettings, ::System::Boolean userGMSettings)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEFORCEVULKANCONFIGFILE_OFFSET))(forceVulkan, userSettings, userGMSettings);
	}

	static ::System::Void MakeVulkanFeaturesConfigFile(::System::UInt32 featureMask, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANFEATURESCONFIGFILE_OFFSET))(featureMask, enable);
	}

	static ::System::Boolean IsVulkanFeaturesConfigFile(::System::UInt32 featureMask)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISVULKANFEATURESCONFIGFILE_OFFSET))(featureMask);
	}

	static ::System::Void MakeVulkanRBAConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANRBACONFIGFILE_OFFSET))(enable);
	}

	static ::System::Void MakeVulkanDynamicVertexStateConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsVulkanDynamicVertexStateConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeVulkanIndirectDrawCountConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsVulkanIndirectDrawCountConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeCloseVkPreTransformConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKECLOSEVKPRETRANSFORMCONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsCloseVkPreTransformConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISCLOSEVKPRETRANSFORMCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKGPUCrashCheckConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsEnableVKGPUCrashCheckConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKShaderModuleCacheConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsEnableVKShaderModuleCacheConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKAttachmentStoreNoneForNonAdreonGPUConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsEnableVKAttachmentStoreNoneForNonAdreonGPUConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKMemoryReportConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKMEMORYREPORTCONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsEnableVKMemoryReportConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKMEMORYREPORTCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeDisableVKTileMemoryHeapConfigFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET))(enable);
	}

	static ::System::Boolean IsDisableVKTileMemoryHeapConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET))();
	}
};
