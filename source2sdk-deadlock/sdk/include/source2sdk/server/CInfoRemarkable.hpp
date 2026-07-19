#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x4b0
        // Has VTable
        #pragma pack(push, 1)
        class CInfoRemarkable : public source2sdk::server::CPointEntity
        {
        public:
            // metadata: MNotSaved
            std::int32_t m_iTimesRemarkedUpon; // 0x4a0            
            uint8_t _pad04a4[0x4]; // 0x4a4
            CUtlSymbolLarge m_szRemarkContext; // 0x4a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoRemarkable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoRemarkable) == 0x4b0);
    };
};
