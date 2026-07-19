#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_system/CPulseCell_TestWaitWithCursorState.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x24
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_TestWaitWithCursorState_CursorState_t
        {
        public:
            float flWaitValue; // 0x0            
            bool bFail; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            HYieldedCursor m_hSelfCursor; // 0x8            
            HPulseCellBase m_hSelfCellInstanceUntyped; // 0x14            
            // m_hSelfCellInstance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // HPulseCell<source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState> m_hSelfCellInstance;
            char m_hSelfCellInstance[0x8]; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, flWaitValue) == 0x0);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, bFail) == 0x4);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, m_hSelfCursor) == 0x8);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, m_hSelfCellInstanceUntyped) == 0x14);
        static_assert(offsetof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t, m_hSelfCellInstance) == 0x1c);
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseCell_TestWaitWithCursorState_CursorState_t) == 0x24);
    };
};
