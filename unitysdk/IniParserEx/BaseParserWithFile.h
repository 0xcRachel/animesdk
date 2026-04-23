#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/BaseParser.h"

namespace IniParserEx { class ICodeFile; }
namespace IniParserEx { class Token; }
namespace System { class String; }

#define INIPARSEREX_BASEPARSERWITHFILE_COMPILEDECLARATION_OFFSET UNITYSDK_OFFSET(0x19CF36E0)
#define INIPARSEREX_BASEPARSERWITHFILE_GETFILELOCATION_OFFSET UNITYSDK_OFFSET(0x19CF35D0)
#define INIPARSEREX_BASEPARSERWITHFILE_PARSE_OFFSET UNITYSDK_OFFSET(0x19CF33F0)
#define INIPARSEREX_BASEPARSERWITHFILE_POSTPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x19CF35C0)
#define INIPARSEREX_BASEPARSERWITHFILE_PREPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x19CF35B0)
#define INIPARSEREX_BASEPARSERWITHFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF36F0)

namespace IniParserEx
{
	inline static constexpr unsigned int BaseParserWithFile_TypeDefinitionIndex = 3743;

	class BaseParserWithFile : public ::IniParserEx::BaseParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE__CTOR_OFFSET))(this);
		}

		::System::Void Parse(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_PARSE_OFFSET))(this, file);
		}

		::System::Void PreParserProcess(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_PREPARSERPROCESS_OFFSET))(this, file);
		}

		::System::Void PostParserProcess(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_POSTPARSERPROCESS_OFFSET))(this, file);
		}

		::System::String* GetFileLocation(::IniParserEx::ICodeFile* file)
		{
			return ((::System::String*(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_GETFILELOCATION_OFFSET))(this, file);
		}

		::System::Boolean CompileDeclaration(::IniParserEx::ICodeFile* file, ::IniParserEx::Token* token)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_COMPILEDECLARATION_OFFSET))(this, file, token);
		}
	};
}
