#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            float rock_damage; // 0x1a5c            
            float pull_units_per_second; // 0x1a60            
            float pull_units_per_second_heroes; // 0x1a64            
            float total_pull_distance; // 0x1a68            
            float duration; // 0x1a6c            
            bool m_bUsedStone; // 0x1a70            
            uint8_t _pad1a71[0x3]; // 0x1a71
            VectorWS m_vDestination; // 0x1a74            
            VectorWS m_vLocation; // 0x1a80            
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1a90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_GeomagneticGrip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EarthSpirit_GeomagneticGrip) == 0x1aa8);
    };
};
