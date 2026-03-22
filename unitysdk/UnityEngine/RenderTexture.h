#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Camera_MonoOrStereoscopicEye.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderBuffer.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/VRTextureUsage.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET UNITYSDK_OFFSET(0x18220B30)
#define UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0x18220AF0)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_1_OFFSET UNITYSDK_OFFSET(0x18220A90)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET UNITYSDK_OFFSET(0x18220A70)
#define UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x18220B20)
#define UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x18220900)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18220980)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0x18220940)
#define UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0x18221720)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182209D0)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x18220990)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18220BF0)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18220B90)
#define UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x182208D0)
#define UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET UNITYSDK_OFFSET(0x18220A60)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET UNITYSDK_OFFSET(0x18221B90)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_10_OFFSET UNITYSDK_OFFSET(0x18222A50)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_11_OFFSET UNITYSDK_OFFSET(0x18222BA0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_12_OFFSET UNITYSDK_OFFSET(0x18222CE0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_13_OFFSET UNITYSDK_OFFSET(0x18222E20)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET UNITYSDK_OFFSET(0x18221E00)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET UNITYSDK_OFFSET(0x18221F70)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET UNITYSDK_OFFSET(0x182220C0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET UNITYSDK_OFFSET(0x18222210)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET UNITYSDK_OFFSET(0x18222360)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET UNITYSDK_OFFSET(0x182224A0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_7_OFFSET UNITYSDK_OFFSET(0x18222640)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_8_OFFSET UNITYSDK_OFFSET(0x182227A0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_9_OFFSET UNITYSDK_OFFSET(0x18222900)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18220C10)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18220C00)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0x18221AF0)
#define UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET UNITYSDK_OFFSET(0x18222FF0)
#define UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x18220920)
#define UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x18220850)
#define UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x18220810)
#define UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x18220870)
#define UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET UNITYSDK_OFFSET(0x182209E0)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0x18220A20)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHFORMAT_OFFSET UNITYSDK_OFFSET(0x18220720)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x18220C30)
#define UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182211C0)
#define UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x182206E0)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x18222FD0)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x18220890)
#define UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x182207A0)
#define UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x18220700)
#define UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x182206C0)
#define UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0x18222F30)
#define UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x182208E0)
#define UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0x18222F80)
#define UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x18220780)
#define UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET UNITYSDK_OFFSET(0x18220750)
#define UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x182207F0)
#define UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x182208B0)
#define UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x18220730)
#define UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x18220830)
#define UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x18220760)
#define UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x182206A0)
#define UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x18220B50)
#define UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET UNITYSDK_OFFSET(0x18220B10)
#define UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET UNITYSDK_OFFSET(0x18220A80)
#define UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET UNITYSDK_OFFSET(0x18220C20)
#define UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET UNITYSDK_OFFSET(0x18220B00)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET UNITYSDK_OFFSET(0x18220AB0)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET UNITYSDK_OFFSET(0x18220AA0)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_1_OFFSET UNITYSDK_OFFSET(0x18220AD0)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET UNITYSDK_OFFSET(0x18220AC0)
#define UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x18220910)
#define UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET UNITYSDK_OFFSET(0x18220AE0)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18220B80)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18220B70)
#define UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET UNITYSDK_OFFSET(0x18220B40)
#define UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x18220930)
#define UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0x18220860)
#define UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0x18220820)
#define UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0x18220880)
#define UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x18220C40)
#define UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182215E0)
#define UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x182206F0)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x18222FE0)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x182208A0)
#define UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x182207C0)
#define UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x18220710)
#define UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x182206D0)
#define UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0x18222F50)
#define UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x182208F0)
#define UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0x18222FA0)
#define UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0x18220790)
#define UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0x18220800)
#define UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x182208C0)
#define UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0x18220740)
#define UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0x18220840)
#define UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0x18220770)
#define UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x182206B0)
#define UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET UNITYSDK_OFFSET(0x18220B60)
#define UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0x18220D10)
#define UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18220C70)
#define UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18221030)
#define UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18221220)
#define UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x182212D0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x18221380)
#define UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x18221660)
#define UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x182218B0)
#define UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x18221960)
#define UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x18221A20)
#define UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18220C50)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTexture_TypeDefinitionIndex = 3989;

	class RenderTexture : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_1_OFFSET))(this, desc);
		}

		::System::Void _ctor_2(::UnityEngine::RenderTexture* textureToCopy)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_2_OFFSET))(this, textureToCopy);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_3_OFFSET))(this, width, height, depth, format);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_4_OFFSET))(this, width, height, depth, format);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_5_OFFSET))(this, width, height, depth, format, mipCount);
		}

		::System::Void _ctor_6(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_6_OFFSET))(this, width, height, depth, format, readWrite);
		}

		::System::Void _ctor_7(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_7_OFFSET))(this, width, height, depth, format);
		}

		::System::Void _ctor_8(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_8_OFFSET))(this, width, height, depth);
		}

		::System::Void _ctor_9(::System::Int32 width, ::System::Int32 height, ::System::Int32 depth, ::UnityEngine::RenderTextureFormat format, ::System::Int32 mipCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE__CTOR_9_OFFSET))(this, width, height, depth, format, mipCount);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureDimension))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET))(this);
		}

		::System::Void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHFORMAT_OFFSET))(this);
		}

		::System::Boolean get_useMipMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET))(this);
		}

		::System::Void set_useMipMap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET))(this, value);
		}

		::System::Boolean get_sRGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET))(this);
		}

		::UnityEngine::VRTextureUsage get_vrUsage()
		{
			return ((::UnityEngine::VRTextureUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET))(this);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureMemoryless get_memorylessMode()
		{
			return ((::UnityEngine::RenderTextureMemoryless(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET))(this);
		}

		::System::Void set_memorylessMode(::UnityEngine::RenderTextureMemoryless value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureFormat get_format()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::RenderTextureFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_stencilFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET))(this);
		}

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET))(this, value);
		}

		::System::Boolean get_autoGenerateMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET))(this);
		}

		::System::Void set_autoGenerateMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET))(this, value);
		}

		::System::Int32 get_volumeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET))(this);
		}

		::System::Void set_volumeDepth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET))(this, value);
		}

		::System::Int32 get_antiAliasing()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET))(this);
		}

		::System::Void set_antiAliasing(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET))(this, value);
		}

		::System::Boolean get_bindTextureMS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET))(this);
		}

		::System::Void set_bindTextureMS(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET))(this, value);
		}

		::System::Boolean get_enableRandomWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET))(this);
		}

		::System::Void set_enableRandomWrite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET))(this, value);
		}

		::System::Boolean get_useDynamicScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET))(this);
		}

		::System::Void set_useDynamicScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET))(this, value);
		}

		::System::Boolean GetIsPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET))(this);
		}

		::System::Boolean get_isPowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET))(this);
		}

		::System::Void set_isPowerOfTwo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET))(this, value);
		}

		static ::UnityEngine::RenderTexture* GetActive()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET))();
		}

		static ::System::Void SetActive(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET))(rt);
		}

		static ::UnityEngine::RenderTexture* get_active()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET))();
		}

		static ::System::Void set_active(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET))(value);
		}

		::UnityEngine::RenderBuffer GetColorBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET))(this);
		}

		::UnityEngine::RenderBuffer GetDepthBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET))(this);
		}

		::UnityEngine::RenderBuffer get_colorBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET))(this);
		}

		::UnityEngine::RenderBuffer get_depthBuffer()
		{
			return ((::UnityEngine::RenderBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET))(this);
		}

		::System::IntPtr GetNativeDepthBufferPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET))(this);
		}

		::System::Void DiscardContents(::System::Boolean discardColor, ::System::Boolean discardDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET))(this, discardColor, discardDepth);
		}

		::System::Void MarkRestoreExpected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET))(this);
		}

		::System::Void DiscardContents_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_1_OFFSET))(this);
		}

		::System::Void ResolveAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET))(this);
		}

		::System::Void ResolveAATo(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET))(this, rt);
		}

		::System::Void ResolveAntiAliasedSurface()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET))(this);
		}

		::System::Void ResolveAntiAliasedSurface_1(::UnityEngine::RenderTexture* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_1_OFFSET))(this, target);
		}

		::System::Void SetGlobalShaderProperty(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET))(this, propertyName);
		}

		::System::Boolean Create()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET))(this);
		}

		::System::Void GenerateMips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET))(this);
		}

		::System::Void ConvertToEquirect(::UnityEngine::RenderTexture* equirect, ::UnityEngine::Camera_MonoOrStereoscopicEye eye)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Camera_MonoOrStereoscopicEye))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET))(this, equirect, eye);
		}

		::System::Void SetSRGBReadWrite(::System::Boolean srgb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET))(this, srgb);
		}

		static ::System::Void Internal_Create(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET))(rt);
		}

		static ::System::Boolean SupportsStencil(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET))(rt);
		}

		::System::Void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET))(this, desc);
		}

		::UnityEngine::RenderTextureDescriptor GetDescriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET))(desc);
		}

		static ::System::Void ReleaseTemporary(::UnityEngine::RenderTexture* temp)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET))(temp);
		}

		::System::Int32 get_depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_depth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET))(this, value);
		}

		::UnityEngine::RenderTextureDescriptor get_descriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Void set_descriptor(::UnityEngine::RenderTextureDescriptor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET))(this, value);
		}

		static ::System::Void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET))(desc);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET))(renderTextureFormat, readWrite);
		}

		static ::UnityEngine::RenderTexture* GetTemporary(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(desc);
		}

		static ::UnityEngine::RenderTexture* GetTemporaryImpl(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage, useDynamicScale);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_1(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_1_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage, useDynamicScale);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_2(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_2_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode, vrUsage);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_3(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_3_OFFSET))(width, height, depthBuffer, format, antiAliasing, memorylessMode);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_4(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_4_OFFSET))(width, height, depthBuffer, format, antiAliasing);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_5(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_5_OFFSET))(width, height, depthBuffer, format);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_6(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_6_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage, useDynamicScale);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_7(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_7_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode, vrUsage);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_8(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_8_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing, memorylessMode);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_9(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, ::System::Int32 antiAliasing)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_9_OFFSET))(width, height, depthBuffer, format, readWrite, antiAliasing);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_10(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_10_OFFSET))(width, height, depthBuffer, format, readWrite);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_11(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_11_OFFSET))(width, height, depthBuffer, format);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_12(::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_12_OFFSET))(width, height, depthBuffer);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_13(::System::Int32 width, ::System::Int32 height)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_13_OFFSET))(width, height);
		}

		::System::Boolean get_isCubemap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET))(this);
		}

		::System::Void set_isCubemap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET))(this, value);
		}

		::System::Boolean get_isVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET))(this);
		}

		::System::Void set_isVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET))(value);
		}

		::UnityEngine::Vector2 GetTexelOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET))(this);
		}

		::System::Void GetColorBuffer_Injected(::UnityEngine::RenderBuffer& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void GetDepthBuffer_Injected(::UnityEngine::RenderBuffer& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetRenderTextureDescriptor_Injected(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET))(this, desc);
		}

		::System::Void GetDescriptor_Injected(::UnityEngine::RenderTextureDescriptor& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET))(this, ret);
		}

		static ::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET))(desc);
		}
	};
}
