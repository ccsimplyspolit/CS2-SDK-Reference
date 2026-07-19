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
        // Size: 0x5b0
        // Has VTable
        #pragma pack(push, 1)
        class CNPCMaker : public source2sdk::server::CBaseNPCMaker
        {
        public:
            CUtlSymbolLarge m_iszNPCSubClass; // 0x588            
            CUtlSymbolLarge m_iszSquadName; // 0x590            
            CUtlSymbolLarge m_iszHintGroup; // 0x598            
            CUtlSymbolLarge m_RelationshipString; // 0x5a0            
            CUtlSymbolLarge m_ChildTargetName; // 0x5a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPCMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPCMaker) == 0x5b0);
    };
};
