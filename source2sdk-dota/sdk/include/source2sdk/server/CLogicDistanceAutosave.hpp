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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicDistanceAutosave : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszTargetEntity; // 0x498            
            float m_flDistanceToPlayer; // 0x4a0            
            bool m_bForceNewLevelUnit; // 0x4a4            
            bool m_bCheckCough; // 0x4a5            
            // metadata: MNotSaved
            bool m_bThinkDangerous; // 0x4a6            
            uint8_t _pad04a7[0x1]; // 0x4a7
            // metadata: MNotSaved
            float m_flDangerousTime; // 0x4a8            
            uint8_t _pad04ac[0x4];
            
            // Datamap fields:
            // void InputSave; // 0x0
            // float InputSaveDangerous; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicDistanceAutosave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicDistanceAutosave) == 0x4b0);
    };
};
