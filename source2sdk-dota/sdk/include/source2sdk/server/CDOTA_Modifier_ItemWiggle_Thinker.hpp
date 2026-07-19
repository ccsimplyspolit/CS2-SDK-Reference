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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ItemWiggle_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vOriginalPosition; // 0x1a58            
            float m_flOriginalScale; // 0x1a64            
            source2sdk::entity2::GameTime_t m_flLastChangeTime; // 0x1a68            
            VectorWS m_vLastChangePosition; // 0x1a6c            
            float m_flLastChangeScale; // 0x1a78            
            VectorWS m_vTargetPosition; // 0x1a7c            
            float m_flTargetScale; // 0x1a88            
            bool m_bFirstThink; // 0x1a8c            
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            float m_flStartAmplitude; // 0x1a90            
            float m_flEndAmplitude; // 0x1a94            
            float m_flScaleAmplitude; // 0x1a98            
            float m_flStartFrequency; // 0x1a9c            
            float m_flEndFrequency; // 0x1aa0            
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ItemWiggle_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ItemWiggle_Thinker) == 0x1aa8);
    };
};
