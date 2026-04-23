#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_IO_PATH_CANONICALIZEPATH_OFFSET UNITYSDK_OFFSET(0x194F7AE0)
#define SYSTEM_IO_PATH_CHANGEEXTENSION_OFFSET UNITYSDK_OFFSET(0x194F62B0)
#define SYSTEM_IO_PATH_CHECKINVALIDPATHCHARS_OFFSET UNITYSDK_OFFSET(0x194F9090)
#define SYSTEM_IO_PATH_CHECKSEARCHPATTERN_OFFSET UNITYSDK_OFFSET(0x194F8F80)
#define SYSTEM_IO_PATH_CLEANPATH_OFFSET UNITYSDK_OFFSET(0x194F6750)
#define SYSTEM_IO_PATH_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x194F8860)
#define SYSTEM_IO_PATH_COMBINE_2_OFFSET UNITYSDK_OFFSET(0x194F8B10)
#define SYSTEM_IO_PATH_COMBINE_3_OFFSET UNITYSDK_OFFSET(0x194F8C40)
#define SYSTEM_IO_PATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x194F6470)
#define SYSTEM_IO_PATH_FINDEXTENSION_OFFSET UNITYSDK_OFFSET(0x194F6410)
#define SYSTEM_IO_PATH_GETDIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x194ED450)
#define SYSTEM_IO_PATH_GETEXTENSION_OFFSET UNITYSDK_OFFSET(0x194F6E20)
#define SYSTEM_IO_PATH_GETFILENAMEWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x194F6F20)
#define SYSTEM_IO_PATH_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x194F15A0)
#define SYSTEM_IO_PATH_GETFULLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x194F2540)
#define SYSTEM_IO_PATH_GETFULLPATHNAME_1_OFFSET UNITYSDK_OFFSET(0x194F7210)
#define SYSTEM_IO_PATH_GETFULLPATHNAME_OFFSET UNITYSDK_OFFSET(0x194F6F40)
#define SYSTEM_IO_PATH_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x194ED700)
#define SYSTEM_IO_PATH_GETINVALIDPATHCHARS_OFFSET UNITYSDK_OFFSET(0x194F8220)
#define SYSTEM_IO_PATH_GETPATHROOT_OFFSET UNITYSDK_OFFSET(0x194F6B80)
#define SYSTEM_IO_PATH_GETRANDOMFILENAME_OFFSET UNITYSDK_OFFSET(0x194F8290)
#define SYSTEM_IO_PATH_GETSERVERANDSHARE_OFFSET UNITYSDK_OFFSET(0x194F8610)
#define SYSTEM_IO_PATH_GETTEMPPATH_OFFSET UNITYSDK_OFFSET(0x194F8160)
#define SYSTEM_IO_PATH_GET_DIRECTORYSEPARATORCHARASSTRING_OFFSET UNITYSDK_OFFSET(0x194F8F60)
#define SYSTEM_IO_PATH_GET_TEMP_PATH_OFFSET UNITYSDK_OFFSET(0x194F8210)
#define SYSTEM_IO_PATH_GET_TRIMENDCHARS_OFFSET UNITYSDK_OFFSET(0x194F8F70)
#define SYSTEM_IO_PATH_INSECUREGETFULLPATH_OFFSET UNITYSDK_OFFSET(0x194ECF70)
#define SYSTEM_IO_PATH_INTERNALCOMBINE_OFFSET UNITYSDK_OFFSET(0x194F9160)
#define SYSTEM_IO_PATH_ISDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x194F7AC0)
#define SYSTEM_IO_PATH_ISPATHROOTED_OFFSET UNITYSDK_OFFSET(0x194F6670)
#define SYSTEM_IO_PATH_SAMEROOT_OFFSET UNITYSDK_OFFSET(0x194F8730)
#define SYSTEM_IO_PATH_VALIDATE_1_OFFSET UNITYSDK_OFFSET(0x194F8E10)
#define SYSTEM_IO_PATH_VALIDATE_OFFSET UNITYSDK_OFFSET(0x194F8E00)
#define SYSTEM_IO_PATH_WINDOWSDRIVEADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x194F78F0)
#define SYSTEM_IO_PATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x194F83E0)

namespace System::IO
{
	inline static constexpr unsigned int Path_TypeDefinitionIndex = 723;

	class Path : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_trimEndCharsUnix()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1710);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidPathChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1718);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_PathSeparatorChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1720);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_trimEndCharsWindows()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1728);
		}
		static ::System::String** StaticGet_DirectorySeparatorStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1730);
		}
		static ::System::Char* StaticGet_AltDirectorySeparatorChar()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1080);
		}
		static ::System::Char* StaticGet_DirectorySeparatorChar()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1082);
		}
		static ::System::Boolean* StaticGet_dirEqualsVolume()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1084);
		}
		static ::System::Char* StaticGet_PathSeparator()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1086);
		}
		static ::System::Char* StaticGet_VolumeSeparatorChar()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Path_TypeDefinitionIndex)->GetStaticField(0x1088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH__CCTOR_OFFSET))();
		}

		static ::System::String* ChangeExtension(::System::String* path, ::System::String* extension)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CHANGEEXTENSION_OFFSET))(path, extension);
		}

		static ::System::String* Combine(::System::String* path1, ::System::String* path2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_OFFSET))(path1, path2);
		}

		static ::System::String* CleanPath(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CLEANPATH_OFFSET))(s);
		}

		static ::System::String* GetDirectoryName(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETDIRECTORYNAME_OFFSET))(path);
		}

		static ::System::String* GetExtension(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETEXTENSION_OFFSET))(path);
		}

		static ::System::String* GetFileName(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFILENAME_OFFSET))(path);
		}

		static ::System::String* GetFileNameWithoutExtension(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFILENAMEWITHOUTEXTENSION_OFFSET))(path);
		}

		static ::System::String* GetFullPath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATH_OFFSET))(path);
		}

		static ::System::String* GetFullPathInternal(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATHINTERNAL_OFFSET))(path);
		}

		static ::System::Int32 GetFullPathName(::System::String* path, ::System::Int32 numBufferChars, ::System::Text::StringBuilder* buffer, ::System::IntPtr& lpFilePartOrNull)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Text::StringBuilder*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATHNAME_OFFSET))(path, numBufferChars, buffer, lpFilePartOrNull);
		}

		static ::System::String* GetFullPathName_1(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATHNAME_1_OFFSET))(path);
		}

		static ::System::String* WindowsDriveAdjustment(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_WINDOWSDRIVEADJUSTMENT_OFFSET))(path);
		}

		static ::System::String* InsecureGetFullPath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_INSECUREGETFULLPATH_OFFSET))(path);
		}

		static ::System::Boolean IsDirectorySeparator(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_ISDIRECTORYSEPARATOR_OFFSET))(c);
		}

		static ::System::String* GetPathRoot(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETPATHROOT_OFFSET))(path);
		}

		static ::System::String* GetTempPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETTEMPPATH_OFFSET))();
		}

		static ::System::String* get_temp_path()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GET_TEMP_PATH_OFFSET))();
		}

		static ::System::Boolean IsPathRooted(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_ISPATHROOTED_OFFSET))(path);
		}

		static ::Il2CppArray<::System::Char>* GetInvalidPathChars()
		{
			return ((::Il2CppArray<::System::Char>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETINVALIDPATHCHARS_OFFSET))();
		}

		static ::System::String* GetRandomFileName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETRANDOMFILENAME_OFFSET))();
		}

		static ::System::Int32 findExtension(::System::String* path)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_FINDEXTENSION_OFFSET))(path);
		}

		static ::System::String* GetServerAndShare(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETSERVERANDSHARE_OFFSET))(path);
		}

		static ::System::Boolean SameRoot(::System::String* root, ::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_SAMEROOT_OFFSET))(root, path);
		}

		static ::System::String* CanonicalizePath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CANONICALIZEPATH_OFFSET))(path);
		}

		static ::System::String* Combine_1(::Il2CppArray<::System::String*>* paths)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_1_OFFSET))(paths);
		}

		static ::System::String* Combine_2(::System::String* path1, ::System::String* path2, ::System::String* path3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_2_OFFSET))(path1, path2, path3);
		}

		static ::System::String* Combine_3(::System::String* path1, ::System::String* path2, ::System::String* path3, ::System::String* path4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_3_OFFSET))(path1, path2, path3, path4);
		}

		static ::System::Void Validate(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_VALIDATE_OFFSET))(path);
		}

		static ::System::Void Validate_1(::System::String* path, ::System::String* parameterName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_VALIDATE_1_OFFSET))(path, parameterName);
		}

		static ::System::String* get_DirectorySeparatorCharAsString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GET_DIRECTORYSEPARATORCHARASSTRING_OFFSET))();
		}

		static ::Il2CppArray<::System::Char>* get_TrimEndChars()
		{
			return ((::Il2CppArray<::System::Char>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GET_TRIMENDCHARS_OFFSET))();
		}

		static ::System::Void CheckSearchPattern(::System::String* searchPattern)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CHECKSEARCHPATTERN_OFFSET))(searchPattern);
		}

		static ::System::Void CheckInvalidPathChars(::System::String* path, ::System::Boolean checkAdditional)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CHECKINVALIDPATHCHARS_OFFSET))(path, checkAdditional);
		}

		static ::System::String* InternalCombine(::System::String* path1, ::System::String* path2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_INTERNALCOMBINE_OFFSET))(path1, path2);
		}
	};
}
