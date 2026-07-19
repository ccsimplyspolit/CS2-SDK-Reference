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
        // Size: 0x1c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStateMachineInstanceData
        {
        public:
            float m_flTimeInState; // 0x0            
            // m_currentTransitionIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::int32_t> m_currentTransitionIndex;
            char m_currentTransitionIndex[0xc]; // 0x4            
            std::int32_t m_prevStateIndex; // 0x10            
            std::int32_t m_scheduledTransitionIndex; // 0x14            
            uint8_t _pad0018[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStateMachineInstanceData, m_flTimeInState) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CStateMachineInstanceData, m_currentTransitionIndex) == 0x4);
        static_assert(offsetof(source2sdk::animgraphlib::CStateMachineInstanceData, m_prevStateIndex) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CStateMachineInstanceData, m_scheduledTransitionIndex) == 0x14);
        
        static_assert(sizeof(source2sdk::animgraphlib::CStateMachineInstanceData) == 0x1c);
    };
};
