#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModelEntity.hpp"

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
        // Size: 0x9b8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkVarNames "bool m_bAllowRotatingUp"
        // static metadata: MNetworkVarNames "bool m_bFixedPosition"
        // static metadata: MNetworkVarNames "float m_flShieldOffset"
        #pragma pack(push, 1)
        class C_Citadel_Shield : public source2sdk::client::CCitadelModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bAllowRotatingUp; // 0x9b0            
            // metadata: MNetworkEnable
            bool m_bFixedPosition; // 0x9b1            
            uint8_t _pad09b2[0x2]; // 0x9b2
            // metadata: MNetworkEnable
            float m_flShieldOffset; // 0x9b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Shield) == 0x9b8);
    };
};
