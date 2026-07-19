#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/fogparams_t.hpp"

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
        // Size: 0x948
        // Has VTable
        #pragma pack(push, 1)
        class CFogTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            source2sdk::server::fogparams_t m_fog; // 0x8e0            
            
            // Datamap fields:
            // Color m_fog.colorPrimary; // 0x8f4
            // Color m_fog.colorSecondary; // 0x8f8
            // Vector m_fog.dirPrimary; // 0x8e8
            // bool m_fog.enable; // 0x944
            // bool m_fog.blend; // 0x945
            // float m_fog.start; // 0x904
            // float m_fog.end; // 0x908
            // float m_fog.farz; // 0x90c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogTrigger) == 0x948);
    };
};
