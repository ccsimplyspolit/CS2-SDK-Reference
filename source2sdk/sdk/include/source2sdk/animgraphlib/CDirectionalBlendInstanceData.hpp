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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x50
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDirectionalBlendInstanceData
        {
        public:
            float m_dampedValue; // 0x0            
            uint8_t _pad0004[0x10]; // 0x4
            float m_flCycle; // 0x14            
            float m_flPrevCycle; // 0x18            
            // m_flPlaybackRate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flPlaybackRate;
            char m_flPlaybackRate[0xc]; // 0x1c            
            // m_flCycleZeroTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCycleZeroTime;
            char m_flCycleZeroTime[0xc]; // 0x28            
            // m_resetCycleValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_resetCycleValue;
            char m_resetCycleValue[0xc]; // 0x34            
            // m_resetCount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_resetCount;
            char m_resetCount[0xc]; // 0x40            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_dampedValue) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_flCycle) == 0x14);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_flPrevCycle) == 0x18);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_flPlaybackRate) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_flCycleZeroTime) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_resetCycleValue) == 0x34);
        static_assert(offsetof(source2sdk::animgraphlib::CDirectionalBlendInstanceData, m_resetCount) == 0x40);
        
        static_assert(sizeof(source2sdk::animgraphlib::CDirectionalBlendInstanceData) == 0x50);
    };
};
