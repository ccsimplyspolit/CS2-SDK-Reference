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
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTAAppCheers : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x96]; // 0x498
            std::int16_t m_nRadiantCheers; // 0x52e            
            std::int16_t m_nRadiantBronzeCheers; // 0x530            
            std::int16_t m_nRadiantSilverCheers; // 0x532            
            std::int16_t m_nRadiantGoldCheers; // 0x534            
            uint8_t _pad0536[0x2]; // 0x536
            source2sdk::client::ECrowdLevel m_nRadiantCrowdLevel; // 0x538            
            std::int16_t m_nDireCheers; // 0x53c            
            std::int16_t m_nDireBronzeCheers; // 0x53e            
            std::int16_t m_nDireSilverCheers; // 0x540            
            std::int16_t m_nDireGoldCheers; // 0x542            
            source2sdk::client::ECrowdLevel m_nDireCrowdLevel; // 0x544            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAAppCheers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAAppCheers) == 0x548);
    };
};
