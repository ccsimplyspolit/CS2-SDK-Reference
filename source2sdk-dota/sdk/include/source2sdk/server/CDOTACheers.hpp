#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECrowdLevel.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        #pragma pack(push, 1)
        class CDOTACheers : public source2sdk::server::CBaseEntity
        {
        public:
            std::int16_t m_nRadiantCheers; // 0x498            
            std::int16_t m_nDireCheers; // 0x49a            
            std::int16_t m_nRadiantPremiumCheers; // 0x49c            
            std::int16_t m_nDirePremiumCheers; // 0x49e            
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x4a0            
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x4a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTACheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTACheers) == 0x4a8);
    };
};
