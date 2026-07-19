#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_RemoteMine : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t radius; // 0x1a68            
            std::int32_t damage; // 0x1a6c            
            std::int32_t radius_scepter; // 0x1a70            
            std::int32_t damage_scepter; // 0x1a74            
            std::int32_t vision_radius; // 0x1a78            
            float vision_duration; // 0x1a7c            
            std::int32_t model_scale; // 0x1a80            
            bool bExploding; // 0x1a84            
            uint8_t _pad1a85[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_RemoteMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_RemoteMine) == 0x1a88);
    };
};
