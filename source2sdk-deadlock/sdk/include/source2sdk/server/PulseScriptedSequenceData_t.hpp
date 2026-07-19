#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/modellib/ScriptedMoveTo_t.hpp"
#include "source2sdk/modellib/SharedMovementGait_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x38
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PulseScriptedSequenceData_t
        {
        public:
            std::int32_t m_nActorID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString m_szPreIdleSequence; // 0x8            
            CUtlString m_szEntrySequence; // 0x10            
            CUtlString m_szSequence; // 0x18            
            CUtlString m_szExitSequence; // 0x20            
            source2sdk::modellib::ScriptedMoveTo_t m_nMoveTo; // 0x28            
            source2sdk::modellib::SharedMovementGait_t m_nMoveToGait; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            source2sdk::modellib::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x30            
            bool m_bLoopPreIdleSequence; // 0x34            
            bool m_bLoopActionSequence; // 0x35            
            bool m_bLoopPostIdleSequence; // 0x36            
            bool m_bIgnoreLookAt; // 0x37            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_nActorID) == 0x0);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_szPreIdleSequence) == 0x8);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_szEntrySequence) == 0x10);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_szSequence) == 0x18);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_szExitSequence) == 0x20);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_nMoveTo) == 0x28);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_nMoveToGait) == 0x2c);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_nHeldWeaponBehavior) == 0x30);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_bLoopPreIdleSequence) == 0x34);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_bLoopActionSequence) == 0x35);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_bLoopPostIdleSequence) == 0x36);
        static_assert(offsetof(source2sdk::server::PulseScriptedSequenceData_t, m_bIgnoreLookAt) == 0x37);
        
        static_assert(sizeof(source2sdk::server::PulseScriptedSequenceData_t) == 0x38);
    };
};
