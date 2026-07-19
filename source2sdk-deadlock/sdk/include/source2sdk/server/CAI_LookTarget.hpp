#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4b8
        // Has VTable
        #pragma pack(push, 1)
        class CAI_LookTarget : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_iContext; // 0x4a0            
            std::int32_t m_iPriority; // 0x4a4            
            bool m_bDisabled; // 0x4a8            
            uint8_t _pad04a9[0x3]; // 0x4a9
            source2sdk::entity2::GameTime_t m_flTimeNextAvailable; // 0x4ac            
            float m_flMaxDist; // 0x4b0            
            uint8_t _pad04b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_LookTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_LookTarget) == 0x4b8);
    };
};
