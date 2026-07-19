#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelRegenComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastRegenThinkTime; // 0x10            
            float m_flRegenAccumulator; // 0x14            
            uint8_t _pad0018[0x148];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelRegenComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelRegenComponent) == 0x160);
    };
};
