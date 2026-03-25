#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAccess.h"
#include "unitysdk/System/IO/FileMode.h"
#include "unitysdk/System/IO/HandleInheritability.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileAccess.h"
#include "unitysdk/System/IO/MemoryMappedFiles/MemoryMappedFileOptions.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeMemoryMappedFileHandle; }
namespace System { class String; }
namespace System::IO { class FileStream; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFileSecurity; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewStream; }

#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CORESHMCREATE_OFFSET UNITYSDK_OFFSET(0x1849B790)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1849B590)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_OFFSET UNITYSDK_OFFSET(0x1849B3F0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_1_OFFSET UNITYSDK_OFFSET(0x1849B910)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_OFFSET UNITYSDK_OFFSET(0x1849B8F0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_1_OFFSET UNITYSDK_OFFSET(0x1849BC40)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_2_OFFSET UNITYSDK_OFFSET(0x1849BCC0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_OFFSET UNITYSDK_OFFSET(0x1849BBC0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWSTREAM_OFFSET UNITYSDK_OFFSET(0x1849B930)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1849BDF0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1849BDD0)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_GETFILEACCESS_OFFSET UNITYSDK_OFFSET(0x1849BE80)
#define SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1849B580)

namespace System::IO::MemoryMappedFiles
{
	inline static constexpr unsigned int MemoryMappedFile_TypeDefinitionIndex = 3114;

	class MemoryMappedFile : public ::System::Object
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeMemoryMappedFileHandle* handle; // 0x10
		::System::IO::FileStream* stream; // 0x18
		::System::Boolean keepOpen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE__CTOR_OFFSET))(this);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateFromFile(::System::String* path, ::System::IO::FileMode mode)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_OFFSET))(path, mode);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateFromFile_1(::System::String* path, ::System::IO::FileMode mode, ::System::String* mapName, ::System::Int64 capacity, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::IO::FileMode, ::System::String*, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEFROMFILE_1_OFFSET))(path, mode, mapName, capacity, access);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CoreShmCreate(::System::String* mapName, ::System::Int64 capacity, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions options, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity* memoryMappedFileSecurity, ::System::IO::HandleInheritability inheritability, ::System::IO::FileMode mode)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity*, ::System::IO::HandleInheritability, ::System::IO::FileMode))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CORESHMCREATE_OFFSET))(mapName, capacity, access, options, memoryMappedFileSecurity, inheritability, mode);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateNew(::System::String* mapName, ::System::Int64 capacity)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_OFFSET))(mapName, capacity);
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* CreateNew_1(::System::String* mapName, ::System::Int64 capacity, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions options, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity* memoryMappedFileSecurity, ::System::IO::HandleInheritability inheritability)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess, ::System::IO::MemoryMappedFiles::MemoryMappedFileOptions, ::System::IO::MemoryMappedFiles::MemoryMappedFileSecurity*, ::System::IO::HandleInheritability))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATENEW_1_OFFSET))(mapName, capacity, access, options, memoryMappedFileSecurity, inheritability);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewStream* CreateViewStream(::System::Int64 offset, ::System::Int64 size, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewStream*(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWSTREAM_OFFSET))(this, offset, size, access);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* CreateViewAccessor()
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_OFFSET))(this);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* CreateViewAccessor_1(::System::Int64 offset, ::System::Int64 size)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_1_OFFSET))(this, offset, size);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* CreateViewAccessor_2(::System::Int64 offset, ::System::Int64 size, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_CREATEVIEWACCESSOR_2_OFFSET))(this, offset, size, access);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::IO::FileAccess GetFileAccess(::System::IO::MemoryMappedFiles::MemoryMappedFileAccess access)
		{
			return ((::System::IO::FileAccess(*)(::System::IO::MemoryMappedFiles::MemoryMappedFileAccess))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYMAPPEDFILES_MEMORYMAPPEDFILE_GETFILEACCESS_OFFSET))(access);
		}
	};
}
