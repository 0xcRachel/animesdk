#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B052D8983672B34;
class Class_1_BCC22A53597699D4;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicDirectorConfig; }
namespace RPG::GameCore { class FiveDimMusicInfo; }

#define CLASS_1_6365090DC62D5BA5_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1621AF60)
#define CLASS_1_6365090DC62D5BA5_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1621AB90)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_1AFD9C3F67DB7B8B_OFFSET UNITYSDK_OFFSET(0x1621AFF0)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x1621ACE0)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_264E97A7B917FDEA_OFFSET UNITYSDK_OFFSET(0x1621B1A0)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_3BE79DA7B8F4B903_OFFSET UNITYSDK_OFFSET(0x1621B460)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_62D190D6C85A1CF9_OFFSET UNITYSDK_OFFSET(0x1621B820)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_7A62C3674E4FEDE4_OFFSET UNITYSDK_OFFSET(0x1621B720)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x1621B540)
#define CLASS_1_6365090DC62D5BA5_METHOD_1_F3B14DDBFB5CA9FD_OFFSET UNITYSDK_OFFSET(0x1621AC00)
#define CLASS_1_6365090DC62D5BA5_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1621ABA0)
#define CLASS_1_6365090DC62D5BA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1621ABB0)

inline static constexpr unsigned int Class_1_6365090DC62D5BA5_TypeDefinitionIndex = 32718;

class Class_1_6365090DC62D5BA5 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_0B052D8983672B34*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_BCC22A53597699D4*>* Field_1_1; // 0x18
	::System::Single _Length_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_Length()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_GET_LENGTH_OFFSET))(this);
	}

	::System::Void set_Length(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_SET_LENGTH_OFFSET))(this, value);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_FINALIZE_OFFSET))(this);
	}

	::Class_1_BCC22A53597699D4* Method_1_1AFD9C3F67DB7B8B(::System::Double a1, ::System::Double a2)
	{
		return ((::Class_1_BCC22A53597699D4*(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_1AFD9C3F67DB7B8B_OFFSET))(this, a1, a2);
	}

	::RPG::PoolList_1<::Class_1_0B052D8983672B34*>* Method_1_264E97A7B917FDEA(::System::Int32 a1, ::System::Single a2)
	{
		return ((::RPG::PoolList_1<::Class_1_0B052D8983672B34*>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_264E97A7B917FDEA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3BE79DA7B8F4B903(::System::Int32 a1, ::System::Double a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_3BE79DA7B8F4B903_OFFSET))(this, a1, a2);
	}

	::Class_1_0B052D8983672B34* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_0B052D8983672B34*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3B14DDBFB5CA9FD(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_F3B14DDBFB5CA9FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A62C3674E4FEDE4(::RPG::GameCore::FiveDimMusicInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_7A62C3674E4FEDE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_62D190D6C85A1CF9(::RPG::GameCore::FiveDimMusicCueInfo* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicCueInfo*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_62D190D6C85A1CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6365090DC62D5BA5_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
