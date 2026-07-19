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
        // Size: 0x34
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNetworkedCycle
        {
        public:
            float m_flCycleUnclamped; // 0x0            
            float m_flPrevCycleUnclamped; // 0x4            
            uint8_t _pad0008[0x8]; // 0x8
            // m_flCyclesPerSecond has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCyclesPerSecond;
            char m_flCyclesPerSecond[0xc]; // 0x10            
            // m_flCycleZeroTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCycleZeroTime;
            char m_flCycleZeroTime[0xc]; // 0x1c            
            // m_resetCount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint8_t> m_resetCount;
            char m_resetCount[0xc]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CNetworkedCycle, m_flCycleUnclamped) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CNetworkedCycle, m_flPrevCycleUnclamped) == 0x4);
        static_assert(offsetof(source2sdk::animgraphlib::CNetworkedCycle, m_flCyclesPerSecond) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CNetworkedCycle, m_flCycleZeroTime) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::CNetworkedCycle, m_resetCount) == 0x28);
        
        static_assert(sizeof(source2sdk::animgraphlib::CNetworkedCycle) == 0x34);
    };
};
