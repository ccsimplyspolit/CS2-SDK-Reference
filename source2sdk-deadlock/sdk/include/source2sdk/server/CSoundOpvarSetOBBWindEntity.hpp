#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"

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
        // Size: 0x588
        // Has VTable
        #pragma pack(push, 1)
        class CSoundOpvarSetOBBWindEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            Vector m_vMins; // 0x548            
            Vector m_vMaxs; // 0x554            
            Vector m_vDistanceMins; // 0x560            
            Vector m_vDistanceMaxs; // 0x56c            
            float m_flWindMin; // 0x578            
            float m_flWindMax; // 0x57c            
            float m_flWindMapMin; // 0x580            
            float m_flWindMapMax; // 0x584            
            
            // Datamap fields:
            // void CSoundOpvarSetOBBWindEntitySetOpvarThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetOBBWindEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetOBBWindEntity) == 0x588);
    };
};
