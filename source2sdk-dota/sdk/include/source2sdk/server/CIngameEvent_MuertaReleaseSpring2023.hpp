#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CIngameEvent_Base.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CIngameEvent_MuertaReleaseSpring2023 : public source2sdk::server::CIngameEvent_Base
        {
        public:
            bool m_bMiniGameActive; // 0x1a58            
            std::int8_t m_vecTargetAssignments[10]; // 0x1a59            
            std::uint8_t m_vecMiniGamePoints[10]; // 0x1a63            
            std::uint8_t m_vecMiniGameKills[10]; // 0x1a6d            
            uint8_t _pad1a77[0x11]; // 0x1a77
            // m_activeGravestones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_activeGravestones;
            char m_activeGravestones[0x18]; // 0x1a88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIngameEvent_MuertaReleaseSpring2023 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CIngameEvent_MuertaReleaseSpring2023) == 0x1aa0);
    };
};
