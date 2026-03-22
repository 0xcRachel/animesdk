#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/DefaultFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/TextureCreationFlags.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Texture.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Array; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0x1823E740)
#define UNITYENGINE_TEXTURE2D_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1823FD50)
#define UNITYENGINE_TEXTURE2D_APPLY_2_OFFSET UNITYSDK_OFFSET(0x1823FDC0)
#define UNITYENGINE_TEXTURE2D_APPLY_OFFSET UNITYSDK_OFFSET(0x1823FCD0)
#define UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823EA10)
#define UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E9F0)
#define UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1823E6A0)
#define UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823F0B0)
#define UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET UNITYSDK_OFFSET(0x1823E8E0)
#define UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET UNITYSDK_OFFSET(0x18240060)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1823E820)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET UNITYSDK_OFFSET(0x1823E7E0)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_1_OFFSET UNITYSDK_OFFSET(0x1823F9A0)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET UNITYSDK_OFFSET(0x1823F8F0)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1823E7D0)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1823E780)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_1_OFFSET UNITYSDK_OFFSET(0x18240660)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_2_OFFSET UNITYSDK_OFFSET(0x18240710)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x1823EAC0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x1823EAE0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0x1823EAD0)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_1_OFFSET UNITYSDK_OFFSET(0x18240360)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_2_OFFSET UNITYSDK_OFFSET(0x18240410)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_3_OFFSET UNITYSDK_OFFSET(0x182404E0)
#define UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_OFFSET UNITYSDK_OFFSET(0x1823EAB0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1823EA90)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_2_OFFSET UNITYSDK_OFFSET(0x182405A0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_3_OFFSET UNITYSDK_OFFSET(0x18240600)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0x1823EA80)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1823F850)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET UNITYSDK_OFFSET(0x1823F7B0)
#define UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET UNITYSDK_OFFSET(0x1823E8D0)
#define UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1823EA70)
#define UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET UNITYSDK_OFFSET(0x1823E8C0)
#define UNITYENGINE_TEXTURE2D_GET_ALLOWGLOBALMIPBIAS_OFFSET UNITYSDK_OFFSET(0x1823E910)
#define UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823E650)
#define UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E9B0)
#define UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E9C0)
#define UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1823E630)
#define UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823E670)
#define UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET UNITYSDK_OFFSET(0x1823E8F0)
#define UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1823E730)
#define UNITYENGINE_TEXTURE2D_GET_LARGESTMIPLIMIT_OFFSET UNITYSDK_OFFSET(0x1823E900)
#define UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823E680)
#define UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x1823E990)
#define UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E9E0)
#define UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E9D0)
#define UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E970)
#define UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823E690)
#define UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823E660)
#define UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E950)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET UNITYSDK_OFFSET(0x1823E940)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET UNITYSDK_OFFSET(0x1823E930)
#define UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x1823E640)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1823E6B0)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1823E6C0)
#define UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET UNITYSDK_OFFSET(0x1823EA00)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1823E890)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1823E880)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_1_OFFSET UNITYSDK_OFFSET(0x1823FB90)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x1823FA50)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_1_OFFSET UNITYSDK_OFFSET(0x1823EB00)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_2_OFFSET UNITYSDK_OFFSET(0x1823EB20)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET UNITYSDK_OFFSET(0x1823EAF0)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1823E850)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0x1823E840)
#define UNITYENGINE_TEXTURE2D_READPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1823FFD0)
#define UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET UNITYSDK_OFFSET(0x1823FF30)
#define UNITYENGINE_TEXTURE2D_RESIZEIMPL_OFFSET UNITYSDK_OFFSET(0x1823E750)
#define UNITYENGINE_TEXTURE2D_RESIZEWITHFORMATIMPL_OFFSET UNITYSDK_OFFSET(0x1823E830)
#define UNITYENGINE_TEXTURE2D_RESIZE_1_OFFSET UNITYSDK_OFFSET(0x1823FEB0)
#define UNITYENGINE_TEXTURE2D_RESIZE_OFFSET UNITYSDK_OFFSET(0x1823FE30)
#define UNITYENGINE_TEXTURE2D_SETALLPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x1823EA50)
#define UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET UNITYSDK_OFFSET(0x1823EA30)
#define UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x1823EA60)
#define UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET UNITYSDK_OFFSET(0x1823EA40)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0x1823E8A0)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1823E8B0)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1823E770)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0x1823E760)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_1_OFFSET UNITYSDK_OFFSET(0x18240260)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_2_OFFSET UNITYSDK_OFFSET(0x18240280)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_3_OFFSET UNITYSDK_OFFSET(0x182402C0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_OFFSET UNITYSDK_OFFSET(0x18240240)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_1_OFFSET UNITYSDK_OFFSET(0x18240310)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_2_OFFSET UNITYSDK_OFFSET(0x18240320)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_3_OFFSET UNITYSDK_OFFSET(0x18240330)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0x18240300)
#define UNITYENGINE_TEXTURE2D_SETPIXELSIMPLNATIVE_OFFSET UNITYSDK_OFFSET(0x1823E870)
#define UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0x1823E860)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_1_OFFSET UNITYSDK_OFFSET(0x1823F350)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_2_OFFSET UNITYSDK_OFFSET(0x1823F410)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_3_OFFSET UNITYSDK_OFFSET(0x1823F4E0)
#define UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_OFFSET UNITYSDK_OFFSET(0x1823F290)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_1_OFFSET UNITYSDK_OFFSET(0x1823F610)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_2_OFFSET UNITYSDK_OFFSET(0x1823F690)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_3_OFFSET UNITYSDK_OFFSET(0x1823F730)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0x1823F590)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1823F1F0)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0x1823F180)
#define UNITYENGINE_TEXTURE2D_SET_ALLOWGLOBALMIPBIAS_OFFSET UNITYSDK_OFFSET(0x1823E920)
#define UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0x1823E9A0)
#define UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E980)
#define UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0x1823E960)
#define UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1823EA20)
#define UNITYENGINE_TEXTURE2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1823EBF0)
#define UNITYENGINE_TEXTURE2D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1823ECC0)
#define UNITYENGINE_TEXTURE2D__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1823ED90)
#define UNITYENGINE_TEXTURE2D__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1823EE40)
#define UNITYENGINE_TEXTURE2D__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1823EF30)
#define UNITYENGINE_TEXTURE2D__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1823EF60)
#define UNITYENGINE_TEXTURE2D__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1823EFA0)
#define UNITYENGINE_TEXTURE2D__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1823EFE0)
#define UNITYENGINE_TEXTURE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1823EB40)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2D_TypeDefinitionIndex = 3983;

	class Texture2D : public ::UnityEngine::Texture
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::Int32 mipCount, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_OFFSET))(this, width, height, format, flags, mipCount, nativeTex);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_1_OFFSET))(this, width, height, format, flags);
		}

		::System::Void _ctor_2(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_2_OFFSET))(this, width, height, format, flags);
		}

		::System::Void _ctor_3(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::UnityEngine::Experimental::Rendering::TextureCreationFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_3_OFFSET))(this, width, height, format, mipCount, flags);
		}

		::System::Void _ctor_4(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::Boolean linear, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_4_OFFSET))(this, width, height, textureFormat, mipCount, linear, nativeTex);
		}

		::System::Void _ctor_5(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Int32 mipCount, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_5_OFFSET))(this, width, height, textureFormat, mipCount, linear);
		}

		::System::Void _ctor_6(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain, ::System::Boolean linear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_6_OFFSET))(this, width, height, textureFormat, mipChain, linear);
		}

		::System::Void _ctor_7(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipChain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_7_OFFSET))(this, width, height, textureFormat, mipChain);
		}

		::System::Void _ctor_8(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D__CTOR_8_OFFSET))(this, width, height);
		}

		::UnityEngine::TextureFormat get_format()
		{
			return ((::UnityEngine::TextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET))(this);
		}

		static ::UnityEngine::Texture2D* get_whiteTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_blackTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_redTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_grayTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_linearGrayTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* get_normalTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET))();
		}

		::System::Void Compress(::System::Boolean highQuality)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET))(this, highQuality);
		}

		static ::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2D* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET))(mono, w, h, mipCount, format, flags, nativeTex);
		}

		static ::System::Void Internal_Create(::UnityEngine::Texture2D* mono, ::System::Int32 w, ::System::Int32 h, ::System::Int32 mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET))(mono, w, h, mipCount, format, flags, nativeTex);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Void ApplyImpl(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Boolean ResizeImpl(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZEIMPL_OFFSET))(this, width, height);
		}

		::System::Void SetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET))(this, image, x, y, color);
		}

		::UnityEngine::Color GetPixelImpl(::System::Int32 image, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET))(this, image, x, y);
		}

		::UnityEngine::Color GetPixelBilinearImpl(::System::Int32 image, ::System::Single u, ::System::Single v)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET))(this, image, u, v);
		}

		::System::Boolean ResizeWithFormatImpl(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::System::Boolean hasMipMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZEWITHFORMATIMPL_OFFSET))(this, width, height, format, hasMipMap);
		}

		::System::Void ReadPixelsImpl(::UnityEngine::Rect source, ::System::Int32 destX, ::System::Int32 destY, ::System::Boolean recalculateMipMaps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET))(this, source, destX, destY, recalculateMipMaps);
		}

		::System::Void SetPixelsImpl(::System::Int32 x, ::System::Int32 y, ::System::Int32 w, ::System::Int32 h, ::Il2CppArray<::UnityEngine::Color>* pixel, ::System::Int32 miplevel, ::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET))(this, x, y, w, h, pixel, miplevel, frame);
		}

		::System::Void SetPixelsImplNative(::System::Int32 x, ::System::Int32 y, ::System::Int32 w, ::System::Int32 h, ::System::IntPtr data, ::System::Int32 elementCount, ::System::Int32 miplevel, ::System::Int32 frame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSIMPLNATIVE_OFFSET))(this, x, y, w, h, data, elementCount, miplevel, frame);
		}

		::System::Boolean LoadRawTextureDataImpl(::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET))(this, data, size);
		}

		::System::Boolean LoadRawTextureDataImplArray(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET))(this, data);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* data, ::System::Int32 mipLevel, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET))(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::Boolean SetPixelDataImpl(::System::IntPtr data, ::System::Int32 mipLevel, ::System::Int32 elementSize, ::System::Int32 dataArraySize, ::System::Int32 sourceDataStartIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET))(this, data, mipLevel, elementSize, dataArraySize, sourceDataStartIndex);
		}

		::System::IntPtr GetWritableImageData(::System::Int32 frame)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET))(this, frame);
		}

		::System::Int64 GetRawImageDataSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET))(this);
		}

		static ::System::Void GenerateAtlasImpl(::Il2CppArray<::UnityEngine::Vector2>* sizes, ::System::Int32 padding, ::System::Int32 atlasSize, ::Il2CppArray<::UnityEngine::Rect>* rect)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET))(sizes, padding, atlasSize, rect);
		}

		::System::Boolean get_isPreProcessed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET))(this);
		}

		::System::Int32 get_largestMipLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LARGESTMIPLIMIT_OFFSET))(this);
		}

		::System::Boolean get_allowGlobalMipBias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ALLOWGLOBALMIPBIAS_OFFSET))(this);
		}

		::System::Void set_allowGlobalMipBias(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_ALLOWGLOBALMIPBIAS_OFFSET))(this, value);
		}

		::System::Boolean get_streamingMipmaps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET))(this);
		}

		::System::Int32 get_streamingMipmapsPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_requestedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_requestedMipmapLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET))(this, value);
		}

		::System::Int32 get_minimumMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void set_minimumMipmapLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_loadAllMips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET))(this);
		}

		::System::Void set_loadAllMips(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET))(this, value);
		}

		::System::Int32 get_calculatedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_desiredMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadingMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Int32 get_loadedMipmapLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void ClearRequestedMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Boolean IsRequestedMipmapLevelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET))(this);
		}

		::System::Void ClearMinimumMipmapLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET))(this);
		}

		::System::Void UpdateExternalTexture(::System::IntPtr nativeTex)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET))(this, nativeTex);
		}

		::System::Void SetAllPixels32(::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetBlockOfPixels32(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::System::Void SetAllPixels32Native(::System::IntPtr data, ::System::Int32 elementCount, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETALLPIXELS32NATIVE_OFFSET))(this, data, elementCount, miplevel);
		}

		::System::Void SetBlockOfPixels32Native(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::System::IntPtr data, ::System::Int32 elementCount, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32NATIVE_OFFSET))(this, x, y, blockWidth, blockHeight, data, elementCount, miplevel);
		}

		::Il2CppArray<::System::Byte>* GetRawTextureData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(this, x, y, blockWidth, blockHeight, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_1_OFFSET))(this, x, y, blockWidth, blockHeight);
		}

		::System::Boolean GetPixelsNative(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::System::Int32 miplevel, ::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_OFFSET))(this, x, y, blockWidth, blockHeight, miplevel, data, size);
		}

		::System::Boolean GetPixels32Native(::System::Int32 miplevel, ::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_OFFSET))(this, miplevel, data, size);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32(::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET))(this, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color32>* GetPixels32_1()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_1_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures(::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::System::Int32 padding, ::System::Int32 maximumAtlasSize, ::System::Boolean makeNoLongerReadable)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET))(this, textures, padding, maximumAtlasSize, makeNoLongerReadable);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures_1(::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::System::Int32 padding, ::System::Int32 maximumAtlasSize)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_1_OFFSET))(this, textures, padding, maximumAtlasSize);
		}

		::Il2CppArray<::UnityEngine::Rect>* PackTextures_2(::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::System::Int32 padding)
		{
			return ((::Il2CppArray<::UnityEngine::Rect>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_2_OFFSET))(this, textures, padding);
		}

		static ::UnityEngine::Texture2D* CreateExternalTexture(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::System::Boolean mipChain, ::System::Boolean linear, ::System::IntPtr nativeTex)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET))(width, height, format, mipChain, linear, nativeTex);
		}

		::System::Void SetPixel(::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET))(this, x, y, color);
		}

		::System::Void SetPixel_1(::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color color, ::System::Int32 mipLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_1_OFFSET))(this, x, y, color, mipLevel);
		}

		::System::Void SetPixelsNative(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Unity::Collections::NativeArray_1<::UnityEngine::Color> data, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_OFFSET))(this, x, y, blockWidth, blockHeight, data, miplevel);
		}

		::System::Void SetPixelsNative_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Unity::Collections::NativeArray_1<::UnityEngine::Color> data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_1_OFFSET))(this, x, y, blockWidth, blockHeight, data);
		}

		::System::Void SetPixelsNative_2(::Unity::Collections::NativeArray_1<::UnityEngine::Color> data, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_2_OFFSET))(this, data, miplevel);
		}

		::System::Void SetPixelsNative_3(::Unity::Collections::NativeArray_1<::UnityEngine::Color> data)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSNATIVE_3_OFFSET))(this, data);
		}

		::System::Void SetPixels(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::System::Void SetPixels_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_1_OFFSET))(this, x, y, blockWidth, blockHeight, colors);
		}

		::System::Void SetPixels_2(::Il2CppArray<::UnityEngine::Color>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_2_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels_3(::Il2CppArray<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_3_OFFSET))(this, colors);
		}

		::UnityEngine::Color GetPixel(::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET))(this, x, y);
		}

		::UnityEngine::Color GetPixel_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 mipLevel)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_1_OFFSET))(this, x, y, mipLevel);
		}

		::UnityEngine::Color GetPixelBilinear(::System::Single u, ::System::Single v)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET))(this, u, v);
		}

		::UnityEngine::Color GetPixelBilinear_1(::System::Single u, ::System::Single v, ::System::Int32 mipLevel)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_1_OFFSET))(this, u, v, mipLevel);
		}

		::System::Void LoadRawTextureData(::System::IntPtr data, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET))(this, data, size);
		}

		::System::Void LoadRawTextureData_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_1_OFFSET))(this, data);
		}

		::System::Void Apply(::System::Boolean updateMipmaps, ::System::Boolean makeNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_OFFSET))(this, updateMipmaps, makeNoLongerReadable);
		}

		::System::Void Apply_1(::System::Boolean updateMipmaps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_1_OFFSET))(this, updateMipmaps);
		}

		::System::Void Apply_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_2_OFFSET))(this);
		}

		::System::Boolean Resize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_OFFSET))(this, width, height);
		}

		::System::Boolean Resize_1(::System::Int32 width, ::System::Int32 height, ::UnityEngine::TextureFormat format, ::System::Boolean hasMipMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_1_OFFSET))(this, width, height, format, hasMipMap);
		}

		::System::Void ReadPixels(::UnityEngine::Rect source, ::System::Int32 destX, ::System::Int32 destY, ::System::Boolean recalculateMipMaps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET))(this, source, destX, destY, recalculateMipMaps);
		}

		::System::Void ReadPixels_1(::UnityEngine::Rect source, ::System::Int32 destX, ::System::Int32 destY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_1_OFFSET))(this, source, destX, destY);
		}

		static ::System::Boolean GenerateAtlas(::Il2CppArray<::UnityEngine::Vector2>* sizes, ::System::Int32 padding, ::System::Int32 atlasSize, ::System::Collections::Generic::List_1<::UnityEngine::Rect>* results)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET))(sizes, padding, atlasSize, results);
		}

		::System::Void SetPixels32Native(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels32Native_1(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> colors)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_1_OFFSET))(this, colors);
		}

		::System::Void SetPixels32Native_2(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_2_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::System::Void SetPixels32Native_3(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32> colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32NATIVE_3_OFFSET))(this, x, y, blockWidth, blockHeight, colors);
		}

		::System::Void SetPixels32(::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(this, colors, miplevel);
		}

		::System::Void SetPixels32_1(::Il2CppArray<::UnityEngine::Color32>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_1_OFFSET))(this, colors);
		}

		::System::Void SetPixels32_2(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color32>* colors, ::System::Int32 miplevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_2_OFFSET))(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		::System::Void SetPixels32_3(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::Il2CppArray<::UnityEngine::Color32>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_3_OFFSET))(this, x, y, blockWidth, blockHeight, colors);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetPixelsNative_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 blockWidth, ::System::Int32 blockHeight, ::System::Int32 miplevel)
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_1_OFFSET))(this, x, y, blockWidth, blockHeight, miplevel);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetPixelsNative_2(::System::Int32 miplevel)
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_2_OFFSET))(this, miplevel);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color> GetPixelsNative_3()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELSNATIVE_3_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_2(::System::Int32 miplevel)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_2_OFFSET))(this, miplevel);
		}

		::Il2CppArray<::UnityEngine::Color>* GetPixels_3()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_3_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color32> GetPixels32Native_1(::System::Int32 miplevel)
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_1_OFFSET))(this, miplevel);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Color32> GetPixels32Native_2()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Color32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32NATIVE_2_OFFSET))(this);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, color);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 image, ::System::Int32 x, ::System::Int32 y, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET))(this, image, x, y, ret);
		}

		::System::Void GetPixelBilinearImpl_Injected(::System::Int32 image, ::System::Single u, ::System::Single v, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET))(this, image, u, v, ret);
		}

		::System::Void ReadPixelsImpl_Injected(::UnityEngine::Rect& source, ::System::Int32 destX, ::System::Int32 destY, ::System::Boolean recalculateMipMaps)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET))(this, source, destX, destY, recalculateMipMaps);
		}
	};
}
