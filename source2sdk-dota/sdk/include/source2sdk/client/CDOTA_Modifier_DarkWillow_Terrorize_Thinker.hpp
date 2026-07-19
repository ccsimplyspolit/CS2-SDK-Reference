#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x1a58            
            float destination_travel_speed; // 0x1a5c            
            float return_travel_speed; // 0x1a60            
            float destination_radius; // 0x1a64            
            float impact_damage; // 0x1a68            
            float destination_status_duration; // 0x1a6c            
            float initial_delay; // 0x1a70            
            float starting_height; // 0x1a74            
            VectorWS m_vAttackLocation; // 0x1a78            
            bool m_bAttacking; // 0x1a84            
            bool m_bReturning; // 0x1a85            
            uint8_t _pad1a86[0x2]; // 0x1a86
            float m_fCurHeight; // 0x1a88            
            float m_fEstimatedTravelTime; // 0x1a8c            
            float think_interval; // 0x1a90            
            bool m_bInFlight; // 0x1a94            
            uint8_t _pad1a95[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Terrorize_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_Terrorize_Thinker) == 0x1a98);
    };
};
