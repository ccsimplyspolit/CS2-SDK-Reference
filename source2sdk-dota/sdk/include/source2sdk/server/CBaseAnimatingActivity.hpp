#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x798
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseAnimatingActivity : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bShouldAnimateDuringGameplayPause; // 0x778            
            bool m_bInitiallyPopulateInterpHistory; // 0x779            
            bool m_bAnimationUpdateScheduled; // 0x77a            
            uint8_t _pad077b[0x5]; // 0x77b
            // m_vecSuppressedAnimEventTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecSuppressedAnimEventTags;
            char m_vecSuppressedAnimEventTags[0x18]; // 0x780            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimatingActivity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimatingActivity) == 0x798);
    };
};
