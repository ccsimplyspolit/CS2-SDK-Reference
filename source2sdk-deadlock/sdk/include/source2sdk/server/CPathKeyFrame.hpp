#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x500
        // Has VTable
        #pragma pack(push, 1)
        class CPathKeyFrame : public source2sdk::server::CLogicalEntity
        {
        public:
            Vector m_Origin; // 0x4a0            
            QAngle m_Angles; // 0x4ac            
            uint8_t _pad04b8[0x8]; // 0x4b8
            Quaternion m_qAngle; // 0x4c0            
            CUtlSymbolLarge m_iNextKey; // 0x4d0            
            float m_flNextTime; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            // metadata: MClassPtr
            source2sdk::server::CPathKeyFrame* m_pNextKey; // 0x4e0            
            // metadata: MClassPtr
            source2sdk::server::CPathKeyFrame* m_pPrevKey; // 0x4e8            
            float m_flMoveSpeed; // 0x4f0            
            uint8_t _pad04f4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathKeyFrame) == 0x500);
    };
};
