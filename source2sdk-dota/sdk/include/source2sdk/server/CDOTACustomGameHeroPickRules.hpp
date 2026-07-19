#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseCustomHeroPickRules.hpp"

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
        // Size: 0x4a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTACustomGameHeroPickRules : public source2sdk::server::CDOTABaseCustomHeroPickRules
        {
        public:
            source2sdk::client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x498            
            std::int32_t m_nNumBansPerTeam; // 0x49c            
            source2sdk::entity2::GameTime_t m_flEnterTime; // 0x4a0            
            std::int32_t m_nNumHeroesPicked; // 0x4a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACustomGameHeroPickRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTACustomGameHeroPickRules) == 0x4a8);
    };
};
