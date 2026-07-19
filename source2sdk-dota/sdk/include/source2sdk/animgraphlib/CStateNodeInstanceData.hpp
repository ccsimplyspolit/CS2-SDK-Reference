#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4c
        // Has Trivial Destructor
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStateNodeInstanceData
        {
        public:
            // m_stateWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CRelativeArray<float> m_stateWeights;
            char m_stateWeights[0x8]; // 0x0            
            Vector m_vTransitionVelocityDeltaWS; // 0x8            
            uint8_t _pad0014[0xc]; // 0x14
            // m_currentStateStartTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_currentStateStartTime;
            char m_currentStateStartTime[0xc]; // 0x20            
            uint8_t _pad002c[0x10]; // 0x2c
            // m_resetCount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint8_t> m_resetCount;
            char m_resetCount[0xc]; // 0x3c            
            uint8_t _pad0048[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeInstanceData, m_stateWeights) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeInstanceData, m_vTransitionVelocityDeltaWS) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeInstanceData, m_currentStateStartTime) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::CStateNodeInstanceData, m_resetCount) == 0x3c);
        
        static_assert(sizeof(source2sdk::animgraphlib::CStateNodeInstanceData) == 0x4c);
    };
};
