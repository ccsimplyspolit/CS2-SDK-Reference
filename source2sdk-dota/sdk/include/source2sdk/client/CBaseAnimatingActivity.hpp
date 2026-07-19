#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xac0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseAnimatingActivity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            bool m_bShouldAnimateDuringGameplayPause; // 0xa88            
            bool m_bInitiallyPopulateInterpHistory; // 0xa89            
            bool m_bAnimationUpdateScheduled; // 0xa8a            
            uint8_t _pad0a8b[0x5]; // 0xa8b
            // m_vecSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecSuppressedAnimEventTags;
            char m_vecSuppressedAnimEventTags[0x18]; // 0xa90            
            bool m_bHasAnimatedMaterialAttributes; // 0xaa8            
            uint8_t _pad0aa9[0xf]; // 0xaa9
            bool m_bSuppressAnimEventSounds; // 0xab8            
            uint8_t _pad0ab9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimatingActivity) == 0xac0);
    };
};
