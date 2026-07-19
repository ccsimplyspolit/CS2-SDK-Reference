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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_speed; // 0x1a58            
            float agility_duration; // 0x1a5c            
            bool m_bGiveAgility; // 0x1a60            
            uint8_t _pad1a61[0x3]; // 0x1a61
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a64            
            std::int32_t bonus_agility; // 0x1a68            
            float illusion_spawn_radius; // 0x1a6c            
            float illusion_spawn_travel_distance; // 0x1a70            
            float evasion; // 0x1a74            
            float m_flDistanceAccumulator; // 0x1a78            
            VectorWS m_vPreviousLocation; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost) == 0x1a88);
    };
};
