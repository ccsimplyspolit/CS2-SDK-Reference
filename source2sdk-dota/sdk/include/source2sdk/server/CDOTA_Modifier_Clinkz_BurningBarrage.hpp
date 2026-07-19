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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_BurningBarrage : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iArrowCount; // 0x1a58            
            VectorWS m_vOriginalTarget; // 0x1a5c            
            std::int32_t arrow_width; // 0x1a68            
            float arrow_speed; // 0x1a6c            
            float arrow_range_multiplier; // 0x1a70            
            std::int32_t wave_count; // 0x1a74            
            std::int32_t arrow_count_per_wave; // 0x1a78            
            std::int32_t arrow_angle; // 0x1a7c            
            std::int32_t m_iLoopCount; // 0x1a80            
            float m_flInterval; // 0x1a84            
            float m_flCycleDelay; // 0x1a88            
            float m_flTimeWaste; // 0x1a8c            
            source2sdk::entity2::GameTime_t m_flExpectedTime; // 0x1a90            
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_BurningBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Clinkz_BurningBarrage) == 0x1a98);
    };
};
