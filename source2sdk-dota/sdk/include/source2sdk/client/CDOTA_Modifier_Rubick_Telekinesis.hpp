#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_Telekinesis : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1a58            
            source2sdk::entity2::GameTime_t m_fEndTime; // 0x1a5c            
            float m_fTargetHeight; // 0x1a60            
            float m_fCurHeight; // 0x1a64            
            VectorWS m_vStartLoc; // 0x1a68            
            VectorWS m_vCurLoc; // 0x1a74            
            std::int32_t max_land_distance; // 0x1a80            
            float fall_duration; // 0x1a84            
            bool m_bOverrideDuration; // 0x1a88            
            uint8_t _pad1a89[0x3]; // 0x1a89
            float m_flOverrideDuration; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Telekinesis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rubick_Telekinesis) == 0x1a90);
    };
};
