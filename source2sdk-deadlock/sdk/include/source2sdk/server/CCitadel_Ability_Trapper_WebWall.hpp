#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1220
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecCastPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCastPositionNormal"
        // static metadata: MNetworkVarNames "Vector m_vecEndPosition"
        // static metadata: MNetworkVarNames "Vector m_vecEndPositionNormal"
        #pragma pack(push, 1)
        class CCitadel_Ability_Trapper_WebWall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x280]; // 0xf70
            // metadata: MNetworkEnable
            Vector m_vecCastPosition; // 0x11f0            
            // metadata: MNetworkEnable
            Vector m_vecCastPositionNormal; // 0x11fc            
            // metadata: MNetworkEnable
            Vector m_vecEndPosition; // 0x1208            
            // metadata: MNetworkEnable
            Vector m_vecEndPositionNormal; // 0x1214            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Trapper_WebWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Trapper_WebWall) == 0x1220);
    };
};
