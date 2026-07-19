#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"

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
        // Size: 0x698
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class CSoundOpvarSetBoxEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            Vector m_vDistanceInnerMins; // 0x630            
            Vector m_vDistanceInnerMaxs; // 0x63c            
            Vector m_vDistanceOuterMins; // 0x648            
            Vector m_vDistanceOuterMaxs; // 0x654            
            std::int32_t m_nBoxDirection; // 0x660            
            Vector m_vInnerMins; // 0x664            
            Vector m_vInnerMaxs; // 0x670            
            Vector m_vOuterMins; // 0x67c            
            Vector m_vOuterMaxs; // 0x688            
            uint8_t _pad0694[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetBoxEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetBoxEntity) == 0x698);
    };
};
