#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/MovementGaitId_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x50
        #pragma pack(push, 1)
        struct PathAccompanyNode_t
        {
        public:
            CUtlString m_sName; // 0x0            
            Vector m_vInitialPosition; // 0x8            
            float m_flRadius; // 0x14            
            float m_flRoll; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            source2sdk::modellib::MovementGaitId_t m_eMovementGaitOverride; // 0x20            
            VectorWS m_vWorldPosition; // 0x28            
            Vector m_vForward; // 0x34            
            Vector m_vLeft; // 0x40            
            float m_flDistToNext; // 0x4c            
            
            // Datamap fields:
            // CUtlSymbolLarge gaitOverride; // 0x7fffffff
            // CUtlSymbolLarge customGaitOverride; // 0x7fffffff
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vInitialPosition) == 0x8);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flRadius) == 0x14);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flRoll) == 0x18);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_eMovementGaitOverride) == 0x20);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vWorldPosition) == 0x28);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vForward) == 0x34);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vLeft) == 0x40);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flDistToNext) == 0x4c);
        
        static_assert(sizeof(source2sdk::server::PathAccompanyNode_t) == 0x50);
    };
};
