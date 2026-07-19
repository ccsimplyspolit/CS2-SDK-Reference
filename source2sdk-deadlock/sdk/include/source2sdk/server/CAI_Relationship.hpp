#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x4f0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Relationship : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a0[0x10]; // 0x4a0
            CUtlSymbolLarge m_iszSubject; // 0x4b0            
            CUtlSymbolLarge m_iszSubjectClass; // 0x4b8            
            source2sdk::client::Class_T m_nSubjectClassifyAs; // 0x4c0            
            uint8_t _pad04c4[0x4]; // 0x4c4
            CUtlSymbolLarge m_iszTargetClass; // 0x4c8            
            source2sdk::client::Class_T m_nTargetClassifyAs; // 0x4d0            
            std::int32_t m_iDisposition; // 0x4d4            
            std::int32_t m_iRank; // 0x4d8            
            bool m_fStartActive; // 0x4dc            
            bool m_bIsActive; // 0x4dd            
            uint8_t _pad04de[0x2]; // 0x4de
            std::int32_t m_iPreviousDisposition; // 0x4e0            
            float m_flRadius; // 0x4e4            
            std::int32_t m_iPreviousRank; // 0x4e8            
            bool m_bReciprocal; // 0x4ec            
            uint8_t _pad04ed[0x3];
            
            // Datamap fields:
            // void CAI_RelationshipApplyRelationshipThink; // 0x0
            // void InputApplyRelationship; // 0x0
            // void InputRevertRelationship; // 0x0
            // void InputRevertToDefaultRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Relationship because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Relationship) == 0x4f0);
    };
};
