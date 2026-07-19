#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerNeutralShield.hpp"

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
        // Size: 0x910
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerNeutralIdles : public source2sdk::server::CTriggerNeutralShield
        {
        public:
            // Datamap fields:
            // void m_vecPlayers; // 0x8e0
            // void m_vecNeutrals; // 0x8f8
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CTriggerNeutralIdles) == 0x910);
    };
};
