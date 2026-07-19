#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerControllerComponent.hpp"
#include "source2sdk/server/CSMatchStats_t.hpp"
#include "source2sdk/server/CSPerRoundStats_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x430
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerController_ActionTrackingServices : public source2sdk::client::CPlayerControllerComponent
        {
        public:
            // m_perRoundStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CSPerRoundStats_t> m_perRoundStats;
            char m_perRoundStats[0x88]; // 0x40            
            source2sdk::server::CSMatchStats_t m_matchStats; // 0xc8            
            std::int32_t m_iNumRoundKills; // 0x188            
            std::int32_t m_iNumRoundKillsHeadshots; // 0x18c            
            float m_flTotalRoundDamageDealt; // 0x190            
            uint8_t _pad0194[0x29c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController_ActionTrackingServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerController_ActionTrackingServices) == 0x430);
    };
};
