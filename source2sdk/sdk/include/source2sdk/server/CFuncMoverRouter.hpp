#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
    };
};

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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMoverRouter : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04a8[0x8]; // 0x4a8
            std::int32_t m_nMoverIndex; // 0x4b0            
            bool m_bRouteToAllMovers; // 0x4b4            
            uint8_t _pad04b5[0x3]; // 0x4b5
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x4b8            
            uint8_t _pad04bc[0x4]; // 0x4bc
            CUtlSymbolLarge m_iszPathMoverName; // 0x4c0            
            uint8_t _pad04c8[0x20];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputStopImmediate; // 0x0
            // void InputClearFollowMoverEntity; // 0x0
            // int32_t InputSetMoverIndex; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMoverRouter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMoverRouter) == 0x4e8);
    };
};
