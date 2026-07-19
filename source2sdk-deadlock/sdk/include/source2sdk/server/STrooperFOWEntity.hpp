#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CEntityIndex m_nEntIndex"
        // static metadata: MNetworkVarNames "int8 m_nTeam"
        // static metadata: MNetworkVarNames "uint16 m_nPositionXY"
        #pragma pack(push, 1)
        class STrooperFOWEntity
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            CEntityIndex m_nEntIndex; // 0x30            
            // metadata: MNetworkEnable
            std::int8_t m_nTeam; // 0x34            
            uint8_t _pad0035[0x1]; // 0x35
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnFieldXYChanged"
            std::uint16_t m_nPositionXY; // 0x36            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::STrooperFOWEntity, m_nEntIndex) == 0x30);
        static_assert(offsetof(source2sdk::server::STrooperFOWEntity, m_nTeam) == 0x34);
        static_assert(offsetof(source2sdk::server::STrooperFOWEntity, m_nPositionXY) == 0x36);
        
        static_assert(sizeof(source2sdk::server::STrooperFOWEntity) == 0x38);
    };
};
