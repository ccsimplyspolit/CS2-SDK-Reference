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
        // Size: 0x4b8
        // Has VTable
        #pragma pack(push, 1)
        class CLogicDistanceAutosave : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszTargetEntity; // 0x4a0            
            float m_flDistanceToPlayer; // 0x4a8            
            bool m_bForceNewLevelUnit; // 0x4ac            
            bool m_bCheckCough; // 0x4ad            
            // metadata: MNotSaved
            bool m_bThinkDangerous; // 0x4ae            
            uint8_t _pad04af[0x1]; // 0x4af
            // metadata: MNotSaved
            float m_flDangerousTime; // 0x4b0            
            uint8_t _pad04b4[0x4];
            
            // Datamap fields:
            // void InputSave; // 0x0
            // float InputSaveDangerous; // 0x0
            // void CLogicDistanceAutosaveSaveThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicDistanceAutosave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicDistanceAutosave) == 0x4b8);
    };
};
