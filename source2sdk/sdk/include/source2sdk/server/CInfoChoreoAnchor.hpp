#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CInfoChoreoAnchorPosition.hpp"
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
        // Size: 0x4d8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoChoreoAnchor : public source2sdk::server::CPointEntity
        {
        public:
            // m_vecTargetEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CInfoChoreoAnchorPosition> m_vecTargetEntries;
            char m_vecTargetEntries[0x18]; // 0x4a8            
            // m_vecTargetWarps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CInfoChoreoAnchorPosition> m_vecTargetWarps;
            char m_vecTargetWarps[0x18]; // 0x4c0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoChoreoAnchor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoChoreoAnchor) == 0x4d8);
    };
};
