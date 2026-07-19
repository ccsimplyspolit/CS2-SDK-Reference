#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shadow_Demon_Purge_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bCasterIsEnemy; // 0x1a58            
            bool m_bCasterIsParent; // 0x1a59            
            bool apply_poison_stacks; // 0x1a5a            
            uint8_t _pad1a5b[0x1]; // 0x1a5b
            std::int32_t m_nPoisonStacksToApply; // 0x1a5c            
            source2sdk::entity2::GameTime_t m_NextPoisonStackTime; // 0x1a60            
            uint8_t _pad1a64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shadow_Demon_Purge_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shadow_Demon_Purge_Slow) == 0x1a68);
    };
};
