#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TMP_CharacterInfo.h"
#include "unitysdk/TMPro/TMP_MeshInfo.h"

namespace TMPro { class TMP_SpriteAnimator; }
namespace TMPro { class TMP_SpriteAsset; }

#define TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x160AC170)
#define TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x160ACD60)
#define TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x160ACDC0)
#define TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x160ACD70)
#define TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160AC140)
#define TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x160AC0F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7_TypeDefinitionIndex = 40189;

	class TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7 : public ::System::Object
	{
	public:
		::TMPro::TMP_SpriteAsset* spriteAsset; // 0x10
		::TMPro::TMP_CharacterInfo _charInfo_5__3; // 0x18
		::TMPro::TMP_MeshInfo _meshInfo_5__6; // 0x190
		::System::Object* __2__current; // 0x1E0
		::TMPro::TMP_SpriteAnimator* __4__this; // 0x1E8
		::System::Int32 currentCharacter; // 0x1F0
		::System::Int32 _currentFrame_5__2; // 0x1F4
		::System::Int32 framerate; // 0x1F8
		::System::Single _baseSpriteScale_5__7; // 0x1FC
		::System::Int32 end; // 0x200
		::System::Int32 start; // 0x204
		::System::Single _targetTime_5__9; // 0x208
		::System::Single _elapsedTime_5__8; // 0x20C
		::System::Int32 __1__state; // 0x210
		::System::Int32 _materialIndex_5__4; // 0x214
		::System::Int32 _vertexIndex_5__5; // 0x218

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEANIMATOR__DOSPRITEANIMATIONINTERNAL_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
