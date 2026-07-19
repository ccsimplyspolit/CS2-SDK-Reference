#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x6e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Marci_Companion_Run : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_nTrackingProjectileID; // 0x6a8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x6ac            
            std::int32_t m_nMaxJumpDistance; // 0x6b0            
            float landing_radius; // 0x6b4            
            std::int32_t move_speed; // 0x6b8            
            float ally_buff_duration; // 0x6bc            
            std::int32_t min_jump_distance; // 0x6c0            
            std::int32_t max_jump_distance; // 0x6c4            
            std::int32_t impact_position_offset; // 0x6c8            
            std::int32_t vector_preview_radius; // 0x6cc            
            VectorWS m_vEndpoint; // 0x6d0            
            source2sdk::client::ParticleIndex_t m_nToBounceFXIndex; // 0x6dc            
            source2sdk::client::ParticleIndex_t m_nToTargetFXIndex; // 0x6e0            
            bool m_bIsAltCastState; // 0x6e4            
            uint8_t _pad06e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Marci_Companion_Run because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Marci_Companion_Run) == 0x6e8);
    };
};
