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
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPathKeyFrame : public source2sdk::server::CLogicalEntity
        {
        public:
            Vector m_Origin; // 0x498            
            QAngle m_Angles; // 0x4a4            
            Quaternion m_qAngle; // 0x4b0            
            CUtlSymbolLarge m_iNextKey; // 0x4c0            
            float m_flNextTime; // 0x4c8            
            // m_pNextKey has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathKeyFrame> m_pNextKey;
            char m_pNextKey[0x4]; // 0x4cc            
            // m_pPrevKey has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathKeyFrame> m_pPrevKey;
            char m_pPrevKey[0x4]; // 0x4d0            
            float m_flMoveSpeed; // 0x4d4            
            uint8_t _pad04d8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathKeyFrame) == 0x4e0);
    };
};
