#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseNPCMaker.hpp"

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
        // Size: 0x598
        // Has VTable
        #pragma pack(push, 1)
        class CTemplateNPCMaker : public source2sdk::server::CBaseNPCMaker
        {
        public:
            CUtlSymbolLarge m_iszWorldName; // 0x588            
            CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x590            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTemplateNPCMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTemplateNPCMaker) == 0x598);
    };
};
