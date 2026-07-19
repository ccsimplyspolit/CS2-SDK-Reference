#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            std::int32_t width; // 0x1a5c            
            std::int32_t spear_damage; // 0x1a60            
            std::int32_t spear_distance_from_wall; // 0x1a64            
            float spear_attack_interval; // 0x1a68            
            bool pierces_debuff_immunity; // 0x1a6c            
            uint8_t _pad1a6d[0x33]; // 0x1a6d
            std::int32_t m_hObstruction; // 0x1aa0            
            uint8_t _pad1aa4[0x4]; // 0x1aa4
            // m_vecAvoidLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vecAvoidLocations;
            char m_vecAvoidLocations[0x18]; // 0x1aa8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_ArenaOfBlood) == 0x1ac0);
    };
};
